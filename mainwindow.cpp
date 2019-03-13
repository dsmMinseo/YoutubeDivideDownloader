#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pixAdd(":/resources/icon/add.png");
    QPixmap pixHelp(":/resources/icon/help.png");
    QPixmap pixSetting(":/resources/icon/setting.png");
    ui->label_addImg->setPixmap(pixAdd.scaled(50, 50, Qt::KeepAspectRatio));
    ui->label_helpImg->setPixmap(pixHelp.scaled(50, 50, Qt::KeepAspectRatio));
    ui->label_settingImg->setPixmap(pixSetting.scaled(50, 50, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}
