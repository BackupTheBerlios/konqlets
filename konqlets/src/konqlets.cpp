#include <qlabel.h>
#include <kinstance.h>
#include <qstring.h>
#include <qwidget.h>

#include "konqlets.h"
#include "konqlets.moc"

konqlets::konqlets(KInstance *inst,QObject *parent,QWidget *widgetParent, QString &desktopName, const char* name):
                   KonqSidebarPlugin(inst,parent,widgetParent,desktopName,name)
{
	widget=new QLabel("Init Value",widgetParent);
}


konqlets::~konqlets()
{
}

void konqlets::handleURL(const KURL &url)
{
	widget->setText(QString("konqlets")+"::"+url.url());
}



extern "C"
{
    void* create_konqsidebar_konqlets(KInstance *instance,QObject *par,QWidget *widp,QString &desktopname,const char *name)
    {
        return new konqlets(instance,par,widp,desktopname,name);
    }
};
