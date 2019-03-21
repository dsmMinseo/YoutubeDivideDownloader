#include "audiodividewindow.h"
#include "ui_audiodividewindow.h"

AudioDivideWindow::AudioDivideWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AudioDivideWindow)
{
    ui->setupUi(this);
}

AudioDivideWindow::~AudioDivideWindow()
{
    delete ui;
}
