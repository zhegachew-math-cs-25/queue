#include "stdafx.h"
#include "queue.h"
#include <iostream>


using namespace std;


/*
* brief: добавление в очередь первого элемента
* in: целочисленная переменная и указатель на указатель на вершину очереди
* out: - 
*/
void first_add(int val, node **first)
{
	node *q = new node;
	q->val = val;
	q->next = nullptr;
	*first = q;
}


/*
* brief: добавление элемента
* in: целочисленная переменная и указатель на указатель на вершину очереди
* out: - 
*/
void add(int val, node **last)
{
	node *q = new node;
	q->val = val;
	q->next = *last;
	*last = q;
}


/*
* brief: удаление элемента 
* in: указатель на указатель на вершину очереди
* out: целочисленная переменная
*/
int pop(node **first)
{
	int tval = (*first)->val; // (**first).val;
	node * tmp_node = *first;
	*first = (*first)->next;
	delete tmp_node;
	return tval;
}


/*
* brief: проверка на пустоту
* in: указатель на структуру
* out: true or false
*/
bool isEmpty(node *a)
{
	if (!a)
	{
		return true;
	}
	else
	{
		return false;
	}
}


/*
* brief: функция выводящая очередь на экран
* in: указатель на указатель вершины очереди
* out: - 
*/
void print(node **first)
{
	cout << "*";
	{
		while (*first)
		{
			cout << pop(first) << ' ';
		}
	}
	cout << "*";
	cout << endl;
}


