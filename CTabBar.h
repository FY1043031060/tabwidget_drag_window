//CTabBar.h
#ifndef CTABBAR_H
#define CTABBAR_H
#include <QTabBar>
#include <QtGui>

class CTabBar :public QTabBar
{
    Q_OBJECT
public:
    CTabBar(QWidget* =0);
protected:
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);   //ͨ�������¼�ģ���tab���϶��Ķ���
private:
    bool pressFlag;
signals:
    void sig_tabDrag(int,QPoint);
};
#endif
