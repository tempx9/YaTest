#include <iostream>
using namespace std;

string compressRLE(const string& input) {
  string compressed = ""; //  Хранит сжатую версию входной строки. В начале пустая строка.
  int count = 1;

  for (int i = 0; i < input.length(); i++) {
    if (i + 1 < input.length() && input[i] == input[i + 1]) {
      count++;
    } else {
      compressed += input[i];
      if (count > 1) {
        compressed += to_string(count);
      }
      count = 1; // Сброс счётчика.
    }
  }

  return compressed;
}

int main() {
  string input;
  cin >> input;

  string compressed = compressRLE(input);
  cout << compressed << endl;

  return 0;
}
