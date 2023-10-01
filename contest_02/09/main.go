package main
import (
    "bufio"
    "fmt"
    "os"
)

/* Функция isLucky проверяет, является ли шестизначное число "счастливым".
Чтобы число считалось "счастливым", сумма его первой половины цифр должна равняться сумме второй половины цифр. */
func isLucky(number string) bool {
    if len(number) != 6 {
        return false
    }

    sumFirstHalf := 0
    sumSecondHalf := 0

    // Итерируемся по каждой цифре в числе.
    for i := 0; i < 6; i++ {
        digit := int(number[i] - '0') // Преобразуем символ в цифру

        if i < 3 {
            sumFirstHalf += digit
        } else {
            sumSecondHalf += digit
        }
    }

    // Сравниваем суммы первой и второй половин числа и возвращаем true, если они равны, и false в противном случае.
    return sumFirstHalf == sumSecondHalf
}

func main() {
    number, _  := bufio.NewReader(os.Stdin).ReadString('\n')
    if isLucky( number[:len(number)-1] ){  // Обрезаем \n в конце строки
        fmt.Println("YES")
    }else{
        fmt.Println("NO")
    }
}
