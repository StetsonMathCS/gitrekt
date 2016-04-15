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
    ui->lineEdit->setText("Repository!");
    ui->lineEdit_2->setText("User!");
}

void MainWindow::on_pushButton_2_clicked() //Generate button
{
    ui->textBrowser->setText("Display the Blame Report for User in Repository.");
}
