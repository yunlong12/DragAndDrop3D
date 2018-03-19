#include "clefttree.h"

CLeftTree::CLeftTree()
{
    QTreeWidgetItem *itemTop=new QTreeWidgetItem(this);
    itemTop->setText(0,"ItemTop");
    addTopLevelItem(itemTop);

    QTreeWidgetItem *item1=new QTreeWidgetItem(itemTop);
    item1->setText(0,"Item1");
    QTreeWidgetItem *item2=new QTreeWidgetItem(itemTop);
    item2->setText(1,"Item2");

}
