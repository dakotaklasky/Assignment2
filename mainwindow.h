#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private:
    Ui::MainWindow *ui;

public slots:
    double compute_sum(){
        return a = ui->spinBox.value()+ ui->spinBox_2.value();
    }

signals:

};

#endif // MAINWINDOW_H
