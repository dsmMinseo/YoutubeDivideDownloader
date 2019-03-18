#include "listwidget.h"
#include "ui_listwidget.h"

ListWidget::ListWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListWidget)
{
    ui->setupUi(this);
}

ListWidget::~ListWidget()
{
    delete ui;
}
