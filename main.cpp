#include "mainwindow.h"
#include <QStandardPaths>
#include <QApplication>
#include <QDir>

void createStourageForTheApp() {

    QString homePath = QStandardPaths::writableLocation(QStandardPaths::HomeLocation);


    QString storagePath = homePath + "/Documents/SFfiles";


    QDir dir(storagePath);
    if (!dir.exists()) {
        if (dir.mkpath(".")) {
            qDebug() << "Storage directory created at:" << storagePath;
        } else {
            qDebug() << "Failed to create storage directory at:" << storagePath;
        }
    } else {
        qDebug() << "Storage directory already exists at:" << storagePath;
    }
}




int main(int argc, char *argv[])
{


    createStourageForTheApp();
    QApplication a(argc, argv);
    QApplication::setWindowIcon(QIcon(":/newfiles/utiltheoscopycopy66.icns"));

    MainWindow w;


    w.setFixedSize(800, 600);
    w.setWindowTitle("Theos GI Universal Alpha");
    w.show();
    return a.exec();
}
