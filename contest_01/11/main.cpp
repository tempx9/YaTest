#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b, c, check, check2;
  cin >> a >> b >> c;
  if (b != c) {
    check = abs(a-b);
    check2 = abs(a-c);
    if (check < check2) {
      cout << "B " << check;
    }
    else {
      cout << "C " << check2;
    }
  }
}
