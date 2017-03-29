//Бойко Катерина
//К-13

#include <iostream>
#include "lib.h"
#include "lab9.h"

using namespace std;

void how_to_use( char *exe ){
    cout << "Using " << exe << " <commamd>" << endl;
    cout << "where <command> is one of:" << endl;
    cout << "\thelp, lab5, lab6, lab7, lab8." << endl;
}

int exec(int arg){

    switch (arg){
     case 5: laba5();
        break;
     case 6: laba6();
        break;
     case 7: laba7();
        break;
     case 8: laba8();
        break;
     default: return 1;
    }

    return 0;
}
