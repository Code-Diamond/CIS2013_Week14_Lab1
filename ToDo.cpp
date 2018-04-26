#include "ToDo.h"

using namespace std;

	ToDo::ToDo(int l)
	{
		length = l;
		list = new string[length];
	}
	//Destructor (~ automatically calls when out of scope)
	ToDo::~ToDo()
	{
		delete [] list;
	}

	//Add item to list		
	void ToDo::add(string i)
	{
		if(next < length)
		{
			list[next] = i;
			next++;
		}

	}
	//Finish the last item in list
	void ToDo::done()
	{
		next--;
		list[next] = "";
	}
	//Print the list
	void ToDo::print()
	{
		for(int i = 0; i < next; i++)
		{
			cout << " * " << list[i] << endl;
		}
	}