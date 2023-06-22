#include <iostream>
#include "singleop.h"
#include "doubleop.h"
#include"circularop.h"
#include"linkedstack.h"
#include"linkedQ.h"
using namespace std;

int main()
{
	cout << "======================" << endl;
	cout << "      HELLO WORLD!       " << endl;
	cout << "======================" << endl;

	singleop single;
	doubleop doub;
	circularop cir;
	linkedstack stc;
	linkedQ Q;



	int determine, x, y, value;

	for (int i = 0; i < 1; i++)
	{
		cout << endl << endl << endl << endl;

		cout << "WHICH TYPE OF LINKED LIST?" << endl;
		cout << "1. " << "single linked list" << endl;
		cout << "2. " << "double linked list" << endl;
		cout << "3. " << "circular linked list" << endl;
		cout << "4. " << "linked stack " << endl;
		cout << "5. " << "linked queue " << endl;


		cin >> determine;

		if (determine == 1)

		{
			cout << "\n===============================" << endl;
			cout << "YOU SELECTED SINGLE LINKED LIST" << endl;
			cout << "\n===============================" << endl;
			cout << endl << "how many nodes to add at the head?" << endl;

			cin >> x;

			if (x > 0)
			{
				for (int i = 0; i < x; i++)
				{
					cout << "ENTER VAL " << i + 1 << " :";

					cin >> value;

					cout << endl;

					single.add_big(value);
				}


				cout << endl;

				single.display();
			}

			else if (x == 0 || x < 0)

			{
				cout << "\n================" << endl;

				cout << "adding to head skipped" << endl;
			}

			cout << endl << endl << "HOW MANY nodes to add at the tail?" << endl;

			cin >> y;

			if (y < 1 && x < 1)

			{

				cout << "\n================" << endl;
				cout << endl << "ERROR! NUMBER OF NODES SHOULD BE GREATER THAN 0" << endl;

				cout << "\n==========================" << endl;

				cout << "RE-RUN? 1/0" << endl;

				cin >> x;

				if (x == 1)
				{
					i = -1;
				}

				else
				{
					cout << "\n================" << endl;
					cout << "GOOD BYEEEEEEEE" << endl;
					cout << "\n================" << endl;
					break;
				}

			}
			else if (x > 0 || y > 0)
			{
				if (y > 0)
				{
					for (int i = 0; i < y; i++)
					{
						cout << "ENTER VAL " << i + 1 << " :";
						cin >> value;
						cout << endl;
						single.addEnd(value);
					}

					cout << endl;
					single.display();
				}

				cout << endl << "DO YOU WANT TO ADD A VALUE AFTER A SPECIFIC ELEMENT?  1/0" << endl;
				cin >> x;

				if (x == 1)
				{
					cout << "\n================" << endl;
					cout << "after which element" << endl;
					cin >> x;
					cout << "\nenter a value" << endl;
					cin >> value;

					single.addAfter(x, value);
					cout << "\n================" << endl;
					single.display();
				}

				cout << "\n================" << endl;
				cout << "\nSELECT ONE OF THESE" << endl;
				cout << "1. DELETE HEAD" << endl << "2. DELETE TAIL" << endl;
				cout << "3. DELETE BOTH" << endl;
				cout << "4. NONE OF THEM" << endl;
				cin >> x;

				if (x == 1)
				{
					single.delBig();
					cout << endl << "AFTER DELETING HEAD:" << endl;
					single.display();
					cout << endl;
				}
				else if (x == 2)
				{
					single.delEnd();
					cout << endl << "AFTER DELETING TAIL:" << endl;
					single.display();
					cout << endl;
				}
				else if (x == 3)
				{
					single.delBig();
					cout << endl << "AFTER DELETING HEAD:" << endl;
					single.display();
					cout << endl;

					single.delEnd();
					cout << endl << "AFTER DELETING TAIL:" << endl;
					single.display();
					cout << endl;
				}

				cout << "\n================" << endl;
				cout << "\nDO YOU WANT TO DELETE A SPECIFIC ELEMENT? 1/0" << endl;
				cin >> x;

				if (x == 1)
				{
					cout << "\n================" << endl;
					cout << "delete which element" << endl;
					cin >> value;
					single.delVal(value);

					cout << "\n==========" << endl;
					single.display();
					cout << endl;
				}


				cout << "\n==========" << endl;
				cout << "RE-RUN? 1/0" << endl;
				cin >> x;
				if (x == 1)
				{
					i = -1;
				}
				else
				{
					cout << "\n================" << endl;
					cout << "GOOD BYEEEEEEEE" << endl;
					cout << "\n================" << endl;
				}


			}
		}



		if (determine == 2)
		{
			cout << "\n================" << endl;
			cout << "YOU SELECTED DOUBLE LINKED LIST" << endl;
			cout << "\n================" << endl;
			cout << endl << "how many nodes to add at the head?" << endl;
			cin >> x;

			if (x > 0)
			{
				for (int i = 0; i < x; i++)
				{
					cout << "ENTER VAL " << i + 1 << " :";
					cin >> value;
					cout << endl;
					doub.addBig(value);
				}

				cout << endl;
				doub.display();
			}
			else if (x == 0 || x < 0)
			{
				cout << "\n================" << endl;
				cout << "adding to head skipped" << endl;
			}

			cout << "\n================" << endl;
			cout << endl << endl << "HOW MANY NODES TO ADD AT THE TAIL?" << endl;
			cin >> y;
			if (y < 1 && x < 1)
			{
				cout << "\n================" << endl;
				cout << endl << "ERROR! NUMBER OF NODES SHOULD BE GREATER THAN 0" << endl;

				cout << "\n==========================" << endl;
				cout << "RE-RUN? 1/0" << endl;
				cin >> x;
				if (x == 1)
				{
					i = -1;
				}
				else
				{
					cout << "\n================" << endl;
					cout << "GOOD BYEEEEEEEE" << endl;
					cout << "\n================" << endl;
					break;
				}


			}
			else if (x > 0 || y > 0)
			{
				if (y > 0)
				{
					for (int i = 0; i < y; i++)
					{
						cout << "ENTER VAL " << i + 1 << " :";
						cin >> value;
						cout << endl;
						doub.addEnd(value);
					}

					cout << "\n================" << endl;
					cout << endl;
					doub.display();
				}
				cout << endl << "DO YOU WANT TO ADD A VALUE AFTER A SPECIFIC ELEMENT?  1/0" << endl;
				cin >> x;

				if (x == 1)
				{
					cout << "\n================" << endl;
					cout << "after which element" << endl;
					cin >> x;
					cout << "\nenter a value" << endl;
					cin >> value;

					doub.addAfter(x, value);
					cout << "\n================" << endl;
					doub.display();
				}

				cout << endl << "do you want to see the list displayed backward? 1/0" << endl;
				cin >> x;

				if (x == 1)
				{
					cout << "\n================" << endl;
					doub.display_B();
					cout << endl;
				}

				cout << "\n================" << endl;
				cout << "\nSELECT ONE OF THESE" << endl;
				cout << "1. DELETE HEAD" << endl << "2. DELETE TAIL" << endl;
				cout << "3. DELETE BOTH" << endl;
				cin >> x;

				if (x == 1)
				{
					doub.delBig();
					cout << endl << "AFTER DELETING HEAD:" << endl;
					doub.display();
					cout << endl;
				}
				else if (x == 2)
				{
					doub.delEnd();
					cout << endl << "AFTER DELETING TAIL:" << endl;
					doub.display();
					cout << endl;
				}
				else if (x == 3)
				{
					doub.delBig();
					cout << endl << "AFTER DELETING HEAD:" << endl;
					doub.display();
					cout << endl;

					doub.delEnd();
					cout << endl << "AFTER DELETING TAIL:" << endl;
					doub.display();
					cout << endl;
				}

				cout << "\n================" << endl;
				cout << "\nDO YOU WANT TO DELETE A SPECIFIC ELEMENT? 1/0" << endl;
				cin >> x;

				if (x == 1)
				{
					cout << "\n================" << endl;
					cout << "delete which element" << endl;
					cin >> value;
					doub.delVal(value);

					cout << "\n==========" << endl;
					doub.display();
					cout << endl;
				}
				cout << "\n==========" << endl;
				cout << "RE-RUN? 1/0" << endl;
				cin >> x;
				if (x == 1)
				{
					i = -1;
				}
				else
				{
					cout << "\n================" << endl;
					cout << "GOOD BYEEEEEEEE" << endl;
					cout << "\n================" << endl;
				}


			}

		}


		if (determine == 3)
		{
			cout << "\n===============================" << endl;
			cout << "YOU SELECTED CIRCULAR LINKED LIST" << endl;
			cout << "\n===============================" << endl;
			cout << endl << "how many nodes to the head?" << endl;
			cin >> x;

			if (x > 0)
			{
				for (int i = 0; i < x; i++)
				{
					cout << "ENTER VAL " << i + 1 << " :";
					cin >> value;
					cout << endl;
					cir.add_big(value);
				}

				cout << endl;
				cir.display();
			}
			else if (x == 0 || x < 0)
			{
				cout << "\n================" << endl;
				cout << "adding to head skipped" << endl;
			}

			cout << endl << endl << "HOW MANY nodes to add at the tail?" << endl;
			cin >> y;

			if (y < 1 && x < 1)
			{

				cout << "\n================" << endl;
				cout << endl << "ERROR! NUMBER OF NODES SHOULD BE GREATER THAN 0" << endl;

				cout << "\n==========================" << endl;
				cout << "RE-RUN? 1/0" << endl;
				cin >> x;
				if (x == 1)
				{
					i = -1;
				}
				else
				{
					cout << "\n================" << endl;
					cout << "GOOD BYEEEEEEEE" << endl;
					cout << "\n================" << endl;
					break;
				}

			}
			else if (x > 0 || y > 0)
			{
				if (y > 0)
				{
					for (int i = 0; i < y; i++)
					{
						cout << "ENTER VAL " << i + 1 << " :";
						cin >> value;
						cout << endl;
						cir.addEnd(value);
					}

					cout << endl;
					cir.display();
				}

				cout << endl << "DO YOU WANT TO ADD A VALUE AFTER A SPECIFIC ELEMENT?  1/0" << endl;
				cin >> x;

				if (x == 1)
				{
					cout << "\n================" << endl;
					cout << "after which element" << endl;
					cin >> x;
					cout << "\nenter a value" << endl;
					cin >> value;

					cir.addAfter(x, value);
					cout << "\n================" << endl;
					cir.display();
				}

				cout << "\n================" << endl;
				cout << "\nSELECT ONE OF THESE" << endl;
				cout << "1. DELETE HEAD" << endl << "2. DELETE TAIL" << endl;
				cout << "3. DELETE BOTH" << endl;
				cin >> x;

				if (x == 1)
				{
					cir.delBig();
					cout << endl << "AFTER DELETING HEAD:" << endl;
					cir.display();
					cout << endl;
				}
				else if (x == 2)
				{
					cir.delEnd();
					cout << endl << "AFTER DELETING TAIL:" << endl;
					cir.display();
					cout << endl;
				}
				else if (x == 3)
				{
					cir.delBig();
					cout << endl << "AFTER DELETING HEAD:" << endl;
					cir.display();
					cout << endl;

					cir.delEnd();
					cout << endl << "AFTER DELETING TAIL:" << endl;
					cir.display();
					cout << endl;
				}

				cout << "\n================" << endl;
				cout << "\nDO YOU WANT TO DELETE A SPECIFIC ELEMENT? 1/0" << endl;
				cin >> x;

				if (x == 1)
				{
					cout << "\n================" << endl;
					cout << "delete which element" << endl;
					cin >> value;
					cir.delVal(value);

					cout << "\n==========" << endl;
					cir.display();
					cout << endl;
				}


				cout << "\n==========" << endl;
				cout << "RE-RUN? 1/0" << endl;
				cin >> x;
				if (x == 1)
				{
					i = -1;
				}
				else
				{
					cout << "\n================" << endl;
					cout << "GOOD BYEEEEEEEE" << endl;
					cout << "\n================" << endl;
				}


			}
		}

		if (determine == 4)
		{
			cout << "\n===============================" << endl;
			cout << " YOU SELECTED LINKED STACK" << endl;
			cout << "\n===============================" << endl;
			cout << endl << "how many nodes to push?" << endl;
			cin >> y;

			if (y < 1)
			{

				cout << "\n================" << endl;
				cout << endl << "ERROR! NUMBER OF NODES SHOULD BE GREATER THAN 0" << endl;

				cout << "\n==========================" << endl;
				cout << "RE-RUN? 1/0" << endl;
				cin >> x;

				if (x == 1)
				{
					i = -1;
					continue;
				}
				else
				{
					cout << "\n================" << endl;
					cout << "GOOD BYEEEEEEEE" << endl;
					cout << "\n================" << endl;
					break;
				}
			}

			else if (y > 0)
			{
				for (int i = 0; i < y; i++)
				{
					cout << "ENTER VAL " << i + 1 << " :";
					cin >> value;
					cout << endl;
					stc.push(value);
				}
				cout << endl << "THE STACK: ";
				stc.display();

				cout << endl << "==============" << endl;
				cout << "POP HOW MANY ITEMS?" << endl;
				cin >> x;
				if (x < 1)
				{
					cout << "\n================" << endl;
					cout << "END OF PROGRAMM, RE-RUN?  1/0" << endl;
					cin >> x;

					if (x == 1)
					{
						i = -1;
						continue;
					}
					else
					{
						cout << "\n================" << endl;
						cout << "GOOD BYEEEEEEEE" << endl;
						cout << "\n================" << endl;
						break;
					}
				}
				else
				{
					if (x > y)
					{
						cout << "\n================" << endl;

						cout << "CANNOT DELETE '" << x << "' ITEMS" << " BECAUSE THERE IS ONLY '" << y << "' items " << endl;
						cout << "DO YOU WANT TO DELETE ONLY'" << y << "' ITEMS  1/0" << endl;
						cin >> value;
						if (value != 1)
						{
							cout << "\n================" << endl;
							cout << "END OF PROGRAMM, RE-RUN?  1/0" << endl;
							cin >> x;

							if (x == 1)
							{
								i = -1;
								continue;
							}
							else
							{
								cout << "\n================" << endl;
								cout << "GOOD BYEEEEEEEE" << endl;
								cout << "\n================" << endl;
								break;
							}
						}
					}
					cout << "\n================" << endl;
					for (int i = 0; i < x && i < y; i++)
					{

						cout << stc.pop() << ".   deleted" << endl;;

					}

					cout << "\n================" << endl;
					cout << endl << "THE STACK AFTER DELETING" << endl;
					stc.display();
					cout << "\n================" << endl;

					cout << "\n================" << endl;
					cout << "END OF PROGRAMM, RE-RUN?  1/0" << endl;
					cin >> x;

					if (x == 1)
					{
						i = -1;
						continue;
					}
					else
					{
						cout << "\n================" << endl;
						cout << "GOOD BYEEEEEEEE" << endl;
						cout << "\n================" << endl;
						break;
					}
				}




			}
		}

		if (determine == 5)
		{
			cout << "\n===============================" << endl;
			cout << " YOU SELECTED LINKED QUEUE" << endl;
			cout << "\n===============================" << endl;
			cout << endl << "how many nodes to the Queue?" << endl;
			cin >> y;

			if (y < 1)
			{

				cout << "\n================" << endl;
				cout << endl << "ERROR! NUMBER OF NODES SHOULD BE GREATER THAN 0" << endl;

				cout << "\n==========================" << endl;
				cout << "RE-RUN? 1/0" << endl;
				cin >> x;

				if (x == 1)
				{
					i = -1;
					continue;
				}
				else
				{
					cout << "\n================" << endl;
					cout << "GOOD BYEEEEEEEE" << endl;
					cout << "\n================" << endl;
					break;
				}
			}

			else if (y > 0)
			{
				for (int i = 0; i < y; i++)
				{
					cout << "ENTER VAL " << i + 1 << " :";
					cin >> value;
					cout << endl;
					Q.inQ(value);
				}
				cout << endl << "THE QUEUE: ";
				Q.display();

				cout << endl << "==============" << endl;
				cout << "DELETE HOW MANY ITEMS?" << endl;
				cin >> x;
				if (x < 1)
				{
					cout << "\n================" << endl;
					cout << "END OF PROGRAMM, RE-RUN?  1/0" << endl;
					cin >> x;

					if (x == 1)
					{
						i = -1;
						continue;
					}
					else
					{
						cout << "\n================" << endl;
						cout << "GOOD BYEEEEEEEE" << endl;
						cout << "\n================" << endl;
						break;
					}
				}
				else
				{
					if (x > y)
					{
						cout << "\n================" << endl;
					
						cout << "CANNOT DELETE '" << x << "' ITEMS" << " BECAUSE THERE IS ONLY '" << y << "' items " << endl;
						cout << "DO YOU WANT TO DELETE ONLY'" << y << "' ITEMS  1/0" << endl;
						cin >> value;
						if (value != 1)
						{
							cout << "\n================" << endl;
							cout << "END OF PROGRAMM, RE-RUN?  1/0" << endl;
							cin >> x;

							if (x == 1)
							{
								i = -1;
								continue;
							}
							else
							{
								cout << "\n================" << endl;
								cout << "GOOD BYEEEEEEEE" << endl;
								cout << "\n================" << endl;
								break;
							}
						}
					}
					cout << "\n================" << endl;
					for (int i = 0; i < x &&i<y; i++)
					{

						cout << Q.dQ() << ".   deleted" << endl;;
						
					}
					
					cout << "\n================" << endl;
					cout << endl << "THE QUEUE AFTER DELETING"<<endl ;
					Q.display();
					cout << "\n================" << endl;

					
					cout << "END OF PROGRAMM, RE-RUN?  1/0" << endl;
					cin >> x;

					if (x == 1)
					{
						i = -1;
						continue;
					}
					else
					{
						cout << "\n================" << endl;
						cout << "GOOD BYEEEEEEEE" << endl;
						cout << "\n================" << endl;
						break;
					}
				}




			}

		}

	}




		return 0;

	}