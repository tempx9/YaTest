#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int heights[1000];
  for (int i = 0; i < n; i++) {
    cin >> heights[i];
  }

  long long totalWater = 0;
  int leftMax = 0, rightMax = 0;
  int left = 0, right = n - 1;

  // Итерируемся по массиву высот
  while (left < right) {
    if (heights[left] < heights[right]) {
      // Вычисляем воду, собранную слева
      if (heights[left] > leftMax) {
        leftMax = heights[left];
      } else {
        totalWater += leftMax - heights[left];
      }
      left++;
    } else {
      // Вычисляем воду, собранную справа
      if (heights[right] > rightMax) {
        rightMax = heights[right];
      } else {
        totalWater += rightMax - heights[right];
      }
      right--;
    }
  }

  cout << totalWater << endl;

  return 0;
}
