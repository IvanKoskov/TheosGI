#include "welcome.h"
#include "ui_welcome.h"
#include <QDesktopServices>
#include <QPalette>
welcome::welcome(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::welcome)
{
    ui->setupUi(this);
    QPalette palette = this->palette();
    //palette.setColor(QPalette::Window, QColor("#D3D3D3"));light
    //palette.setColor(QPalette::Window, QColor("#A0A0A0"));darker
    //palette.setColor(QPalette::Window, QColor("#707070")); //dark
    palette.setColor(QPalette::Window, QColor("#000000"));
    this->setAutoFillBackground(true);
    this->setPalette(palette);


    QPixmap iconofapp(":/newfiles/utiltheos2.png");
    if (iconofapp.isNull()) {
        qDebug() << "Failed to load image!";
    } else {
        ui->iconoftheos->setPixmap(iconofapp.scaled(70, 70, Qt::KeepAspectRatio));
    }

    QPixmap icondev(":/newfiles/github-mark-white2.svg");
    if (icondev.isNull()) {

        qDebug()<< "Can not open";
    } else {
        ui->github->setPixmap(icondev.scaled(40, 40, Qt::KeepAspectRatio));

    }
}

welcome::~welcome()
{
    delete ui;
}

void welcome::on_pushButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://theos.dev"));
}


void welcome::on_pushButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/IvanKoskov/TheosGI"));
}


void welcome::on_pushButton_openmain_clicked()
{
    this->close();
}

