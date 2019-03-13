#ifndef HISTORYLIST_H
#define HISTORYLIST_H

#include <QDialog>

namespace Ui {
class HistoryList;
}

class HistoryList : public QDialog
{
    Q_OBJECT

public:
    explicit HistoryList(QWidget *parent = nullptr);
    ~HistoryList();

private:
    Ui::HistoryList *ui;
};

#endif // HISTORYLIST_H
