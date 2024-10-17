/********************************************************************************
** Form generated from reading UI file 'image_detection.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_DETECTION_H
#define UI_IMAGE_DETECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_image_detection
{
public:

    void setupUi(QWidget *image_detection)
    {
        if (image_detection->objectName().isEmpty())
            image_detection->setObjectName(QStringLiteral("image_detection"));
        image_detection->resize(400, 300);

        retranslateUi(image_detection);

        QMetaObject::connectSlotsByName(image_detection);
    } // setupUi

    void retranslateUi(QWidget *image_detection)
    {
        image_detection->setWindowTitle(QApplication::translate("image_detection", "image_detection", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class image_detection: public Ui_image_detection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_DETECTION_H
