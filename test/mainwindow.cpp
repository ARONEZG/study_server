#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    for (int i = 0; i < 2; ++i) {
        meta_obj = connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::on_PB_clicked);
    }
    disconnect(meta_obj);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PB_clicked()
{
    QPushButton* tmp_btn = static_cast<QPushButton*>(sender());
    qDebug() << "privet";
}


void MainWindow::on_actionopen_triggered()
{
    qDebug() << "open";
}

