#include "iphonetweak.h"
#include "ui_iphonetweak.h"
#include <QLinearGradient>
#include <QDir>
#include <QMessageBox>
#include <QProcess>
iphonetweak::iphonetweak(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::iphonetweak)
{
    ui->setupUi(this);
    //QPalette palette = this->palette();
    //palette.setColor(QPalette::Window, QColor("#D3D3D3"));light
    //palette.setColor(QPalette::Window, QColor("#A0A0A0"));darker
    //palette.setColor(QPalette::Window, QColor("#707070")); //dark
    //palette.setColor(QPalette::Window, QColor("#000000"));
    //this->setAutoFillBackground(true);
    //this->setPalette(palette);

    QPalette palette = this->palette();

    QLinearGradient gradient(0, 0, this->width(), this->height()); // Define the gradient
    gradient.setColorAt(0.0, QColor("#000000")); // Start color (black)
    gradient.setColorAt(1.0, QColor("#505050")); // End color (lighter dark gray)

    QBrush brush(gradient);
    palette.setBrush(QPalette::Window, brush);

    this->setAutoFillBackground(true);
    this->setPalette(palette);

    ui->lineEdit->setPlaceholderText("Tweak");
    ui->lineEdit_2->setPlaceholderText("com.developer.app");
    ui->lineEdit_3->setPlaceholderText("John Millar");
    ui->lineEdit_4->setPlaceholderText("com.apple.springboard");
    ui->lineEdit_5->setPlaceholderText("to terminate...");
}

iphonetweak::~iphonetweak()
{
    delete ui;
}

void iphonetweak::on_pushButton_2_clicked()
{
    this->close();
}


void iphonetweak::on_pushButton_clicked()
{
    QString projectName = ui->lineEdit->text();
    QString bundleIdentifier = ui->lineEdit_2->text();
    QString authorName = ui->lineEdit_3->text();
    QString filter = ui->lineEdit_4->text();
    QString terminateApps = ui->lineEdit_5->text();

    if (projectName.isEmpty() || bundleIdentifier.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill all required fields.");
        return;
    }

    if (authorName.isEmpty()) authorName = "Anonymous";
    if (terminateApps.isEmpty()) terminateApps = "-";  // No apps to terminate

    QString command = QString("/bin/bash -c \"/Users/evan/theos/vendor/nic/bin/nic.pl --template iphone/tweak --name \"%1\" --packagename \"%2\" --user \"%3\"\"")
                          .arg(projectName)
                          .arg(bundleIdentifier)
                          .arg(authorName);

    // If filter and terminate apps are provided, append them to the command
    if (!filter.isEmpty()) {
        command.append(" --filter " + filter);
    }
    if (!terminateApps.isEmpty()) {
        command.append(" --terminate " + terminateApps);
    }

    QProcess process;
    process.setEnvironment({"THEOS=/Users/evan/theos"});  // Explicitly set THEOS in Qt
    process.setWorkingDirectory("/Users/evan/theos");
    process.start(command);

    if (!process.waitForFinished()) {
        QMessageBox::critical(this, "Error", "Failed to generate the tweak template.");
        return;
    }

    QString output = process.readAllStandardOutput();
    QString error = process.readAllStandardError();

    if (!error.isEmpty()) {
        QMessageBox::critical(this, "Error", error);
    } else {
        QMessageBox::information(this, "Success", "Tweak template created successfully!");
    }
}
