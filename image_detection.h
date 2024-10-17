//
// Created by Administrator on 24-10-15.
//

#ifndef IMAGE_DETECTION_H
#define IMAGE_DETECTION_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class image_detection; }
QT_END_NAMESPACE

class image_detection : public QWidget {
Q_OBJECT

public:
    explicit image_detection(QWidget *parent = nullptr);
    ~image_detection() override;

private:
    Ui::image_detection *ui;
};


#endif //IMAGE_DETECTION_H
