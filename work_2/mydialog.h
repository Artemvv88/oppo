#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QMainWindow>
#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSpinBox>
#include <QTextEdit>
#include <QComboBox>
#include <QPushButton>
#include <QFile>
#include <QIODevice>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui { class mydialog; }
QT_END_NAMESPACE

class mydialog : public QMainWindow
{
    Q_OBJECT

private:
    QVBoxLayout *v_lay;
    Ui::mydialog *ui;
    QSpinBox *sb_spinner;
    QTextEdit *te_text;
    QComboBox *cb_variants;
    QPushButton *btn_save;
public:
    mydialog(QWidget *parent = nullptr);
    ~mydialog();

private slots:
    void OnSaveCalled();
};
#endif // MYDIALOG_H
