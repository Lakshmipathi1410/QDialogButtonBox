/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QTextEdit *textEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ok;
    QPushButton *save;
    QPushButton *saveall;
    QPushButton *open;
    QPushButton *no;
    QPushButton *notoall;
    QPushButton *cancel;

    void setupUi(QWidget *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QString::fromUtf8("InfoDialog"));
        InfoDialog->resize(740, 283);
        verticalLayout = new QVBoxLayout(InfoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(InfoDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 9, 701, 201));
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 220, 598, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ok = new QPushButton(widget);
        ok->setObjectName(QString::fromUtf8("ok"));

        horizontalLayout->addWidget(ok);

        save = new QPushButton(widget);
        save->setObjectName(QString::fromUtf8("save"));

        horizontalLayout->addWidget(save);

        saveall = new QPushButton(widget);
        saveall->setObjectName(QString::fromUtf8("saveall"));

        horizontalLayout->addWidget(saveall);

        open = new QPushButton(widget);
        open->setObjectName(QString::fromUtf8("open"));

        horizontalLayout->addWidget(open);

        no = new QPushButton(widget);
        no->setObjectName(QString::fromUtf8("no"));

        horizontalLayout->addWidget(no);

        notoall = new QPushButton(widget);
        notoall->setObjectName(QString::fromUtf8("notoall"));

        horizontalLayout->addWidget(notoall);

        cancel = new QPushButton(widget);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        horizontalLayout->addWidget(cancel);


        verticalLayout->addWidget(frame);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QWidget *InfoDialog)
    {
        InfoDialog->setWindowTitle(QCoreApplication::translate("InfoDialog", "Form", nullptr));
        ok->setText(QCoreApplication::translate("InfoDialog", "OK", nullptr));
        save->setText(QCoreApplication::translate("InfoDialog", "Save", nullptr));
        saveall->setText(QCoreApplication::translate("InfoDialog", "Save All", nullptr));
        open->setText(QCoreApplication::translate("InfoDialog", "Open", nullptr));
        no->setText(QCoreApplication::translate("InfoDialog", "No", nullptr));
        notoall->setText(QCoreApplication::translate("InfoDialog", "No to All", nullptr));
        cancel->setText(QCoreApplication::translate("InfoDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
