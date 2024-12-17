#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "welcome.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionvugviuvv_triggered();

    void on_actionLicense_triggered();

    void on_actionLinux_Windows_support_triggered();

    void on_actionDonate_if_you_want_to_support_triggered();

    void on_actionIs_it_official_triggered();

    void on_actionhhhhhh_triggered();

    void on_actioniphone_tweak_triggered();

private:
    Ui::MainWindow *ui;
     welcome welcomescreen;
};
#endif // MAINWINDOW_H
