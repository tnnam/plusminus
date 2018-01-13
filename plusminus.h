#ifndef PLUSMINUS_H
#define PLUSMINUS_H

#include <QMainWindow>

namespace Ui {
class plusminus;
}

class plusminus : public QMainWindow
{
    Q_OBJECT

public:
    explicit plusminus(QWidget *parent = 0);
    ~plusminus();

private slots:
    void on_plusButton_clicked();

    void on_minusButton_clicked();

private:
    Ui::plusminus *ui;
};

#endif // PLUSMINUS_H
