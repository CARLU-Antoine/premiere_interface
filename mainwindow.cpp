#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), compteur(1)
{
    ui->setupUi(this);
    ui->lcdNumber->display(0);
    connect(ui->pushButton, &QPushButton::clicked,this,&MainWindow::monAction);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::monAction(){

   compteur++;
    ui->lcdNumber->display(compteur);

}


void MainWindow::on_pushButton_clicked()
{
    QString insertValue1 = ui->lineEdit->text();

    QString insertValue2 = ui->lineEdit_2->text();

    ui->textBrowser->setText(insertValue2 + insertValue1);


}

