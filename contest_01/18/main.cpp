#include <iostream>
#include <string>
using namespace std;

string convertToTitle(int n) {
  string result = ""; // Для хранения имени столбца Excel.3

  while (n > 0) {
    n--; // Делаем 0-ую индексацию для упрощения счёта. Отнимаем, так как в Excel 1-ая индексация.

    int remainder = n % 26; // 26 букв в англ. алфавите, что в Excel и используется.
    result = char('A' + remainder) + result;

    n /= 26; // Переход к следующей позиции столбца.
  }

  return result; // Возвращаем сформированное имя столбца.
}

int main() {
  int n;
  cin >> n;

  if (n < 1 || n > 2147483647) {
    cout << "Invalid input. Please enter a valid integer in the specified range." << endl;
    return 1;
  }

  string columnName = convertToTitle(n);
  cout << columnName << endl;

  return 0;
}
