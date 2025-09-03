#include <iostream>
#incldue <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std;

void mightGoWrong();
void usesMightGoWrong();

int main()
{
	try
	{
		mightGoWrong();
	}
	catch(int e)
	{
		cout << "Error: " << "An error occured!" << endl;
	}
	catch(char const *e)
	{
		cout << "Error: " << e << endl;
	}
	catch(string &e)
	{
		cout << "String error message: " << e << endl;
	}
	
	cout << "Still running!" << endl;

	return 0;
}

void mightGoWrong()
{
	bool error1 = false;
	bool error2 = true;

	if(error1)
	{
		throw "Something went wrong.";
	}

	if(error2)
	{
		throw string("Something else went wrong.");
	}
}

void useMightGoWrong()
{
	mightGoWrong();
}