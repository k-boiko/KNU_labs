//
// K-13
// ����� ��������
//

#include <iostream>
#include <locale.h>

using namespace std;


/**
 * ������� ��� ���������� ������ 2/3+y/(x+2)
 *
 * @param x ����� ��� ���������� ������, ������ �� -2
 * @param y ����� ��� ���������� ������
 * @return double ��������� ���������
 */
double f(double x, double y){
        return 2.0/3.0 + y/(x+2.0);
}

int main()
{
    setlocale(LC_ALL,"Ukrainian");

    cout << "�� �������� ���������� ��� ���������� ������������ ������ �� ����� �������� ������������ ������� ������." << endl;
    cout << "�������� �������� ��������� ����� �-13 ����� ��������."<< endl;

    cout << "������, ���� ����� �������� ������, ������� ������� �������� �������."<< endl;
    double x, y;
    cout << "x (������ �� -2): ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    double result = f(x, y);
    cout << "������ ���� �������� ������:"<<endl<<"x = "<<x<<endl<<"y = "<<y<<endl;
    cout << "�� ����� �����, �������� ������ 2/3 + y/(x+2) ������ " << result << endl;

    return 0;
}
