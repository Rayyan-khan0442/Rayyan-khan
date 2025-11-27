
#include <iostream>
using namespace std;
int n, choice;

void checkEvenOdd();
void countDigits();
void sumDigits();
void isPrime();
void getNumber();
void GetOperation();
void output(bool, int);
void output(int, int, int);
int main()
{
    int result;
    bool stop = false;
    while (!stop)
    {
        GetOperation();
        if (choice == 1)
        {
            getNumber();
            checkEvenOdd();
        }
        else if (choice == 2)
        {
            getNumber();
            countDigits();
        }
        else if (choice == 3)
        {
            getNumber();
            sumDigits();
        }
        else if (choice == 4)
        {
            getNumber();
            isPrime();
        }
        else
            stop = true;
    }
    return 0;
}

void getNumber()
{
    cout << "Enter a number: ";
    cin >> n;
}
void GetOperation()
{

    cout << "Which Operation do you want to perform: " << endl;
    cout << "1. Check Even Odd\n2. Count digits\n3. Sum Digits\n4. Check if it is a prime Number\n5. Exit\n";
    cout << "Enter Choice: ";
    cin >> choice;
}

void checkEvenOdd()
{
    if (n % 2 == 0)
    {
        output(true, 1);
    }
    else
    {
        output(false, 2);
    }
}

void countDigits()
{
    int count = 0;
    int temp = n;
    while (n != 0)
    {
        n = n / 10;

        count++;
    }
    output(count, temp, 1);
}
void sumDigits()
{
    int temp = n, r, sum;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r;
    }
    output(sum, temp, 2);
}
void isPrime()
{
    bool isPrime = false;
    if(n == 2){
        cout<<n<<" is a prime Number!";
    }
    else{
    for(int i=2; i < n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
        else{
            isPrime = true;
        }
    }
    if (isPrime == true){
        output(true, 3);
    }
    else{
        output(false, 4);
    }
    }
}
void output(bool result, int op)
{
    switch (op)
    {
    case 1:
        cout << n << " is Even";
        break;
    case 2:
        cout << n << " is Odd";
        break;
    case 3:
        cout << n << " is a prime no";
        break;
    case 4:
        cout << n << " is a composite no";
        break;
    }
    cout << "\n---------------------------\n";
}
void output(int result, int temp, int op)
{
    switch (op)
    {
    case 1:
        cout << "The Number " << temp << " contains " << result << " digits.";
        break;
    case 2:
        cout << "The sum of the digits of " << temp << " is " << result;
        break;
    }

    cout << "\n---------------------------\n";
}
