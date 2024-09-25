#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "connector.h"

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void processLogin();

private:
    Ui::MainWindow* ui                  ;
    QLabel*         _label_login        ;
    QLineEdit*      _line_edit_login    ;
    QLabel*         _label_password     ;
    QLineEdit*      _line_edit_password ;
    QPushButton*    _button_login       ;
    QGridLayout*    _main_layout        ;
    QWidget*        _main_widget        ;

    Connector*      _connector{}        ;
};
#endif // MAINWINDOW_H
