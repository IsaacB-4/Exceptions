//Isaac Booth 
//CIS 1202 101
//May 2, 2021

#include <iostream>
#include <string>
using namespace std;

//Exception classes
class invalidCharacterException{};
class invalidRangeException{};
class invalidTransitionException{};

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
	catch (invalidCharacterException a)
	{
		cout << "Error: character entered was not a letter\n";
	}
	catch (invalidRangeException b)
	{
		cout << "Error: target is not a letter\n";
	}
	catch (invalidTransitionException c)
	{
		cout << "Error: upper-lower case transitions prohibited\n";
	}
	
	return 0;
}

char character(char start, int offset)
{
	char target = (start + offset);
	//Checks if the starting position is a letter
	if (!isalpha(start))
	{
		invalidCharacterException a;
		throw a;
	}
	//Checks if the target is a letter
	if (!isalpha(target))
	{
		invalidRangeException b;
		throw b;
	}
	//Checks if a upper-lower transition occured
	if (islower(start) && isupper(target) || isupper(start) && islower(target))
	{
		invalidTransitionException c;
		throw c;
	}
	return target;
}

//A-Z = 65-90
//a-z = 97-122