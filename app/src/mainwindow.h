#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <stdexcept>
#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QFileSystemModel>
#include <QDir>
#include <QTreeView>
#include <QString>
#include <QStringList>
#include <QGraphicsPixmapItem>
#include <QMediaPlayer>
#include <QtMultimedia>
#include <QMediaMetaData>
#include <QMetaDataReaderControl>
#include <QToolBar>
#include <iostream>
#include <deque>
#include "tabmenager.h"
#include "file_manager.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private slots:
        void on_actionOpen_triggered();
        void on_tabWidget_tabCloseRequested(int index);
        void on_actionNew_file_triggered();
        void on_actionSave_triggered();
        void on_actionSave_as_triggered();

        void on_actionClose_Tab_triggered();
        void on_actionQuit_Utext_triggered();
        void on_actionSave_All_triggered();

        void on_actionNex_Tab_triggered();
        void on_actionSelect_Previous_tab_triggered();

private:

    void readSettings();
    void writeSettings();

    Ui::MainWindow *ui;
    FileManager *m_file_manager;
    TabManager *m_tabmg = nullptr;
};


#endif // MAINWINDOW_H
