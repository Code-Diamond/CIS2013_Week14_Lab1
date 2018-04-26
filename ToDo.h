#include <iostream>
#include <cstring>

using namespace std;

class ToDo 
{
private:
	string *list;
	int length = 0;
	int next = 0;

public:
	//Create list of length l
	ToDo(int l);
	//Add item to list		
	void add(string i);
	//Finish the last item in list
	void done();
	//Print the list
	void print();
	//Destroy our list
	~ToDo();
};