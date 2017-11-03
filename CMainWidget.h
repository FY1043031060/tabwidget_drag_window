//CMainWindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "CTabWidget.h"
#include "CTabBar.h"
#include <QTabWidget>

class CMainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CMainWidget(QWidget* = 0);
    void addWidTab(QWidget* pWid, QString strTab);
private:
    CTabWidget *tabWidget;
private slots:
    void slot_tabBarDoubleClicked();            //��Ӧ˫�����صĲۺ���
    void slot_tabDrag(int index, QPoint point);  //��Ӧ�϶������Ĳۺ���
    void slot_closeTab(int);                    //�ر�tab�Ĳۺ���
};

#endif // MAINWINDOW_H
