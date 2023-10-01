package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	// Считать ввод от пользователя
	reader := bufio.NewReader(os.Stdin)
	input, _ := reader.ReadString('\n')

	// Разделить ввод на два числа
	numbers := strings.Fields(input)
	if len(numbers) != 2 {
		fmt.Println("Неверный ввод. Пожалуйста, введите два числа, разделенных пробелом.")
		return
	}

	// Преобразовать введенные числа в тип float64
	a, errA := strconv.ParseFloat(numbers[0], 64)
	b, errB := strconv.ParseFloat(numbers[1], 64)

	if errA != nil || errB != nil {
		fmt.Println("Неверный ввод. Пожалуйста, введите корректные числа.")
		return
	}

	// Вычислить произведение a и b
	result := a * b

	// Вывести результат
	fmt.Printf("%.2f\n", result)
}
