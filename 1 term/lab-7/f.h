//����� ��������
// �-13

#ifndef F_H_INCLUDED
#define F_H_INCLUDED

const int max_arr_sz = 100;

/**
 * ������� ��� ��������� �� ����������� ����� ��� �������� ������ ��������� �� ������ �� � ������
 *
 * @param arr �����, � ���� �������������� ����� �����, �������� ������������
 * @param i ������ ����� �� ������� ����� �������
 * @return �����
 */
void arr_in(double arr[], int &i);

/**
 * ������� ��� ����� �� ����� �������
 *
 * @param arr ����� �����, �������� ������������
 * @param a_sz ����� �������
 * @return �����
 */
void arr_out(double arr[], int a_sz);

/**
 * ������� ��� ������ �� ��������� "����" � �����
 *
 * @param arr �����, �� ���� �������������
 * @param arr_sz ����� �������
 * @return int ������� ����
 */
int calculate(double arr[], int a_sz);

#endif // F_H_INCLUDED
