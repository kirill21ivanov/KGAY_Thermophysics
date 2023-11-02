/********************************************************************************
** Form generated from reading UI file 'mainwindowfin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWFIN_H
#define UI_MAINWINDOWFIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowFin
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLabel *text;
    QLabel *win_start;
    QSplitter *splitter_2;
    QLabel *text_2;
    QLabel *part_ov;
    QSplitter *splitter_3;
    QLabel *text_3;
    QLabel *part_kol;
    QSplitter *splitter_4;
    QLabel *text_4;
    QLabel *part_name;
    QSplitter *splitter_5;
    QLabel *text_5;
    QLabel *part_groups;
    QSplitter *splitter_6;
    QLabel *text_6;
    QLabel *part_prog;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;

    void setupUi(QMainWindow *MainWindowFin)
    {
        if (MainWindowFin->objectName().isEmpty())
            MainWindowFin->setObjectName(QString::fromUtf8("MainWindowFin"));
        MainWindowFin->resize(800, 500);
        MainWindowFin->setMinimumSize(QSize(800, 500));
        QFont font;
        font.setPointSize(1);
        font.setBold(true);
        font.setItalic(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        MainWindowFin->setFont(font);
        MainWindowFin->setToolTipDuration(1);
        MainWindowFin->setAutoFillBackground(false);
        MainWindowFin->setStyleSheet(QString::fromUtf8("background-color:rgb(112, 112, 112)"));
        centralwidget = new QWidget(MainWindowFin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        text = new QLabel(splitter);
        text->setObjectName(QString::fromUtf8("text"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font1.setPointSize(23);
        text->setFont(font1);
        text->setAlignment(Qt::AlignCenter);
        splitter->addWidget(text);
        win_start = new QLabel(splitter);
        win_start->setObjectName(QString::fromUtf8("win_start"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font2.setPointSize(14);
        font2.setBold(true);
        win_start->setFont(font2);
        win_start->setAlignment(Qt::AlignCenter);
        splitter->addWidget(win_start);

        verticalLayout->addWidget(splitter);

        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        text_2 = new QLabel(splitter_2);
        text_2->setObjectName(QString::fromUtf8("text_2"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font3.setPointSize(22);
        text_2->setFont(font3);
        text_2->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(text_2);
        part_ov = new QLabel(splitter_2);
        part_ov->setObjectName(QString::fromUtf8("part_ov"));
        part_ov->setFont(font3);
        part_ov->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)\n"
""));
        part_ov->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        splitter_2->addWidget(part_ov);

        verticalLayout->addWidget(splitter_2);

        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        text_3 = new QLabel(splitter_3);
        text_3->setObjectName(QString::fromUtf8("text_3"));
        text_3->setFont(font3);
        text_3->setAlignment(Qt::AlignCenter);
        splitter_3->addWidget(text_3);
        part_kol = new QLabel(splitter_3);
        part_kol->setObjectName(QString::fromUtf8("part_kol"));
        part_kol->setFont(font3);
        part_kol->setAlignment(Qt::AlignCenter);
        splitter_3->addWidget(part_kol);

        verticalLayout->addWidget(splitter_3);

        splitter_4 = new QSplitter(centralwidget);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        text_4 = new QLabel(splitter_4);
        text_4->setObjectName(QString::fromUtf8("text_4"));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font4.setPointSize(14);
        text_4->setFont(font4);
        text_4->setAlignment(Qt::AlignCenter);
        splitter_4->addWidget(text_4);
        part_name = new QLabel(splitter_4);
        part_name->setObjectName(QString::fromUtf8("part_name"));
        part_name->setFont(font3);
        part_name->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        part_name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        splitter_4->addWidget(part_name);

        verticalLayout->addWidget(splitter_4);

        splitter_5 = new QSplitter(centralwidget);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        text_5 = new QLabel(splitter_5);
        text_5->setObjectName(QString::fromUtf8("text_5"));
        text_5->setFont(font4);
        text_5->setAlignment(Qt::AlignCenter);
        splitter_5->addWidget(text_5);
        part_groups = new QLabel(splitter_5);
        part_groups->setObjectName(QString::fromUtf8("part_groups"));
        part_groups->setFont(font3);
        part_groups->setAlignment(Qt::AlignCenter);
        splitter_5->addWidget(part_groups);

        verticalLayout->addWidget(splitter_5);

        splitter_6 = new QSplitter(centralwidget);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setOrientation(Qt::Horizontal);
        text_6 = new QLabel(splitter_6);
        text_6->setObjectName(QString::fromUtf8("text_6"));
        text_6->setFont(font4);
        text_6->setAlignment(Qt::AlignCenter);
        splitter_6->addWidget(text_6);
        part_prog = new QLabel(splitter_6);
        part_prog->setObjectName(QString::fromUtf8("part_prog"));
        part_prog->setFont(font3);
        part_prog->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        part_prog->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        splitter_6->addWidget(part_prog);

        verticalLayout->addWidget(splitter_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        MainWindowFin->setCentralWidget(centralwidget);

        retranslateUi(MainWindowFin);

        QMetaObject::connectSlotsByName(MainWindowFin);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowFin)
    {
        MainWindowFin->setWindowTitle(QCoreApplication::translate("MainWindowFin", "MainWindow", nullptr));
        text->setText(QCoreApplication::translate("MainWindowFin", "\320\230\320\242\320\236\320\223\320\230 \320\242\320\225\320\241\320\242\320\230\320\240\320\236\320\222\320\220\320\235\320\230\320\257 \320\237\320\236 \320\230\320\235\320\244\320\236\320\240\320\234\320\220\320\242\320\230\320\232\320\225", nullptr));
#if QT_CONFIG(whatsthis)
        win_start->setWhatsThis(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        win_start->setText(QCoreApplication::translate("MainWindowFin", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\262\320\275\320\270\321\217:", nullptr));
        text_2->setText(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">\320\235\320\276\320\274\320\265\321\200 \320\223\321\200\321\203\320\277\320\277\321\213:</span></p></body></html>", nullptr));
        part_ov->setText(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">0</span></p></body></html>", nullptr));
        text_3->setText(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">\320\244\320\230\320\236:</span></p></body></html>", nullptr));
        part_kol->setText(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p><span style=\" color:#ffffff;\">0</span></p></body></html>", nullptr));
        text_4->setText(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\264\320\265\320\273\320\260\320\275\320\275\321\213\321\205 \320\267\320\260\320\264\320\260\320\275\320\270\320\271:</span></p></body></html>", nullptr));
        part_name->setText(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p align=\"center\"><span style=\" color:#ff0000;\">0</span></p></body></html>", nullptr));
        text_5->setText(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">\320\237\321\200\320\276\321\206\320\265\320\275\321\202 \321\200\320\260\320\261\320\276\321\202\321\213:</span></p></body></html>", nullptr));
        part_groups->setText(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p><span style=\" color:#ff0600;\">0</span></p></body></html>", nullptr));
        text_6->setText(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\230\321\202\320\276\320\263\320\276\320\262\320\260\321\217 \320\276\321\206\320\265\320\275\320\272\320\260:</span></p></body></html>", nullptr));
        part_prog->setText(QCoreApplication::translate("MainWindowFin", "<html><head/><body><p align=\"center\"><span style=\" color:#ff0000;\">0</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindowFin", "\320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowFin: public Ui_MainWindowFin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWFIN_H
