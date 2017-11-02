//CMainWindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QTextEdit>
#include "CTabWidget.h"
#include "CTabBar.h"

class CMainWindow:public QMainWindow
{
    Q_OBJECT
public:
    CMainWindow(QWidget* = 0);
private:
    CTabWidget *tabWidget;
private slots:
    void slot_tabBarDoubleClicked();            //��Ӧ˫�����صĲۺ���
    void slot_tabDrag(int index,QPoint point);  //��Ӧ�϶������Ĳۺ���
    void slot_closeTab(int);                    //�ر�tab�Ĳۺ���
};

#endif // MAINWINDOW_H
