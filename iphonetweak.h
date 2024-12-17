#ifndef IPHONETWEAK_H
#define IPHONETWEAK_H

#include <QDialog>

namespace Ui {
class iphonetweak;
}

class iphonetweak : public QDialog
{
    Q_OBJECT

public:
    explicit iphonetweak(QWidget *parent = nullptr);
    ~iphonetweak();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::iphonetweak *ui;
};

#endif // IPHONETWEAK_H
