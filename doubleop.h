#pragma once
#include "node.h"
class doubleop :public node
{
public:
	node* head, * tail;
	doubleop()
	{
		tail = head = NULL;
	}

	void addBig(int x)
	{
		node* p = new node();
		p->data = x;

		p->prev = NULL;
		if (head == NULL)
		{
			p->next = NULL;
			head = tail = p;
			return;
		}
		p->next = head;
		head->prev = p;
		head = p;
	}

	void addEnd(int x)
	{
		if (head == NULL)

		{
			cout << "LIST IS EMPTY ITEM ADDED TO THE HEAD\n";
			addBig(x);
			return;
		}

		node* p = new node();
		p->data = x;
		p->next = NULL;
		p->prev = tail;
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
			cout << "LIST IS EMPTY \n";

			return;
		}

		if (search(after) == true)
		{
			if (tail->data == after)
			{
				addEnd(x);
				return;
			}

			node* temp = head;

			while (temp != NULL && temp->data != after)
			{
				temp = temp->next;
			}

			node* p = new node();

			p->data = x;
			p->next = temp->next;
			p->prev = temp;
			temp->next->prev = p;
			temp->next = p;

		}


		else
		{
			cout << "ITEM NOT FOUND\n";
		}
	}


	void delBig()
	{

		if (head == NULL)

		{
			cout << "LIST IS EMPTY \n";

			return;
		}

		node* temp = head;

		head = head->next;
		head->prev = NULL;

		delete temp;
	}



	void delEnd()
	{

		if (head == NULL)

		{
			cout << "LIST IS EMPTY \n";

			return;
		}

		if (head == tail)
		{
			head = tail = NULL;
		}

		node* temp = tail;

		tail = tail->prev;
		tail->next = NULL;

		delete temp;
	}



	void delVal(int x)
	{
		if (head == NULL)

		{
			cout << "LIST IS EMPTY \n";

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
			temp2->next->prev = temp;
			delete temp2;
		}

		else

		{
			cout << "tem not found\n";
		}

	}




	void display()
	{
		if (head == NULL)

		{
			cout << "LIST IS EMPTY \n";

			return;
		}

		node* temp = head;

		while (temp != NULL)
		{
			cout << temp->data << " ";

			temp = temp->next;
		}
	}


	void display_B()
	{
		if (head == NULL)

		{
			cout << "LIST IS EMPTY \n";

			return;
		}

		node* temp = tail;

		while (temp != NULL)
		{
			cout << temp->data << " ";

			temp = temp->prev;
		}
	}
};


