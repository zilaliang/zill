#include <QApplication>
#include <QPushButton>

#include "image_detection.h"
#include"ui_image_detection.h"
int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    image_detection w;;
    w.show();
    return QApplication::exec();
}
