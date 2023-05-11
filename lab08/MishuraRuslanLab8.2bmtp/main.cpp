#include <iostream>
#include <iomanip>
#include "Modules.Mishura.h"

using namespace std;

int main() {
    int x, y, z;
    char a, b;

    // ��� �������
    cout << "Enter x, y, z: "; //������ x, y, z
    cin >> x >> y >> z;

    cout << "Enter the symbols a and b: "; //������ ������� a �� b
    cin >> a >> b;

    // ���� ������� �� ���� ����������
    cout << "Developer: Ruslan Mishura (c)" << endl;

    // ��������� �������� ������ a+7=b
    bool result = (a + 7 == b);
    cout << "The result of the logical expression a+7=b: " << boolalpha << result << endl; //��������� �������� ������ a+7=b

    // ���� ������� x, y, z � ��������� �� �������������� �������� ��������
    cout << "x = " << dec << x << " (0x" << hex << x << ")" << endl;
    cout << "y = " << dec << y << " (0x" << hex << y << ")" << endl;
    cout << "z = " << dec << z << " (0x" << hex << z << ")" << endl;

    // ���������� �������� S �� ��������� ������� s_calculation()
    double S = s_calculation(x, y, z);
    cout << "The value of S: " << fixed << setprecision(2) << S << endl; //�������� S

    return 0;
}


