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
    cout << "�� �������� ���������� ��� ���������� ������� ������� ��� ������� ������������ �������� x."<< endl;
    cout << "������, ���� ����� �������� � (������ �� 1), ������� ������� �������� �������: "<< endl;

    double x;
    cin >> x;

    double result = 0;

    bool isok;
    if(x==1)
        isok = false;
    else{
        isok = true;
        result = f(x);
    }

    cout << "������ ���� �������� ������:"<<endl<<"x = "<<x<<endl;

    if(isok)
        cout << "��� ����� ��������� � �������� ������� f(x) = arcsin(1/3) + 1/(1-x) ���������� " << result;
    else
        cout << "��������� �������� ����������: ������ ���� ��� �� ������� �� ������ ���������� ������.";

    return 0;
}
