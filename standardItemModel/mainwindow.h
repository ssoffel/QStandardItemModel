#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QTreeView>
#include <QListView>
#include <QList>
#include <QDebug>
#include "readfile.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QList<QStandardItem*> prepareRow(const QString &db, const QString &boa, const QString &citi, const QString &abn, const QString &jpm);

private:
  //  Ui::MainWindow *ui;
    QTreeView *treeView;
    QStandardItemModel *model;
    readFile *rf;
    void fillModel(QStringList & dataStr);
     QStandardItem *item;
};

#endif // MAINWINDOW_H
