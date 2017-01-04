/********************************************************************************
** Form generated from reading UI file 'simpletextedit.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLETEXTEDIT_H
#define UI_SIMPLETEXTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimpleTextEditClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_As;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionSelect_All;
    QAction *actionHelp;
    QAction *actionAbout_SimpleTextEdit;
    QAction *actionAbout_Qt;
    QAction *actionLicense;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SimpleTextEditClass)
    {
        if (SimpleTextEditClass->objectName().isEmpty())
            SimpleTextEditClass->setObjectName(QStringLiteral("SimpleTextEditClass"));
        SimpleTextEditClass->resize(468, 303);
        actionNew = new QAction(SimpleTextEditClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(SimpleTextEditClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave_As = new QAction(SimpleTextEditClass);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionSave = new QAction(SimpleTextEditClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExit = new QAction(SimpleTextEditClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionUndo = new QAction(SimpleTextEditClass);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(SimpleTextEditClass);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionRedo->setEnabled(false);
        actionCut = new QAction(SimpleTextEditClass);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCopy = new QAction(SimpleTextEditClass);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(SimpleTextEditClass);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionDelete = new QAction(SimpleTextEditClass);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionSelect_All = new QAction(SimpleTextEditClass);
        actionSelect_All->setObjectName(QStringLiteral("actionSelect_All"));
        actionHelp = new QAction(SimpleTextEditClass);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionAbout_SimpleTextEdit = new QAction(SimpleTextEditClass);
        actionAbout_SimpleTextEdit->setObjectName(QStringLiteral("actionAbout_SimpleTextEdit"));
        actionAbout_Qt = new QAction(SimpleTextEditClass);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        actionLicense = new QAction(SimpleTextEditClass);
        actionLicense->setObjectName(QStringLiteral("actionLicense"));
        centralWidget = new QWidget(SimpleTextEditClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        SimpleTextEditClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SimpleTextEditClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 468, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        SimpleTextEditClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SimpleTextEditClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SimpleTextEditClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SimpleTextEditClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SimpleTextEditClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addAction(actionSelect_All);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout_SimpleTextEdit);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_Qt);
        menuHelp->addAction(actionLicense);

        retranslateUi(SimpleTextEditClass);

        QMetaObject::connectSlotsByName(SimpleTextEditClass);
    } // setupUi

    void retranslateUi(QMainWindow *SimpleTextEditClass)
    {
        SimpleTextEditClass->setWindowTitle(QApplication::translate("SimpleTextEditClass", "SimpleTextEdit", Q_NULLPTR));
        actionNew->setText(QApplication::translate("SimpleTextEditClass", "New", Q_NULLPTR));
        actionNew->setShortcut(QApplication::translate("SimpleTextEditClass", "Ctrl+N", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("SimpleTextEditClass", "Open", Q_NULLPTR));
        actionOpen->setShortcut(QApplication::translate("SimpleTextEditClass", "Ctrl+O", Q_NULLPTR));
        actionSave_As->setText(QApplication::translate("SimpleTextEditClass", "Save As", Q_NULLPTR));
        actionSave->setText(QApplication::translate("SimpleTextEditClass", "Save", Q_NULLPTR));
        actionSave->setShortcut(QApplication::translate("SimpleTextEditClass", "Ctrl+S", Q_NULLPTR));
        actionExit->setText(QApplication::translate("SimpleTextEditClass", "Exit", Q_NULLPTR));
        actionUndo->setText(QApplication::translate("SimpleTextEditClass", "Undo", Q_NULLPTR));
        actionUndo->setShortcut(QApplication::translate("SimpleTextEditClass", "Ctrl+Z", Q_NULLPTR));
        actionRedo->setText(QApplication::translate("SimpleTextEditClass", "Redo", Q_NULLPTR));
        actionRedo->setShortcut(QApplication::translate("SimpleTextEditClass", "Ctrl+Y", Q_NULLPTR));
        actionCut->setText(QApplication::translate("SimpleTextEditClass", "Cut", Q_NULLPTR));
        actionCut->setShortcut(QApplication::translate("SimpleTextEditClass", "Ctrl+X", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("SimpleTextEditClass", "Copy", Q_NULLPTR));
        actionCopy->setShortcut(QApplication::translate("SimpleTextEditClass", "Ctrl+C", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("SimpleTextEditClass", "Paste", Q_NULLPTR));
        actionPaste->setShortcut(QApplication::translate("SimpleTextEditClass", "Ctrl+V", Q_NULLPTR));
        actionDelete->setText(QApplication::translate("SimpleTextEditClass", "Delete", Q_NULLPTR));
        actionSelect_All->setText(QApplication::translate("SimpleTextEditClass", "Select All", Q_NULLPTR));
        actionSelect_All->setShortcut(QApplication::translate("SimpleTextEditClass", "Ctrl+A", Q_NULLPTR));
        actionHelp->setText(QApplication::translate("SimpleTextEditClass", "Help", Q_NULLPTR));
        actionHelp->setShortcut(QApplication::translate("SimpleTextEditClass", "Ctrl+?", Q_NULLPTR));
        actionAbout_SimpleTextEdit->setText(QApplication::translate("SimpleTextEditClass", "About SimpleTextEdit", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("SimpleTextEditClass", "About Qt", Q_NULLPTR));
        actionLicense->setText(QApplication::translate("SimpleTextEditClass", "License", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("SimpleTextEditClass", "&File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("SimpleTextEditClass", "&Edit", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("SimpleTextEditClass", "&Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SimpleTextEditClass: public Ui_SimpleTextEditClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLETEXTEDIT_H
