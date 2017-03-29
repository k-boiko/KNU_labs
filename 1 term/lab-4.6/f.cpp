//
// К-13
// Бойко Катерина
//

#include <iostream>
#include "f.h"
#include <cmath>

using namespace std;

double f(double x){
    if(x==1)
        throw "Неможливо обчислити значення виразу: х не задовільняє області визначення.";
    else
        return asin(1/3.0) + 1/(1-x);
}


