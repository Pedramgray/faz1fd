#include "splashpage.h"

#include "popup.h"
#include "imnotarobot.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    popup number;


    splashpage w;
    w.show();
    return a.exec();
}
