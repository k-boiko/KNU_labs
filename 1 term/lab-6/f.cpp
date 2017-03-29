//����� ��������
// �-13

#include <iostream>
#include "f.h"

using namespace std;

void arr_in(double arr[], int &i){
    cout << "������ ���� ����� ���� �����. ������� ������� ������� �������. ��� ���������� ����� ��������� enter. ���� ������ ��������� ��� �����, ������ ����-��� �����.";
    while ( i < max_arr_sz ){
        cin >> arr[i];
        if(cin.fail())
            break;
        i++;
    }
}

void arr_out(double arr[], int a_sz){
    if( a_sz == 0 ){
        cout << "����� �������."<< endl;
        return;
    }
    cout << "������ ���: ";

    for( int i = 0; i < a_sz - 1; i++ )
        cout << arr[i] << ", " ;
    cout << arr[a_sz-1] << "." << endl;
}

void analyze(double arr[], int arr_sz, double &max_el, double &average){
    int i_sum = 0;
    double i_amount = 0;
    for( int i = 0; i < arr_sz; i++ ){
        if( arr[i] == max_el ){
            i_amount++;
            i_sum += i;
        }
        if( arr[i] > max_el ){
            max_el = arr[i];
            i_amount = 1;
            i_sum = i;
        }
    }
    average = i_sum/i_amount;
}

void results(double max_el, double average){
    cout << "�������� ������������� ��������: " << max_el << endl;
    cout << "������ ����������� ������� ������������ ��������: " << average;
}
