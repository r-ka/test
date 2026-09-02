QT       += core gui
TARGET    = ToDo_Test2
TEMPLATE  = app

# Qt 4.8.4 / MinGW 用のプロジェクト
# Qt5/Qt6 専用APIは使わない
greaterThan(QT_MAJOR_VERSION, 4): error(This project is for Qt 4.8.4 and cannot be built with Qt 5/6.)

# 現在のワークスペースには ToDo_Test2.cpp / ToDo_Test2.h が存在しないため除外
SOURCES  += main.cpp

# .ui ファイルは Qt によって ui_ToDo_Test2.h を自動生成する
FORMS    += ToDo_Test2.ui

CONFIG   += warn_on
