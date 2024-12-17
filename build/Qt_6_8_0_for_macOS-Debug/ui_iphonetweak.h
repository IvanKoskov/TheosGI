/********************************************************************************
** Form generated from reading UI file 'iphonetweak.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IPHONETWEAK_H
#define UI_IPHONETWEAK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_iphonetweak
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *projectname;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;

    void setupUi(QDialog *iphonetweak)
    {
        if (iphonetweak->objectName().isEmpty())
            iphonetweak->setObjectName("iphonetweak");
        iphonetweak->resize(403, 300);
        verticalLayoutWidget = new QWidget(iphonetweak);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 50, 361, 275));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        projectname = new QLabel(verticalLayoutWidget);
        projectname->setObjectName("projectname");

        horizontalLayout->addWidget(projectname);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");

        horizontalLayout_5->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color:black; color: white; border-style: outset; border-width:2px; border-radius:6px; border-color:grey; font:bold 14px;"));

        horizontalLayout_6->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:black; color: white; border-style: outset; border-width:2px; border-radius:6px; border-color:#FFA500; font:bold 14px;"));

        horizontalLayout_6->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(iphonetweak);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 20, 101, 21));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color:black; border-style: outset; border-width:2px; border-radius:6px; border-color:grey; color: white;"));

        retranslateUi(iphonetweak);

        QMetaObject::connectSlotsByName(iphonetweak);
    } // setupUi

    void retranslateUi(QDialog *iphonetweak)
    {
        iphonetweak->setWindowTitle(QCoreApplication::translate("iphonetweak", "Dialog", nullptr));
        projectname->setText(QCoreApplication::translate("iphonetweak", "<html><head/><body><p><span style=\" font-weight:700; color:#ffc81e;\">Project name:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("iphonetweak", "<html><head/><body><p><span style=\" font-weight:700; color:#ffb700;\">Bundle Identifier:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("iphonetweak", "<html><head/><body><p><span style=\" font-weight:700; color:#f7d207;\">Author's name:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("iphonetweak", "<html><head/><body><p><span style=\" font-family:'Monaco'; font-size:12px; color:#f7be2b;\">MobileSubstrate Bundle filter</span></p><p><span style=\" font-family:'Monaco'; font-size:12px; color:#f7be2b;\"> [com.apple.springboard]:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("iphonetweak", "<html><head/><body><p><span style=\" font-weight:700; color:#f8c544;\">List of applications to </span></p><p><span style=\" font-weight:700; color:#f8c544;\">terminate upon installation:</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("iphonetweak", "<html><head/><body><p><span style=\" color:#d0d0d0;\">&quot;-&quot; put for skip</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("iphonetweak", "Proceed", nullptr));
        pushButton_2->setText(QCoreApplication::translate("iphonetweak", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("iphonetweak", "Iphone Tweak", nullptr));
    } // retranslateUi

};

namespace Ui {
    class iphonetweak: public Ui_iphonetweak {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPHONETWEAK_H
