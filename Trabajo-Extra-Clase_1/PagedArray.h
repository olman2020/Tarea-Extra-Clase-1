#ifndef PAGEDARRAY_H
#define PAGEDARRAY_H

#include "QString"
#include "string"
class PagedArray{
public:
    PagedArray();
    void load(QString rute);
    QStringList get_numbers(QStringList numeros);
    void do_Array();
    int *array[256];
};
#endif
