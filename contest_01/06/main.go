package main

import "fmt"

func main() {
    var N int

    // Считывание целочисленного значения N с клавиатуры
    _, err := fmt.Scanf("%d", &N)
    if err != nil {
        fmt.Println("Неверный ввод. Пожалуйста, введите корректное число.")
        return
    }

    // Задание номиналов банкнот
    denominations := []int{5000, 1000, 500, 200, 100}
    
    // Создание слайса для хранения количества банкнот каждого номинала
    numBanknotes := make([]int, len(denominations))

    // Перебор номиналов банкнот и вычисление количества каждого номинала
    for i, denom := range denominations {
        numBanknotes[i] = N / denom
        N %= denom
    }

    // Вывод количества банкнот каждого номинала
    for _, num := range numBanknotes {
        fmt.Printf("%d ", num)
    }
    
    fmt.Println() // Печать новой строки для форматирования
}
