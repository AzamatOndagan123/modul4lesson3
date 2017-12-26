// ConsoleApplication27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int N;
	cout << "введите номер задания" << endl;
	cin >> N;
	switch (N)
	{
	case 1:
	{
		int a;
		cin >> a;
		for (int n = 1; n < 10; n++)
		{
			cout << "возвести а в степень " << n << pow(a, n) << endl;
		}
	}
	break;
	case 2:
	{
		int pod;
		cout << "сколько подьездов в доме " << endl;
		cin >> pod;
		int kv = 0;
		int kolvoj = 0, total_ploshad = 0;
		int ploshad = 0, total_kolj = 0;
		for (int i = 1; i <= pod; i++)
		{
			cout << "сколько квартир в подьезде " << i << ": ";
			cin >> kv;

			for (int j = 1; j <= kv; j++)
			{
				cout << "сколько жителей в квартире " << j << ": ";
				cin >> kolvoj;

				cout << "какая площадь вашей квартиры "  ": ";
				cin >> ploshad;

				total_kolj = total_kolj + kolvoj;
				total_ploshad = total_ploshad + ploshad;
			}



				cout << "\n общее количество жителей в " << i << " подьезде = " << total_kolj << endl;
			cout << "\n общее количество площади в " << i << " подьезде = " << total_ploshad << endl;
		}



	}
	break;
	case 3:
	{
	
	//Вычислить факториал заданного целого числа.Факториал числа N вычисляется по следующей формуле : N != 1·2·3···N.
		int number, factorial=1;
		cin >> number;
		for (number = 1; number <= 10; number++)
		{
			factorial = factorial*number;
		}
		cout << "Результат " << factorial << endl;
	}
	break;
	case 4:
	{
//Вычислить сумму S квадратов чисел от 1 до N.

		int sum_s = 0;
		int n;
		cin >> n;
		for (int i = 1; i < n; i++)
		{
			sum_s += pow(n, 2);
		}
		cout << sum_s;


	}
	case 5:
	{
		//Найти все числа некратные пяти и кратные 3, и сумма цифр которых также некратные пяти и кратна 3.
		int num;
		cin >> num;
		for (int i = 1; i <= num; i++)
		{
			if ((i % 3 == 0) && (i % 5) != 0)
			{
				cout << i ;
				cout << "Кратно 3"<<endl;
			}
			if ((i % 5 == 0) && (i % 3) != 0)
			{
				cout << i;
				cout << "Кратно 5"<<endl;
			}
		}



	}
	}
	



}