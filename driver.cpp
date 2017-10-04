#include <iostream>

using namespace std;

int main()
{
	
}

void power(const int & base, const int & pow)
{
	int retVal = base;

	for (int i = 0; i < pow; i++)
	{
		retVal *= base;
	}

	cout << retVal << endl;
}