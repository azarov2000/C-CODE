#include<iostream>
#include<ctime>
using namespace std; // ����������� ������������ ����, ����� -> std::cout << "���, ������" << std::endl;

void main()
{
	setlocale(LC_ALL, "ru");

	//int n = 2; // ��������� ��� �������� � ����� �������
	//int N = 5; // ����� � ������������ �������
	srand(time(NULL));
	int const SIZE = 10; // �������� �������
	int sp = 10; // �������� ��������

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++) // ���������� �������
	{
		arr[i] = rand() % sp;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				while (arr[i] == arr[j])
				{
					arr[i] = rand() % sp;
				}
				j = -1;
			}
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	 // ����
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << "������!" << endl;
			}
			else {
				cout << "��� ������!" << endl;
			}
		}
	}
}