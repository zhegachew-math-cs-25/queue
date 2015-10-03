#include "stdafx.h"
#include "queue.h"
#include <iostream>


using namespace std;

void first_add(int val, node **first, node **last)
{
	node *q = new node;
	q->val = val;
	q->next = nullptr;
	*first = *last = q;
}



void add(int val, node **first)
{
	node *q = new node;
	q->val = val;   
	q->next = *first;
	*first = q;
}



int pop(node **first)
{
	int val = (**first).val;
	node *tmp_node = (*first);
	*first = (**first).next;
	delete tmp_node;
	return val;
}



void printDel(node *first)
{
	while (first != NULL)
	{
		cout << pop(&first) << endl;
	}

	if (first != NULL)
	{
		cout << "Очередь удалена" << endl;
	}
}



bool full(queue *a)
{
	if (a->first == a->last == NULL) 
								return true;
	else 
								return false;
}


void print()
{
	cout << endl;
	cout << "##################################################" << endl;
	cout << "#####                                        #####" << endl;
	cout << "#####     Программа на стадии разработки     #####" << endl;
	cout << "#####                                        #####" << endl;
	cout << "##################################################" << endl;
	cout << endl;
}
