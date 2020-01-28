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

    bool up = true;
    double value = ui->progressBar->value();
    if((value == 100 && up ) || (value == 0 && !up))
        up = !up;

    if(up)
        value = value + 5;
    else
        value = value - 5;

    if(up)
        ui->progressBar->setInvertedAppearance(false);
    else
        ui->progressBar->setInvertedAppearance(true);
    ui->progressBar->setValue(value);
}
