// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "queue.h"
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int a = 0;
	
	int num;

	queue queue_context;
	queue_context.first = NULL;
	queue_context.last = NULL;

	bool first_num = true;

	cout << "#################################################" << endl;
	cout << "#####                                       #####" << endl;
	cout << "#####               Queue 2.0               #####" << endl;
	cout << "#####                                       #####" << endl;
	cout << "#################################################" << endl;
	cout << endl;

	do{

	cout << "1. Нажмите 1, для получения дополнительной информации" << endl;
	cout << "0. Нажмите 0, чтобы перейти к выполнению программы" << endl;
	cout << endl;
	
	cout << "Номер команды > "; 

	cin >> num;

	switch (num)

	case 1 : print();
		break;

	} while (num != 0);

	cout << "Введите переменную a -> ";
	cin >> a;



	while (a != (-1))
	{
		if (first_num == true)
		{
			first_add(a, &queue_context.first, &queue_context.last);
			first_num = false;
		}
		else
		{
			add(a, &queue_context.first);
		}


		cout << "Введите переменную a -> ";
		cin >> a;

	} // while
	 
	printDel(queue_context.first);


	system("pause");
    return 0;
}



