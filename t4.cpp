#include <iostream>
#include <tuple>

int gcd(long long a, long long b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// Функция для сокращения дроби
std::pair<long long, long long> reduce(long long numerator, long long denominator) {
  long long commonDivisor = gcd(numerator, denominator);
  numerator /= commonDivisor;
  denominator /= commonDivisor;
  return std::make_pair(numerator, denominator);
}


// Функция для нахождения наименьшего общего кратного (НОК) и сомножителей
std::tuple<long long, long long, long long> find_lcm(long long a, long long b) {
  long long commonDivisor = gcd(a, b);
  long long lcm = (a / commonDivisor) * b; // НОК = (a * b) / НОД(a, b)
  long long c = b / commonDivisor;
  long long d = a / commonDivisor;
  return std::make_tuple(lcm, c, d);
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