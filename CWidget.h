//CWidget.h
#ifndef CWIDGET_H
#define CWIDGET_H
#include <QWidget>

class CWidget:public QWidget
{
    Q_OBJECT
public:
    CWidget(QWidget* = 0);
    ~CWidget();
protected:
    bool event(QEvent *);
signals:
    void sig_doubleClickedTitleBar();  //��˫��ʱ������ź�
};
#endif
