#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->spinBox->setMaximum(100);
    ui->spinBox_2->setMaximum(100);
    ui->spinBox_3->setMaximum(100);
    ui->spinBox_4->setMaximum(100);
    ui->spinBox_5->setMaximum(100);
    ui->spinBox_6->setMaximum(100);
    ui->spinBox_7->setMaximum(100);
    ui->spinBox_8->setMaximum(100);
    ui->spinBox_9->setMaximum(100);
    ui->spinBox_10->setMaximum(100);
     ui->spinBox_11->setMaximum(100);
     ui->horizontalSlider->setMaximum(100);
     ui->horizontalSlider_2->setMaximum(100);
     ui->horizontalSlider_3->setMaximum(100);
     ui->horizontalSlider_4->setMaximum(100);
     ui->horizontalSlider_5->setMaximum(100);
     ui->horizontalSlider_6->setMaximum(100);
     ui->horizontalSlider_7->setMaximum(100);
     ui->horizontalSlider_8->setMaximum(100);
     ui->horizontalSlider_9->setMaximum(100);
     ui->horizontalSlider_10->setMaximum(100);
     ui->horizontalSlider_11->setMaximum(100);

     ui->comboBox->addItem("PIC 10B");
     ui->comboBox->addItem("PIC 10C");
}


MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pushButton_clicked()
{
    if (ui->comboBox->currentText() == "PIC 10B"){

        double a,b,c,d,e,f,g,h,i,j,k,l;
        a=ui->spinBox->value();
        b=ui->spinBox_2->value();
        c=ui->spinBox_3->value();
        d=ui->spinBox_4->value();
        e=ui->spinBox_5->value();
        f=ui->spinBox_6->value();
        g=ui->spinBox_7->value();
        h=ui->spinBox_8->value();
        i=ui->spinBox_9->value();
        j=ui->spinBox_10->value();
        k=ui->spinBox_11->value();

if (ui->radioButton->isChecked()){
        l= ((a+b+c+d+e+f+g+h)/8)*.25+i*.20+j*.20+k*.35;

        ui->lineEdit_9->setText(QString::number(l));
}
else
{
        if (i>j){
        l= ((a+b+c+d+e+f+g+h)/8)*.25+i*.30+k*.45;
        ui->lineEdit_9->setText(QString::number(l));
        }
        else {
            l= ((a+b+c+d+e+f+g+h)/8)*.25+j*.30+k*.45;
            ui->lineEdit_9->setText(QString::number(l));
        }
}
    }

else{
        double a,b,c,j,k,l;
        a=ui->spinBox->value();
        b=ui->spinBox_2->value();
        c=ui->spinBox_3->value();
        j=ui->spinBox_10->value();
        k=ui->spinBox_11->value();

if (ui->radioButton->isChecked()){
        l= ((a+b+c)/3)*.15+j*.25+k*.60;

        ui->lineEdit_9->setText(QString::number(l));
}

else
{
        l= ((a+b+c)/3)*.35+k*.65;
        ui->lineEdit_9->setText(QString::number(l));

}
    }
}


