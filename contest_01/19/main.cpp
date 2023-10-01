#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  const int MAX_WORD_COUNT = 1000;
  string words[MAX_WORD_COUNT];
  int wordCount[MAX_WORD_COUNT] = {0};
  int n = 0;

  // Считываем слова и сохраняем их в массив
  while (cin >> words[n]) {
    if (words[n] == "end") {
      break;
    }
    n++;
  }

  // Сортируем массив слов
  sort(words, words + n);

  for (int i = 0; i < n; i++) {
    int count = 1;
    
    // Подсчитываем количество одинаковых слов
    while (i < n - 1 && words[i] == words[i + 1]) {
      count++;
      i++;
    }
    
    // Если слово встречается более одного раза, выводим его
    if (count > 1) {
      cout << words[i] << " ";
    }
  }

  cout << endl;

  return 0;
}
