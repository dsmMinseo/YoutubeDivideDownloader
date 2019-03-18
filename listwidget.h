#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QDialog>

namespace Ui {
class ListWidget;
}

class ListWidget : public QDialog
{
    Q_OBJECT

public:
    explicit ListWidget(QWidget *parent = nullptr);
    ~ListWidget();

private:
    Ui::ListWidget *ui;
};

#endif // LISTWIDGET_H
