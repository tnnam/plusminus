#include "plusminus.h"
#include "ui_plusminus.h"

plusminus::plusminus(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::plusminus)
{
    ui->setupUi(this);
}

plusminus::~plusminus()
{
    delete ui;
}

void plusminus::on_plusButton_clicked()
{
    int a = ui->display->text().toInt();
    a++;
    ui->display->setText(QString::number(a));
}

void plusminus::on_minusButton_clicked()
{
    int a = ui->display->text().toInt();
    a--;
    ui->display->setText(QString::number(a));
}
