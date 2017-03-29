//Бойко Катерина
//К-13
#include <iostream>
#include <cstring>
#include "copyright.h"
#include "lab9.h"

using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Ukrainian");

    copyright();

    string help = "help";
    int t = 1; //ознака успішності виконання лабораторної

    if(
        argv[1][0]=='l'&&
        argv[1][1]=='a'&&
        argv[1][2]=='b'
      )
        t = exec(argv[1][3]-'0');
    if( t ) {
        if( argv[1] != help)
            cout << "Incorrect or missing argument." << endl;
        how_to_use( argv[0] );
    }

    return 0;
}
