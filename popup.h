#ifndef POPUP_H
#define POPUP_H
#include <QMainWindow>
#include <QObject>
#include <QFile>
#include <QTextStream>
namespace Ui {
class popup;
}

class popup : public QMainWindow
{
    Q_OBJECT

public:
    explicit popup(QWidget *parent = nullptr);
    ~popup();



private slots:
    void on_lineEdit_2_editingFinished();

private:
    Ui::popup *ui;
};

#endif // POPUP_H
