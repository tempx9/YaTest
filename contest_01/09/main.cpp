#include <iostream>
#include <cmath> // Для функции sqrt()
using namespace std;

int main() {
    double a, b;
    
    cin >> a >> b;

    double c = sqrt(a * a + b * b);
    
    cout << c << endl;
    
    return 0;
}
