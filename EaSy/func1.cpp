#include "easy.h"
#include <iostream>
using namespace std;
void itc_name(){
    cout << "Matvey" << endl;
}  //1

void itc_fio(){
    itc_name();
    cout << "Makarov" << endl;
    cout << "Dmitrievich";
}   //2

int itc_abs(int num){
if (num > 0){
    return num;
}
else{
    return num*(-1);
}
}   //3

double itc_fabs(double num){
if (num > 0){
    return num;
}
else{
    return num*(-1);
}
}   //4

int itc_revnbr(int num){
int a, b, c;
a = num/100;
b = num/10;
b = b%10;
b = b*10;
b = num/10;
b = b%10;
b = b*10;
c = num%10;
c = c*100;
return c+a+b;
}   //5







