#include "easy.h"
#include <iostream>
using namespace std;

double itc_pow(int num, int step){
    if (step==0){
        return 1;
    }
    if (step>0){
        int p = num;
        for(int i=1; i<step; i+=1){
            p = p*num;
        }
        return p;
    }
    if (step<0){
        double p = num;
        for(int i=0; i>=step; i-=1){
            p = p/num;
        }
        return p;

    }

}   //16

bool itc_ispositive(int num){
if (num>=0){
    cout << "TRUE" << endl;
    return num>=0;
}
if (num<0){
    cout << "FALSE" << endl;
    return num>=0;
}
}   //17

bool itc_ispositive_d(double num){
 if (num>=0){
    cout << "TRUE" << endl;
    return num>=0;
}

if (num<0){
    cout << "FALSE" << endl;
    return num>=0;
}
}   //18
