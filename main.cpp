#include <iostream>
#include <cstring>
#include "ToDo.h"
using namespace std;

int main()
{
	char next = 'y';
	int length = 0;
	string item;
	cout << "How long do you want your list: ", cin >> length;
	ToDo list(length);

	while(next != 'x')
	{
		cout << "Add to list (a)" << endl;
		cout << "Done list item (d)" << endl;
		cout << "Print list (p)" << endl;
		cout << "Exit todo list app (x)" << endl;
		cout << "What do you want to do: ";
		cin >> next;

		switch(next)
		{
			case 'a':
				
				cout << "What do you want to add to the list: ";
				cin >> item;
				list.add(item);
				break;
			case 'd':
				list.done();
				break;
			case 'p':
				list.print();
				break;
			//All done with the todo list
			case 'x':
				break;
		}
	}

	return 0;
}