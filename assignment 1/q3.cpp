#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    
    
	int a, b, c;
	cout << "Enter three numbers: ";
	cin >> a >> b >> c;
	
	if (a > b && a > c)
	{
	cout << "largest number: " << a  << endl;
	}
	else if (b > a && b > c)
	{
	cout << "largest number: " << b  << endl;
	}
	else
	{
	cout << "largest number: " << c << endl;
	}

	if (a < b && a < c)
	{
	cout << "smallest number: " << a << endl;
	}
	else if (b < a && b < c)
	{
	cout << "smallest number: " << b << endl;
	}
	else
	{
	cout << "smallest number: " << c << endl;
	}

	if (a == b && a == c && b == c)
	{
	cout << "All numbers are equal." << endl;
	}
	else
	{
	cout << "All three numbers are not equal." << endl;
	}
	return 0;
}