#include <iostream>
using namespace std;
  int main()
{
    char ch;
    float num1, num2;

    cout<<"Enter the two numbers for operation"<<endl;
    cin >> num1 >> num2;
    cout<<"Enter the operator"<<endl;
    cin >> ch;


    switch (ch) {

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
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
