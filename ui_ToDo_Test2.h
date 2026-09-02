/********************************************************************************
** Form generated from reading UI file 'ToDo_Test2.ui'
**
** Created: Wed Sep 2 11:09:28 2026
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODO_TEST2_H
#define UI_TODO_TEST2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QTableWidget *taskTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddTask;
    QPushButton *btnDeleteTask;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuToDo_Test2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(566, 359);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        taskTable = new QTableWidget(centralwidget);
        if (taskTable->columnCount() < 4)
            taskTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (taskTable->rowCount() < 2)
            taskTable->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        taskTable->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        taskTable->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        taskTable->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        taskTable->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        taskTable->setItem(0, 3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        taskTable->setItem(1, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        taskTable->setItem(1, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        taskTable->setItem(1, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        taskTable->setItem(1, 3, __qtablewidgetitem13);
        taskTable->setObjectName(QString::fromUtf8("taskTable"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(taskTable->sizePolicy().hasHeightForWidth());
        taskTable->setSizePolicy(sizePolicy2);
        taskTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(taskTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAddTask = new QPushButton(centralwidget);
        btnAddTask->setObjectName(QString::fromUtf8("btnAddTask"));

        horizontalLayout->addWidget(btnAddTask);

        btnDeleteTask = new QPushButton(centralwidget);
        btnDeleteTask->setObjectName(QString::fromUtf8("btnDeleteTask"));

        horizontalLayout->addWidget(btnDeleteTask);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 566, 31));
        menuToDo_Test2 = new QMenu(menubar);
        menuToDo_Test2->setObjectName(QString::fromUtf8("menuToDo_Test2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuToDo_Test2->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\345\214\272\345\210\245\346\244\234\347\264\242\357\274\232", 0, QApplication::UnicodeUTF8));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\345\214\272\345\210\245\343\202\222\345\205\245\345\212\233", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = taskTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\345\214\272\345\210\245", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = taskTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\343\202\277\343\202\271\343\202\257\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = taskTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\234\237\351\231\220", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = taskTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\343\202\271\343\203\206\343\203\274\343\202\277\343\202\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = taskTable->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = taskTable->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = taskTable->isSortingEnabled();
        taskTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = taskTable->item(0, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Lt", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = taskTable->item(0, 1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "aaaa", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = taskTable->item(0, 2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "2026/08/21", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = taskTable->item(0, 3);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\345\256\214\344\272\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = taskTable->item(1, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Witz", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = taskTable->item(1, 1);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "bbbb", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = taskTable->item(1, 2);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "2026/08/19", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = taskTable->item(1, 3);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\346\234\252\345\256\214\344\272\206", 0, QApplication::UnicodeUTF8));
        taskTable->setSortingEnabled(__sortingEnabled);

        btnAddTask->setText(QApplication::translate("MainWindow", "+  \343\202\277\343\202\271\343\202\257\343\201\256\350\277\275\345\212\240", 0, QApplication::UnicodeUTF8));
        btnDeleteTask->setText(QApplication::translate("MainWindow", "-  \343\202\277\343\202\271\343\202\257\343\201\256\345\211\212\351\231\244", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\350\252\255\343\201\277\350\276\274\343\201\277", 0, QApplication::UnicodeUTF8));
        menuToDo_Test2->setTitle(QApplication::translate("MainWindow", "ToDo_Test2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODO_TEST2_H
