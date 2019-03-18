#include "selectwindow.h"
#include "ui_selectwindow.h"

SelectWindow::SelectWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectWindow)
{
    ui->setupUi(this);
}

SelectWindow::~SelectWindow()
{
    delete ui;
}
