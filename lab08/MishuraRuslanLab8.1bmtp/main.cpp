#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, s;

    // отримуємо значення x, y, z від користувача
    cout << "Enter x, y and z values: "; //Введіть значення x, y та z:
    cin >> x >> y >> z;

    // обчислюємо значення s за формулою
    s = abs(sin(abs(y - pow(z, 2))) + sqrt(x) - sqrt(pow(y * z, x) + y / (2 * M_PI)));

    // виводимо результат
    cout << "S = " << s << endl;

    return 0;
}
