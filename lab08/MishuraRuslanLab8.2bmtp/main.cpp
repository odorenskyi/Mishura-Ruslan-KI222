#include <iostream>
#include <iomanip>
#include "Modules.Mishura.h"

using namespace std;

int main() {
    int x, y, z;
    char a, b;

    // Ввід значень
    cout << "Enter x, y, z: "; //Введіть x, y, z
    cin >> x >> y >> z;

    cout << "Enter the symbols a and b: "; //Введіть символи a та b
    cin >> a >> b;

    // Вивід прізвища та імені розробника
    cout << "Developer: Ruslan Mishura (c)" << endl;

    // Результат логічного виразу a+7=b
    bool result = (a + 7 == b);
    cout << "The result of the logical expression a+7=b: " << boolalpha << result << endl; //Результат логічного виразу a+7=b

    // Вивід значень x, y, z у десятковій та шістнадцятковій системах числення
    cout << "x = " << dec << x << " (0x" << hex << x << ")" << endl;
    cout << "y = " << dec << y << " (0x" << hex << y << ")" << endl;
    cout << "z = " << dec << z << " (0x" << hex << z << ")" << endl;

    // Обчислення значення S за допомогою функції s_calculation()
    double S = s_calculation(x, y, z);
    cout << "The value of S: " << fixed << setprecision(2) << S << endl; //Значення S

    return 0;
}


