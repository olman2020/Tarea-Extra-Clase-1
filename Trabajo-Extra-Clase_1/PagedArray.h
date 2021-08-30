#ifndef PAGEDARRAY_H
#define PAGEDARRAY_H
#include "QString"
#include "string"

/*Archivo de cabecera o header de PagedArray
*/
class PagedArray{
public:
    PagedArray();
    void load(QString rute);
    QStringList get_numbers(QStringList numeros);
    void do_Array();
    int *array[256];
};
#endif
