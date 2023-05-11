#ifndef MODULES_MISHURA_H // це захист від множинного включення заголовкового файлу
#define MODULES_MISHURA_H

#include <cmath> // для математичних функцій, наприклад, sin і sqrt

double s_calculation(double x, double y, double z)
{
    const double pi = 3.14159265358979323846; // визначаємо константу пі
    double s = std::abs(std::sin(std::abs(y - z * z)) + std::sqrt(x) - std::sqrt((std::pow(y * z, x) + y) / (2 * pi))); // обчислюємо значення s за формулою
    return s; // повертаємо значення s
}

#endif // MODULES_MISHURA_H
