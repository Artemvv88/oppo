#include "mydialog.h"
#include "ui_mydialog.h"
#include "QAction"
#include <QSpinBox>
#include <QTextEdit>
#include <QHBoxLayout>

mydialog::mydialog(QWidget *parent) : QMainWindow(parent), ui(new Ui::mydialog)
{
    setWindowTitle("Анкета");
    setWindowTitle("Анкета");
       QSpinBox *sBox = new QSpinBox;
       QTextEdit *tEdit = new QTextEdit;
       QHBoxLayout *Hlay = new QHBoxLayout;
       Hlay->addWidget(sBox);
       Hlay->addWidget(tEdit);
}

mydialog::~mydialog()
{

    delete ui;
}
