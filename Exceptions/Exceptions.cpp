//Isaac Booth 
//CIS 1202 101
//May 2, 2021

#include <iostream>
#include <string>
using namespace std;

//Function prototype
char character(char start, int offset);

int main()
{
	//User input
	char start = 0, target = 0; int offset = 0;
	cout << "Enter the starting position: "; cin >> start;
	cout << "Enter the offset: "; cin >> offset;

	//Call charachter and catch any exceptions
	try
	{
		target = character(start, offset);
		cout << "The target is: " << target;
	}
	catch (string invalidCharacterException)
	{
		cout << invalidCharacterException;
	}
	catch (string invalidRangeException)
	{
		cout << invalidRangeException;
	}
	catch (string invalidTransitionException)
	{
		cout << invalidTransitionException;
	}
	
	return 0;
}

char character(char start, int offset)
{

}

//A-Z = 65-90
//a-z = 97-122