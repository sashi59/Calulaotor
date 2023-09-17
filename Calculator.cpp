#include <iostream>
using namespace std;

int main()
{
    cout << "************* Simple Calculator Program *************" << endl;
    char ch;
    double a, b;
    cout << "Enter your two numbers\n";
    cin >> a >> b;
    int k = 0;

    Flag:
    cout << "Enter the operation i.e. '+' '-' '*' '/'" << endl;
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << "Result : " << a + b << endl;
        break;
    case '-':
        cout << "Result : " << a - b << endl;
        break;
    case '*':
        cout << "Result : " << a * b << endl;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Not Defined! Division by zero is not allowed\n";
        }
        else
        {
            cout << "Result : " << a / b << endl;
        }
        break;
    default:
        cout << "Invalid operator! Try again\n";
        goto Flag;
    }

    return 0;
}