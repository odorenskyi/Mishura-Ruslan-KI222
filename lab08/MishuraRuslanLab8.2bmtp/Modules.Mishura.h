#ifndef MODULES_MISHURA_H // �� ������ �� ���������� ��������� ������������� �����
#define MODULES_MISHURA_H

#include <cmath> // ��� ������������ �������, ���������, sin � sqrt

double s_calculation(double x, double y, double z)
{
    const double pi = 3.14159265358979323846; // ��������� ��������� �
    double s = std::abs(std::sin(std::abs(y - z * z)) + std::sqrt(x) - std::sqrt((std::pow(y * z, x) + y) / (2 * pi))); // ���������� �������� s �� ��������
    return s; // ��������� �������� s
}

#endif // MODULES_MISHURA_H
