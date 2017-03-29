//
// �-13
// ����� ��������
//


#include <iostream>
#include <locale.h>
#include "f.h"
#include "copyright.h"

using namespace std;

int main()
{
    setlocale(LC_ALL,"Ukrainian");

    copyright();
    cout << "�� �������� ���������� ��� ���������� ������� ������� ��� ������� ������������ �������� x." << endl;
    cout << "������, ���� ����� �������� � (������ �� 1), ������� ������� �������� �������: " << endl;

    double x, result = 0;

    try{
        cin >> x;
        if(cin.fail()){
            cin.clear();
            cin.sync();
            throw "������� ������� �����: ������� ������.";
        }
        try{
            result = f(x);
        }catch(const char *e){
            throw e;
        }
    }catch(const char *e){
        cout << e <<endl;
        return 0;
    }

    cout << "������ ���� �������� ������:"<<endl<<"x = "<<x<<endl;
    cout << "�� ����� ������� � �������� ������� f(x) = arcsin(1/3) + 1/(1-x) ���������� " << result;

    return 0;
}
