#include "historylist.h"
#include "ui_historylist.h"

HistoryList::HistoryList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HistoryList)
{
    ui->setupUi(this);
}

HistoryList::~HistoryList()
{
    delete ui;
}
