#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, s;

    // �������� �������� x, y, z �� �����������
    cout << "Enter x, y and z values: "; //������ �������� x, y �� z:
    cin >> x >> y >> z;

    // ���������� �������� s �� ��������
    s = abs(sin(abs(y - pow(z, 2))) + sqrt(x) - sqrt(pow(y * z, x) + y / (2 * M_PI)));

    // �������� ���������
    cout << "S = " << s << endl;

    return 0;
}
