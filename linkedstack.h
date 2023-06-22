#pragma once
#include "node.h"
class linkedstack :
    public node
{
public:

	node* front;

	linkedstack()
	{
		front = NULL;
	}



	void push(int item)
	{
		node* p = new node();
		p->data = item;
		if (front == NULL)
		{
			p->next = NULL;
			front = p;
		}
		else
		{
			p->next = front;
			front = p;
		}
	}


	void display()
	{
		if (front == NULL)
		{
			cout << "\n============\n";
			cout << "stack is empty" << endl;
			return;
		}
		node* temp = front;

		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}

		
	}
	int pop()
	{
		if (front == NULL)
		{
			return false;
		}
		else
		{
			node* temp = front;
			int item = temp->data;
			front = temp->next;
			delete temp;
			return item;
		}
	}

};
