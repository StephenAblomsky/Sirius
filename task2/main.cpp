#include <iostream>
using namespace std;

int fib(int n)
{
    if( n < 0){
        cout << "Ошибка! Введенное число не является целым неотрицательным." << endl;
    }
    assert(n>=0);
    if (n <= 1){
        return n;
    }
    return fib( n-1) + fib(n-2);
}

int main () {
    int number;
    cout  << "Введите целое неотрицательное число" << endl;

    cin >> number;
    cout << fib(number);

    return 0;
}