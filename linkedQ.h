#pragma once
#include"node.h"
class linkedQ:public node
{
public:
	node* front, * rear;

	linkedQ()
	{
		front = NULL;
		rear = NULL;
	}


	void inQ(int item)
	{
		node* p = new node();
		p->data = item;

		if (front == NULL)
		{

			p->next = NULL;
			front = rear = p;
		}
		else
		{
			rear->next = p;
			rear = p;
		}
	}


	void display()
	{
		if (front == NULL)
		{
			cout << "\n============\n";
			cout << "THE QUEUE IS EMPTY" << endl;
			return;
		}
		node* temp = front;

		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}


	}

	int dQ()
	{
		if (front == NULL)
		{
			cout << "\n===== " << endl;
			cout << "QUEUE IS EMPTY" << endl;
			return 0;
		}
		node* temp = front;
		int item = temp->data;
		front = temp->next;

		delete temp;

		return item;
	}
};

