/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *iconoftheos;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *github;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QPushButton *pushButton_openmain;
    QLabel *label_3;

    void setupUi(QDialog *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName("welcome");
        welcome->resize(400, 300);
        horizontalLayoutWidget = new QWidget(welcome);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(90, 20, 284, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setItalic(true);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        iconoftheos = new QLabel(welcome);
        iconoftheos->setObjectName("iconoftheos");
        iconoftheos->setGeometry(QRect(10, 20, 71, 61));
        horizontalLayoutWidget_2 = new QWidget(welcome);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(-20, 110, 263, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        github = new QLabel(horizontalLayoutWidget_2);
        github->setObjectName("github");

        horizontalLayout_2->addWidget(github);

        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName("pushButton");
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setHintingPreference(QFont::PreferVerticalHinting);
        pushButton->setFont(font2);
        pushButton->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:black; color: white; border-style: outset; border-width:2px; border-radius:6px; border-color:grey; font:bold 14px;"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName("pushButton_2");
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(27, 28, 28, 216));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        QBrush brush4(QColor(27, 11, 11, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Accent, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush4);
        pushButton_2->setPalette(palette);
        QFont font3;
        font3.setBold(true);
        font3.setItalic(false);
        font3.setHintingPreference(QFont::PreferFullHinting);
        pushButton_2->setFont(font3);
        pushButton_2->setFocusPolicy(Qt::FocusPolicy::WheelFocus);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:black; color: white; border-style: outset; border-width:2px; border-radius:6px; border-color:grey; font:bold 14px;"));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        line = new QFrame(welcome);
        line->setObjectName("line");
        line->setGeometry(QRect(-3, 90, 401, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_openmain = new QPushButton(welcome);
        pushButton_openmain->setObjectName("pushButton_openmain");
        pushButton_openmain->setGeometry(QRect(270, 130, 100, 32));
        pushButton_openmain->setStyleSheet(QString::fromUtf8("background-color:black; color: white; border-style: outset; border-width:2px; border-radius:6px; border-color:#FFA500; font:bold 14px;"));
        label_3 = new QLabel(welcome);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 10, 58, 16));

        retranslateUi(welcome);

        QMetaObject::connectSlotsByName(welcome);
    } // setupUi

    void retranslateUi(QDialog *welcome)
    {
        welcome->setWindowTitle(QCoreApplication::translate("welcome", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("welcome", "<html><head/><body><p><span style=\" color:#ffffff;\">Theos GI</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("welcome", "<html><head/><body><p><span style=\" color:#fec448;\">Theos</span><span style=\" color:#fffbee;\"> fork packed with clear </span><span style=\" color:#fec431;\">GUI shell</span><span style=\" color:#fffbee;\"> within it</span></p></body></html>", nullptr));
        iconoftheos->setText(QCoreApplication::translate("welcome", "HIII", nullptr));
        github->setText(QCoreApplication::translate("welcome", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("welcome", "Theos", nullptr));
        pushButton_2->setText(QCoreApplication::translate("welcome", "Theos GI", nullptr));
        pushButton_openmain->setText(QCoreApplication::translate("welcome", "Continue", nullptr));
        label_3->setText(QCoreApplication::translate("welcome", "<html><head/><body><p><span style=\" font-style:italic; color:#a90000;\">Unofficial</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
