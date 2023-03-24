#include <iostream>
#include <exception>

void goesWrong()
{
	bool error1Detected = false;
	bool error2Detected = true;

	if(error1Detected)
	{
		throw std::bad_alloc();
	}

	if(error2Detected)
	{
		throw std::exception();
	}
}

int main()
{
	try
	{
		goesWrong();
	}
	catch(std::bad_alloc &e)
	{
		std::cout << "Error caught: " << e.what() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "Still running!" << std::endl;


	return 0;
}