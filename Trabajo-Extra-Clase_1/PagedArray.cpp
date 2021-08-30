#include <iostream>
#include <fstream>
#include "PagedArray.h"
#include "QDebug"
#include "QString"
/*Sobrecarga el operador PagedArray se encargará de buscar la página correspondiente solicitada
*/

using namespace std;

PagedArray::PagedArray() {

}
/*Carga o habre el archivo txt para realizar su respectiva lectura y los obtine como enteros
*/
void PagedArray::load(QString rute) {
    ifstream file;
    file.open(rute.toStdString());
    do_Array();
    string linea;
    getline(file, linea);
    QString All_Data = QString().fromStdString(linea);
    QStringList numeros = All_Data.split(",");
    numeros = get_numbers(numeros);
    for(auto b: array){
        qDebug()<<b<<" "<<*b;
    }
    numeros=get_numbers(numeros);
    for(auto b: array){
        qDebug()<<b<<" "<<*b;
    }
}
/*Obtine  la cantidad necesaria de numeros, sin sobrepasar el limite de la computadora
*/
QStringList PagedArray::get_numbers(QStringList numeros)
{
    qDebug()<<numeros.size();
    for(int i = 0; i<256;i++){
        int a = numeros[0].toInt();
        *array[i] = a;
        numeros.removeFirst();
    }
    qDebug()<<numeros.size();
    return numeros;
}

void PagedArray::do_Array()
{
    for(int i = 0; i<256;i++){
        int *a = new int;
        array[i] = a;
    }
}
