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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QLabel *label;
    QLabel *label_3;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QRadioButton *Windows;
    QRadioButton *Mac;
    QRadioButton *Linux;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QString::fromUtf8("InfoDialog"));
        InfoDialog->resize(400, 300);
        horizontalLayout = new QHBoxLayout(InfoDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(InfoDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 101, 16));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 71, 16));
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(80, 120, 281, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(350, 130, 20, 111));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(frame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 130, 20, 111));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(frame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(20, 230, 341, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 70, 341, 24));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        widget1 = new QWidget(frame);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(40, 150, 87, 74));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Windows = new QRadioButton(widget1);
        Windows->setObjectName(QString::fromUtf8("Windows"));

        verticalLayout->addWidget(Windows);

        Mac = new QRadioButton(widget1);
        Mac->setObjectName(QString::fromUtf8("Mac"));

        verticalLayout->addWidget(Mac);

        Linux = new QRadioButton(widget1);
        Linux->setObjectName(QString::fromUtf8("Linux"));

        verticalLayout->addWidget(Linux);

        widget2 = new QWidget(frame);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(200, 250, 168, 24));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        horizontalLayout->addWidget(frame);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QWidget *InfoDialog)
    {
        InfoDialog->setWindowTitle(QCoreApplication::translate("InfoDialog", "Form", nullptr));
        label->setText(QCoreApplication::translate("InfoDialog", "Your Information:", nullptr));
        label_3->setText(QCoreApplication::translate("InfoDialog", "Favorite OS:", nullptr));
        label_2->setText(QCoreApplication::translate("InfoDialog", "Position:", nullptr));
        Windows->setText(QCoreApplication::translate("InfoDialog", "Windows", nullptr));
        Mac->setText(QCoreApplication::translate("InfoDialog", "Mac", nullptr));
        Linux->setText(QCoreApplication::translate("InfoDialog", "Linux", nullptr));
        pushButton->setText(QCoreApplication::translate("InfoDialog", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("InfoDialog", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
