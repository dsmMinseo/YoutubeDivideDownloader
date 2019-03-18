#ifndef SELECTWINDOW_H
#define SELECTWINDOW_H

#include <QDialog>

namespace Ui {
class SelectWindow;
}

class SelectWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SelectWindow(QWidget *parent = nullptr);
    ~SelectWindow();

private:
    Ui::SelectWindow *ui;
};

#endif // SELECTWINDOW_H
