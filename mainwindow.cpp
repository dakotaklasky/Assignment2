#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pushButton_clicked()
{

        double a,b,c,d,e,f,g,h,i;
        a=ui->lineEdit->text().toDouble();
        b=ui->lineEdit_2->text().toDouble();
        c=ui->lineEdit_3->text().toDouble();
        d=ui->lineEdit_4->text().toDouble();
        e=ui->lineEdit_5->text().toDouble();
        f=ui->lineEdit_6->text().toDouble();
        g=ui->lineEdit_7->text().toDouble();
        h=ui->lineEdit_8->text().toDouble();
        i= a+b+c+d+e+f+g+h;

        ui->lineEdit_9->setText(QString::number(i));
}
