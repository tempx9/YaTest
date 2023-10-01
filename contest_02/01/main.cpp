#include <cmath>

bool is_prime(int n) {
  if (n <= 1) {
    return false;
  }
  if (n == 2) {
    return true;
  }
  if (n % 2 == 0) {
    return false;
  }

  int sqrt_n = sqrt(n); // для оптимизации цикла
  for (int i = 3; i <= sqrt_n; i += 2) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}
