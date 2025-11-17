#include <iostream>
using namespace std;
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double num, minNum, maxNum;

    cout << "Введіть перше число: ";
    cin >> num;

    minNum = maxNum = num;   // перше число — початкове мінімальне й максимальне

    for (int i = 2; i <= 5; i++) {
        cout << "Введіть число #" << i << ": ";
        cin >> num;

        if (num < minNum)
            minNum = num;

        if (num > maxNum)
            maxNum = num;
    }

    cout << "Найменше число: " << minNum << endl;
    cout << "Найбільше число: " << maxNum << endl;

    return 0;
}