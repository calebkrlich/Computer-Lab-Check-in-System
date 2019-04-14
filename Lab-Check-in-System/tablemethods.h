#ifndef TABLEMETHODS_H
#define TABLEMETHODS_H

#include <QTableWidget>
#include <QTableWidgetItem>
#include <QList>
#include <QString>
#include "databasecontrollersingleton.h"

namespace TableOperators
{
    bool addRow(QTableWidget *table, QList<QString> values)
    {
        //more items then columns
        if(values.count() > table->columnCount())
            return false;

        //Create new row to table
        table->insertRow(table->rowCount());

        for(int i = 0; i < values.count(); i++)
        {
            QTableWidgetItem *cellValue = new QTableWidgetItem(values[i]);
            table->setItem(table->rowCount()-1,i,cellValue);
        }

        //sucessfully added row
        return true;
    }

    bool removeRow(QTableWidget *table, int rowIndex)
    {
        //if row index to large or small, fail
        if(rowIndex > table->rowCount() || rowIndex < 0)
            return false;

        table->removeRow(rowIndex);
        return true;
    }

    bool removeRowWithValue(QTableWidget *table, QString value)
    {
        for(int i = 0; i< table->rowCount(); i++)
        {
            if(table->itemAt(i,0)->text() == value)
            {
                table->removeRow(i);
                return true;
            }
        }
        return false;
    }

};


#endif // TABLEMETHODS_H
