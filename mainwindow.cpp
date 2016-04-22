#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wrapper/wrapper.h"
#include "global.h"

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
    ui->lineEdit->text();
    repo = openRpository(ui->lineEdit->text());
    ui->lineEdit_2->setText(ui->lineEdit->text());

}

void MainWindow::on_pushButton_2_clicked() //Generate button
{
    ui->textBrowser->setText("Display the Blame Report for User in Repository.");
}
