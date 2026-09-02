#include <QApplication>
#include <QMainWindow>
#include "ui_ToDo_Test2.h"

int main(int argc, char *argv[])
{
    // Qtアプリケーションを作成する
    // これがないとQtのGUIアプリは動かない
    QApplication app(argc, argv);

    // メインのウィンドウを作成する
    QMainWindow mainWindow;

    // .uiファイルから自動生成されたUIクラスのオブジェクトを作る
    Ui::MainWindow ui;

    // .uiで定義した部品（ボタン・ラベル・表など）をmainWindowに組み込む
    ui.setupUi(&mainWindow);

    // 画面を表示する
    mainWindow.show();

    // Qtのイベントループを開始する
    // ここからボタン押下やウィンドウ閉じるなどの処理を待ち続ける
    return app.exec();
}
