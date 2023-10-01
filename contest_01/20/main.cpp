#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  long long num1, num2;

  // Ввод двух чисел
  cin >> num1 >> num2;

  // Преобразование чисел в строки для сортировки цифр
  string str_num1 = to_string(num1);
  string str_num2 = to_string(num2);

  // Сортировка цифр в строках
  sort(str_num1.begin(), str_num1.end());
  sort(str_num2.begin(), str_num2.end());

  // Сравнение отсортированных строк и вывод результата
  cout << (str_num1 == str_num2 ? "YES" : "NO") << endl;

  return 0;
}
