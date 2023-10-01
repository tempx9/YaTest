package main
import (
    "bufio"
    "fmt"
    "os"
)

// Функция isPalindrome проверяет, является ли входная строка s палиндромом.
func isPalindrome(s string) bool {
    s = toLowerCase(s)
    i, j := 0, len(s)-1
    
  // Пока левый указатель меньше правого, продолжаем проверку.
    for i < j {
        for i < j && !isValidChar(s[i]) {
            i++
        }
        for i < j && !isValidChar(s[j]) {
            j--
        }
        if s[i] != s[j] {
            return false
        }
        i++
        j--
    }
    return true
}

// Функция isValidChar проверяет, является ли символ допустимым для проверки палиндрома.
func isValidChar(char byte) bool {
    return (char >= 'a' && char <= 'z') || (char >= '0' && char <= '9')
}

// Функция toLowerCase преобразует символы строки в нижний регистр.
func toLowerCase(s string) string {
    var result string
    for _, char := range s {
        if char >= 'A' && char <= 'Z' {
            result += string(char + 'a' - 'A')
        } else {
            result += string(char)
        }
    }
    return result
}

func main() {
    line, _  := bufio.NewReader(os.Stdin).ReadString('\n')
    if isPalindrome( line[:len(line)-1] ){  // Обрезаем \n в конце строки
        fmt.Println("YES")
    }else{
        fmt.Println("NO")
    }
}
