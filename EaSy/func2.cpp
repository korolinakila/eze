#include "easy.h"
#include <iostream>
using namespace std;

bool itc_iseven(int num){
    return num%2==0;
}   //6

int itc_max(int num, int num2){
    if(num>num2){
        return num;
    }
    else{
        return num2;
    }
}   //7

int itc_min(int min1, int min2){
    if(min1<min2){
        return min1;
    }
    else{
        return min2;
    }
}   //8

double itc_fmax(double num, double num2){
if(num>num2){
        return num;
    }
    else{
        return num2;
    }
}   //9

double itc_fmin(double num, double num2){
if(num<num2){
        return num;
    }
    else{
        return num2;
    }
}   //10




