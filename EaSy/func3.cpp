#include "easy.h"
#include <iostream>
using namespace std;
int itc_sqrt(int num){
    long long a=0;
    while (a*a<=num){
        a+=1;
    }
    a-=1;
    if (a*a==num){
            return a;
    }
    else{
        return (-1);
    }
}   //11

int itc_skv(int num){
if(num>0){
    return num*num;
}
else{
    return -1;
}
}   //12


int itc_spr(int a, int b){
if(a>0 && b>0){
    return a*b;
}
else{
    return -1;
}
}   //13

int itc_str(int a, int b, int c){
if((a>0 && b>0 && c>0)&&(a+b>c && b+c>a && c+a>b)){
    double p = (a+b+c)/2.0;
    int s = itc_sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}
else{
    return -1;
}
}   //14

double itc_scir(int radius){
if (radius > 0){
    return radius*radius*3.14;
}
else{
    return -1;
}
}   //15




