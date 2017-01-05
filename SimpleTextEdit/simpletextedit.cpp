#include "simpletextedit.h"
#include <QtTest>
#include <QException>

class ConnectionCreationFailedException : public QException {

	ConnectionCreationFailedException *ConnectionCreationFailedException::clone() const {
		return new ConnectionCreationFailedException(*this);
	}

	void ConnectionCreationFailedException::raise() const {
		throw *this;
	}

} ConnectionCreationFailedException;

SimpleTextEdit::SimpleTextEdit(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	txtSrc = TextSource();
	fileStatus = new QLabel(this);
	fileStatus->setText("File Open: No");
	ui.statusBar->addWidget(fileStatus);

	try {
		if (!connect(ui.actionExit, SIGNAL(triggered()), this, SLOT(exit()))) {
			throw ConnectionCreationFailedException;
		}
		if (!connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(open()))) {
			throw ConnectionCreationFailedException;
		}
		if (!connect(ui.actionSave_As, SIGNAL(triggered()), this, SLOT(saveAs()))) {
			throw ConnectionCreationFailedException;
		}
		if (!connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(create_newFile()))) {
			throw ConnectionCreationFailedException;
		}
		if (!connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(save()))) {
			throw ConnectionCreationFailedException;
		}
		if (!connect(ui.textEdit, SIGNAL(textChanged()), this, SLOT(enableSave()))) {
			throw ConnectionCreationFailedException;
		}
		if (!connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(save()))) {
			throw ConnectionCreationFailedException;
		}
		if (!connect(ui.actionAbout_SimpleTextEdit, SIGNAL(triggered()), this, SLOT(about()))) {
			throw ConnectionCreationFailedException;
		}
		if (!connect(ui.textEdit, SIGNAL(textChanged()), this, SLOT(textExists()))) {
			throw ConnectionCreationFailedException;
		}
		if (!connect(ui.actionUndo, SIGNAL(triggered()), this, SLOT(undo()))) {
			throw ConnectionCreationFailedException;
		}
		if (!connect(ui.actionSelect_All, SIGNAL(triggered()), this, SLOT(select_all()))) {
			throw ConnectionCreationFailedException;
		}
	}

	catch (QException& e) {
		qDebug() << e.what() << '\n';
		this->close();
	}
}



SimpleTextEdit::~SimpleTextEdit()
{
}

void SimpleTextEdit::exit()
{
	this->close();
}


void SimpleTextEdit::open()
{
	// Standard string used for storing file name
	std::string stdFileName;
	int loop = 1;

	if (txtSrc.hasContent()) {
		int warning = QMessageBox::warning(this,
			"Error", "Content Already in Source!", QMessageBox::Ok, QMessageBox::Cancel);
		if (warning == QMessageBox::Cancel) {
			loop = 0;
		}
	}

	while (loop == 1) {
		// Qt string used to retrieve user input of file name
		QFileDialog dialog(this);
		QString fileName = dialog.getOpenFileName(this,
			tr("Open Document"), "",
			tr("Text Files (*.txt);;Configuration Files (*.ini);;XML Files (*.xml);;All Files (*)"));
		

		if (fileName.isEmpty()) {
			loop = 0;
		}
		// Convert from Qt string to standard string
		stdFileName.assign(fileName.toStdString());

		// Open the file to the ui
		txtSrc = man.open(stdFileName);
		if (txtSrc.getSrc() == "") {
			int warning = QMessageBox::warning(this,
				"Error", "No File Name Entered!", QMessageBox::Ok, QMessageBox::Cancel);
			if (warning == QMessageBox::Ok) {
				loop = 0;
			}
			else if (warning == QMessageBox::Cancel) {
				loop = 1;
			}
		}
		else {
			loop = 0;
			QString content = QString::fromStdString(txtSrc.getContent());
			ui.textEdit->setPlainText(content);
			txtSrc.setHasContent();
			fileStatus->setText("File Open: Yes");
			txtSrc.setModified();
		}
	}
}

void SimpleTextEdit::create_newFile()
{
	bool clear = false;
	QMessageBox *msgBox = new QMessageBox(this);
	msgBox->setText("Are You sure you want to open a new document?");
	msgBox->setStandardButtons(QMessageBox::Yes | QMessageBox::No);
	int toClear = msgBox->exec();
	if (toClear == QMessageBox::Yes) {
		clear = true;
	}

	if (clear == true) {
		txtSrc.setSrc("");
		txtSrc.setContent("");
		QString content = QString::fromStdString(txtSrc.getContent());
		ui.textEdit->setPlainText(content);
		ui.actionSave->setEnabled(false);
		txtSrc.setModified();
	}
}

void SimpleTextEdit::saveAs()
{
	std::string stdFileName;

	QFileDialog dialog(this);
	QString fileName = dialog.getSaveFileName(this,
		tr("Open Document"), "",
		tr("Text Files (*.txt);;Configuration Files (*.ini);;XML Files (*.xml);;All Files (*)"));

	stdFileName.assign(fileName.toStdString());
	std::string content = ui.textEdit->toPlainText().toStdString();
	txtSrc.setContent(content);
	txtSrc.setSrc(stdFileName);
	txtSrc.setHasContent();
	txtSrc = man.write(stdFileName, content);
	fileStatus->setText("File Open: Yes");
	txtSrc.setModified();
}

void SimpleTextEdit::save()
{
	if (txtSrc.isModified()) {
		std::string stdFileName = txtSrc.getSrc();
		std::string content = ui.textEdit->toPlainText().toStdString();
		txtSrc = man.write(stdFileName, content);
		fileStatus->setText("File Open: Yes");
		ui.actionSave->setEnabled(false);
		txtSrc.setModified();
	}
}

void SimpleTextEdit::enableSave()
{
	if (txtSrc.isModified()) {
		ui.actionSave->setEnabled(true);
	}
}

void SimpleTextEdit::about()
{
	QString aboutMessage = QString::fromUtf8("SimpleTextEdit is a simple text editor.\nFor technical support, email pshekhter@gmail.com.");
	QMessageBox::about(this, "About SimpleTextEdit",
		aboutMessage);
}

void SimpleTextEdit::textExists()
{
	if (!undoAvail) {
		ui.actionUndo->setEnabled(true);
		ui.textEdit->undoAvailable(true);
		undoAvail = true;
	}
	else {
		ui.actionUndo->setEnabled(false);
		ui.textEdit->undoAvailable(false);
		undoAvail = false;
	}
	std::string content = ui.textEdit->toPlainText().toStdString();
	if (content.length() > 0) {
		ui.actionSelect_All->setEnabled(true);
	}
	else if (content.length() <= 0) {
		ui.actionSelect_All->setEnabled(false);
	}
}

void SimpleTextEdit::undo()
{
	ui.textEdit->undo();
}

void SimpleTextEdit::select_all()
{
	ui.textEdit->selectAll();
}


