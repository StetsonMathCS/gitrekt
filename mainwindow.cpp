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

void MainWindow::on_pushButton_clicked() //Analysis button
{
    ui->label->setText("works!");
}

void MainWindow::on_pushButton_2_clicked() //Generate button
{
    ui->label_2->setText("works!");
}
