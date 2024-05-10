#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QButtonGroup"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ConnectBtn();
    QButtonGroup* group = new QButtonGroup(this);
    group->setExclusive(true);
    group->addButton(ui->BtnMainPage,0);
    group->addButton(ui->BtnNormCalc,1);
    group->addButton(ui->BtnComplexCalc,2);
    group->addButton(ui->BtnVectorCalc,3);
    group->addButton(ui->BtnMatrixCalc,4);
    group->addButton(ui->BtnStatCalc,5);
    group->addButton(ui->BtnCalculusCalc,6);
    group->addButton(ui->BtnFuncCalc,7);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ConnectBtn()
{
    connect(ui->BtnMainPage,SIGNAL(clicked),this,SLOT(on_BtnMainPage_clicked));
    connect(ui->BtnNormCalc,SIGNAL(clicked),this,SLOT(on_BtnNormCalc_clicked));
    connect(ui->BtnComplexCalc,SIGNAL(clicked),this,SLOT(on_BtnComplexCalc_clicked));
    connect(ui->BtnVectorCalc,SIGNAL(clicked),this,SLOT(on_BtnVectorCalc_clicked));
    connect(ui->BtnMatrixCalc,SIGNAL(clicked),this,SLOT(on_BtnMatrixCalc_clicked));
    connect(ui->BtnStatCalc,SIGNAL(clicked),this,SLOT(on_BtnStatCalc_clicked));
    connect(ui->BtnCalculusCalc,SIGNAL(clicked),this,SLOT(on_BtnCalculusCalc_clicked));
    connect(ui->BtnFuncCalc,SIGNAL(clicked),this,SLOT(on_BtnFuncCalc_clicked));
}


void MainWindow::on_BtnMainPage_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_BtnNormCalc_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_BtnComplexCalc_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_BtnVectorCalc_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_BtnMatrixCalc_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_BtnStatCalc_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_BtnCalculusCalc_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_BtnFuncCalc_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

