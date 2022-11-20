#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b;
    char op;

    cout << "a:";
    cin >> a ;
    cout << "operation:";
    cin >> op;
    cout << "b:";
    cin >> b;

    switch(op){
        case '+': cout << a + b;
        break;
        
        case '-': cout << a - b;
        break;

        case '*': cout << a * b;
        break;

        case '/': cout << a / b;
        break;

        case '^': cout << pow(a,b);
        break;

        default: cout << "no";
        break;

    }

    return 0;
}