#pragma once
#include "node.h"
class circularop :public node
{

public:

	node* head, * tail;
	circularop() {
		head = NULL;
		tail = NULL;
	}


	void add_big(int x)
	{
		node* p = new node();
		p->data = x;

		if (head == NULL)
		{
			p->next = NULL;
			head = tail = p;
			return;
		}

		p->next = head;
		head = p;

	}

	void addEnd(int x)
	{
		if (head == NULL)
		{
			cout << "singlelist IS EMPTY IT HAS BEEN ADDED TO FRONT\n";
			add_big(x);
			return;
		}

		node* p = new node();
		p->data = x;
		p->next = NULL;
		tail->next = p;
		tail = p;
	}


	bool search(int x)
	{
		node* temp = head;

		while (temp != NULL)
		{
			if (temp->data == x)
			{
				return true;
			}
			temp = temp->next;
		}

		return false;
	}


	void addAfter(int after, int x)
	{
		if (head == NULL)
		{
			cout << "singlelist is empty";

			return;
		}

		if (search(after) == true)
		{
			if (after == tail->data)
			{
				addEnd(x);
				return;
			}


			node* p = new node();
			p->data = x;
			node* temp = head;

			while (temp != NULL && temp->data != after)
			{
				temp = temp->next;
			}

			p->next = temp->next;
			temp->next = p;
		}
		else
		{
			cout << "item not found\n";
		}

	}



	void delBig()
	{
		if (head == NULL)
		{
			cout << "singlelist is empty";

			return;
		}

		node* temp = head;

		head = head->next;

		delete temp;
	}


	void delEnd()
	{
		if (head == NULL)
		{
			cout << "singlelist is empty";

			return;
		}

		if (head == tail)
		{
			head = tail = NULL;
			return;
		}
		node* temp;
		node* pre = head;

		while (pre->next != tail)
		{
			pre = pre->next;
		}

		temp = pre->next;
		tail = pre;
		tail->next = NULL;
		delete temp;
	}


	void delVal(int x)
	{
		if (head == NULL)
		{
			cout << "singlelist is empty";

			return;
		}

		if (search(x) == true)
		{

			if (x == head->data)
			{
				delBig();
				return;
			}

			if (x == tail->data)
			{
				delEnd();
				return;
			}
			node* temp = head;
			node* temp2;
			while (temp != NULL && temp->next->data != x)
			{
				temp = temp->next;
			}
			temp2 = temp->next;

			temp->next = temp2->next;
			delete temp2;

		}

	}

	void display()
	{
		if (head == NULL)
		{
			cout << "singlelist is empty";

			return;
		}

		node* temp = head;

		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;

		}
	}
	
};


