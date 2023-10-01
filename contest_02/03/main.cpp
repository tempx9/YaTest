#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

// Функция для преобразования строки из 0 и 1 в целое число
int stringToInt(const std::string& s) {
    return std::stoi(s, nullptr, 2);
}

bool compare(const std::string& a, const std::string& b) {
    int countA = std::count(a.begin(), a.end(), '1'); // Количество единиц в строке a
    int countB = std::count(b.begin(), b.end(), '1'); // Количество единиц в строке b
    
    if (countA > countB) {
        return true; // Если в a больше единиц, она идет первой
    } else if (countA < countB) {
        return false; // Если в b больше единиц, она идет первой
    } else {
        // Если количество единиц равно, сравниваем числовые значения
        int intA = stringToInt(a);
        int intB = stringToInt(b);
        return intA < intB;
    }
}

int main(){
    int count;
    std::cin >> count;
    
    std::vector<std::string> nums(count);
    for(auto& line : nums) std::cin >> line;
    
    std::sort(nums.begin(), nums.end(), compare);
    
    for(auto& line : nums) std::cout << line << ' ';
}
