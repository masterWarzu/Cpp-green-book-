// ����� ������ - "������� �++ ����� ���������������� ���"
// �������� �������:
// �������� ���������, ������� ��������� � ������������ ��� ����� ����� 
// �� ������ ������� � ���� � ������� ������� �������� �� ������ ���.

#include <iostream>

using namespace std;

int main()
{
	cout << "Input number one (int): " << endl;
	int numberOne = 0;
	cin >> numberOne;
	cout << "Input number two (int): " << endl;
	int numberTwo = 0;
	cin >> numberTwo;
	cout << "Input number three (int): " << endl;
	int numberThree = 0;
	cin >> numberThree;
	int result = 0;
	result = (numberOne + numberTwo + numberThree) / 3;
	cout << "Result = " << result << endl;
	return 0;
}