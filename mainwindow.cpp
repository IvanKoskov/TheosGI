#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "welcome.h"
#include <QStyleFactory>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QPushButton>
#include "iphonetweak.h" //for tweaks on ios
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPalette palette = this->palette();
    //palette.setColor(QPalette::Window, QColor("#D3D3D3"));light
    //palette.setColor(QPalette::Window, QColor("#A0A0A0"));darker
    //palette.setColor(QPalette::Window, QColor("#707070")); //dark
    palette.setColor(QPalette::Window, QColor("#000000"));
    this->setAutoFillBackground(true);
    this->setPalette(palette);

     welcomescreen.setFixedSize(400, 200);
    welcomescreen.setWindowTitle("Hello dev!");
     welcomescreen.setStyle(QStyleFactory::create("macOS"));
    welcomescreen.show();
    if (welcomescreen.exec() == QDialog::Accepted) {
        // Only after the welcome dialog is closed, the main window becomes active
        this->show();
    } else {
        // If the welcome screen is rejected, close the application
        QApplication::quit();
    }



    QPixmap iconplace(":/newfiles/utiltheos2.png");
    if (iconplace.isNull()) {

        qDebug()<< "Can not open";
    } else {
        ui->logotype->setPixmap(iconplace.scaled(70, 70, Qt::KeepAspectRatio));

    }





}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionvugviuvv_triggered()
{
    QApplication::exit();
}


void MainWindow::on_actionLicense_triggered()
{
    QMessageBox::about(this, "License and owners", "This project is a modified version of Theos, an open-source development toolkit, and is distributed under the same license as the original software. I am not the creator or owner of Theos but have adapted it to include a graphical user interface (GUI) for enhanced usability. Like Theos, this modified version is entirely free and open-source, adhering to the principles of transparency and accessibility.");
}


void MainWindow::on_actionLinux_Windows_support_triggered()
{
    QMessageBox msgBox(this);
    msgBox.setWindowTitle("Compatibility");
    msgBox.setText("TheosGI does not support Linux and Windows generally, but can be easily, potentially ported from our GitHub. We support help and contributors.");
    msgBox.setIconPixmap(QPixmap(":/newfiles/17097383copy22.png"));
    msgBox.addButton("Back", QMessageBox::RejectRole);
    QAbstractButton *visitButton = msgBox.addButton("Visit GitHub", QMessageBox::AcceptRole);

    msgBox.exec();

    if (msgBox.clickedButton() == visitButton) {
        QDesktopServices::openUrl(QUrl("https://github.com/IvanKoskov/TheosGI"));
    }
}



void MainWindow::on_actionDonate_if_you_want_to_support_triggered()
{

    QDesktopServices::openUrl(QUrl("https://ivankoskov.github.io/archive/"));
}


void MainWindow::on_actionIs_it_official_triggered()
{

    QMessageBox msgBox(this);
    msgBox.setWindowTitle("Is it official?");
    msgBox.setText("No, TheosGI is only shell that was developed just to enhance already working Theos. It is not meant to be official, but rather a good fork of the original thing.");
    msgBox.setIconPixmap(QPixmap(":/newfiles/pngegg2.png"));
    msgBox.exec();
}



void MainWindow::on_actionhhhhhh_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/IvanKoskov/TheosGI"));
}












void MainWindow::on_actioniphone_tweak_triggered() //for iphone tweak and other tweak related stuff
{

    iphonetweak iphonetweakset(this); // Parent set to MainWindow
    iphonetweakset.setFixedSize(400, 300);
    iphonetweakset.setWindowTitle("Iphone/Tweak");
    iphonetweakset.setStyle(QStyleFactory::create("macOS"));
    iphonetweakset.exec(); // Blocks interaction with other windows





   // iphonetweak* iphonetweakset = new iphonetweak(this); // Parent set to MainWindow
    //iphonetweakset->setFixedSize(400, 300);
    //iphonetweakset->setWindowTitle("Iphone/Tweak");
    //iphonetweakset->setStyle(QStyleFactory::create("macOS"));
    //iphonetweakset->show();
}

