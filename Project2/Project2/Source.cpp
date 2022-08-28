#include<iostream>
#include<ctime>
using namespace std; // подключение пространства имен, иначе -> std::cout << "Хай, менчик" << std::endl;

void main()
{
	setlocale(LC_ALL, "ru");

	//int n = 2; // Основание для перевода в новую систему
	//int N = 5; // Число в десятиричной системе
	srand(time(NULL));
	int const SIZE = 10; // Величина массива
	int sp = 10; // Величина разброса

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++) // Заполнение массива
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

	 // Тест
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << "Ошибка!" << endl;
			}
			else {
				cout << "Нет ошибок!" << endl;
			}
		}
	}
}