//CWidget.cpp
#include "CWidget.h"
#include <QtGui>
CWidget::CWidget(QWidget *parent):QWidget(parent)
{

}

CWidget::~CWidget()
{

}

bool CWidget::event(QEvent *event)
{
#ifdef unix
    if(event->type() == QEvent::MouseButtonDblClick){   //����������û��Ӧ���͵������ڱ�Ե�����
        emit sig_doubleClickedTitleBar();
        return true;
    }
#endif
    if (event->type() == QEvent::NonClientAreaMouseButtonDblClick)  //����¼���Linux��û�д�����Ӧ������Qt��һ��Bug��
    {
        emit sig_doubleClickedTitleBar();
        return true;
    }
    return QWidget::event(event);
}
