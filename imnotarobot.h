#ifndef IMNOTAROBOT_H
#define IMNOTAROBOT_H
#include <QObject>
#include <QLineEdit>
#include <QMainWindow>

namespace Ui {
class imnotarobot;
}

class imnotarobot : public QMainWindow
{
    Q_OBJECT

public:
  explicit imnotarobot(QWidget *parent = nullptr);
    ~imnotarobot();


private:
    Ui::imnotarobot *ui;
};

#endif // IMNOTAROBOT_H
