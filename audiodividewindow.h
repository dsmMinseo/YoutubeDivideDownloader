#ifndef AUDIODIVIDEWINDOW_H
#define AUDIODIVIDEWINDOW_H

#include <QDialog>

namespace Ui {
class AudioDivideWindow;
}

class AudioDivideWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AudioDivideWindow(QWidget *parent = nullptr);
    ~AudioDivideWindow();

private:
    Ui::AudioDivideWindow *ui;
};

#endif // AUDIODIVIDEWINDOW_H
