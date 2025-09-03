#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
	public:
		virtual const char* what() throw()
		{
			return "Something bad had happened!" << endl;
		}
}

class Test
{
	public:
		void goesWrong()
		{
			throw MyException();
		}
}

int main()
{
	Test test;

	try
	{
		test.goesWrong();
	}
	catch(MyException &e)
	{
		cout << "Error caught: " << e.what() << endl;
	}
	cout << "Still running!" << endl;

	return 0;
}