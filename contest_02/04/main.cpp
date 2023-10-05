#include <iostream>
#include <tuple>

// Функция для вычисления наибольшего общего делителя (НОД) двух чисел
int gcd(int a, int b) {
    // Пока b не станет равным 0, продолжаем вычислять НОД
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; // Возвращаем НОД
}

// Функция для сокращения дроби до несократимой формы
std::tuple<int, int> reduce(int m, int n) {
    int common_divisor = gcd(std::abs(m), n); // Вычисляем НОД модуля числителя и знаменателя
    return { m / common_divisor, n / common_divisor }; // Делим числитель и знаменатель на их общий делитель
}

// Функция для нахождения НОК и двух дополнительных чисел по двум числам
std::tuple<int, int, int> find_lcm(int a, int b) {
    int gcd_ab = gcd(a, b); // Вычисляем НОД двух чисел
    int lcm_ab = (a / gcd_ab) * b; // Вычисляем НОК двух чисел
    return { lcm_ab, b / gcd_ab, a / gcd_ab }; // Делим каждое из чисел на НОД для получения двух дополнительных чисел
}

int main() {
    int m1, n1, m2, n2;
    char _;
    std::cin >> m1 >> _ >> n1
             >> m2 >> _ >> n2;
    std::tie(m1, n1) = reduce(m1, n1);
    std::tie(m2, n2) = reduce(m2, n2);

    auto[lcm, c1, c2] = find_lcm(n1, n2);
    auto[m, n] = reduce(m1 * c1 + m2 * c2, lcm);

    std::cout << m << '/' << n << std::endl;
}
