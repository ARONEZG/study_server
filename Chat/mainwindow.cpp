#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _connector = new Connector(this);
    connect(_connector, &Connector::connected, this, [this](){
        _main_widget        = new QWidget(this);
        _main_layout        = new QGridLayout(_main_widget);
        setCentralWidget(_main_widget);
        _label_login        = new QLabel("login", this);
        _label_password     = new QLabel("password", this);
        _line_edit_login    = new QLineEdit(this);
        _line_edit_password = new QLineEdit(this);
        _button_login       = new QPushButton("enter", this);
        setFixedSize(300, 150);
        _main_layout->addWidget(_label_login);
        _main_layout->addWidget(_line_edit_login);
        _main_layout->addWidget(_label_password);
        _main_layout->addWidget(_line_edit_password);
        _main_layout->addWidget(_button_login);
        connect(_button_login, &QPushButton::clicked, this, &MainWindow::processLogin);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::processLogin()
{

}
