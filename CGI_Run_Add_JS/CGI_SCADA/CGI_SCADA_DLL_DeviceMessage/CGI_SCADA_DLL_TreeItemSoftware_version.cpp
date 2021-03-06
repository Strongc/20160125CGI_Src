#include "CGI_SCADA_DLL_TreeItemSoftware_version.h"


CGI_SCADA_DLL_TreeItemSoftware_version::CGI_SCADA_DLL_TreeItemSoftware_version(QTreeWidgetItem *parentTreeItem_, const QStringList &strings, int type, QObject *parent):
    CGI_SCADA_DLL_TreeItemBase(parentTreeItem_,strings,type,parent)
{
    m_pWidget = NULL;
}

CGI_SCADA_DLL_TreeItemSoftware_version::~CGI_SCADA_DLL_TreeItemSoftware_version()
{
    if (m_pWidget != NULL)
    {
        m_pWidget->deleteLater();
        m_pWidget = NULL;
    }
}

QWidget *CGI_SCADA_DLL_TreeItemSoftware_version::GetWidget(QTreeWidgetItem *)
{
    if (m_pWidget == NULL)
    {
        m_pWidget = new UI_Software_version(NULL);
    }
    return m_pWidget;
}
