// A Calculator program made with C++
// Made by Robertas64
// Github : Robertas64

# include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "(?) Enter operator -, *, /, + : ";
    cin >> op;

    cout << "(?) Enter two number to calculate : ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    case '/':
        cout << num1 / num2;
        break;

    default:
        // If operator is not *, - and divide
        cout << "(!) Wrong operator, try it again!";
        break;
    }

    return 0;
}