//CTabWidget.cpp
#include "CTabWidget.h"

CTabWidget::CTabWidget(QWidget *parent):QTabWidget(parent)
{
    tabBar = new CTabBar;
    setTabBar(tabBar);     //�����ǹؼ��������������Զ����CTabBar�滻ԭ����QTabBar
}
