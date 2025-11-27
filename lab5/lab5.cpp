#include <iostream>
using namespace std;

int main()
{
    int n, digit, reverseNo = 0;
    cout << "Enter a number: ";
    cin >> n;
    int x = n;
    while (n != 0)
    {
        digit = n % 10;
        reverseNo = (reverseNo * 10) + digit;
        n = n / 10;
    }
    if (reverseNo == x)
        cout << x << " is a palindrome No!";
    else
        cout << x << " is not a palindrome No!";

    return 0;
}