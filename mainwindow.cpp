#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
    connect(ui->p_B,&QPushButton::clicked,this,&MainWindow::updateValue);
}

void MainWindow::updateValue()
{
    if (ui->progressBar->value() == 100)
    {
        ui->progressBar->setValue(0);
    }
    else
    {
        ui->progressBar->setValue(ui->progressBar->value()+10);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
