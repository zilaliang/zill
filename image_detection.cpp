//
// Created by Administrator on 24-10-15.
//

// You may need to build the project (run Qt uic code generator) to get "ui_image_detection.h" resolved

#include "image_detection.h"
#include "Form/ui_image_detection.h"


image_detection::image_detection(QWidget *parent) :
    QWidget(parent), ui(new Ui::image_detection) {
    ui->setupUi(this);
}

image_detection::~image_detection() {
    delete ui;
}
