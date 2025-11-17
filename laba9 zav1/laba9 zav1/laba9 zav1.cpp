#include <iostream>
using namespace std;
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int sum = 0;

    for (int i = 10; i <= 100; i++) {
        sum += i * i;
    }

    cout << "Сума квадратів від 10 до 100 = " << sum << endl;

    return 0;
}