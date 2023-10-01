package main

import (
	"fmt"
	"strconv"
)

func main() {
	var lines, num int

	fmt.Scan(&lines, &num)

	// Вывод заголовка таблицы умножения
	fmt.Print("    |")

	// Вывод заголовка столбцов таблицы
	for p := 1; p <= num; p++ {
		intend(p)        // Функция для выравнивания чисел в столбцах
		fmt.Print(p)
	}

	fmt.Print("\n   --")

	// Разделительная строка между заголовком и данными
	for i := 1; i <= num; i++ {
		fmt.Print("----")
	}

	fmt.Print("\n")

	// Генерация и вывод данных таблицы умножения
	for s := 1; s <= lines; s++ {
		intend(s)        // Функция для выравнивания чисел в строках
		fmt.Print(s, "|")
		for q := 1; q <= num; q++ {
			intend(s * q)
			fmt.Print(s * q)
		}
		fmt.Println()   // Переход на следующую строку для новой строки таблицы
	}
}

// Функция intend применяется для выравнивания чисел в столбцах и строках таблицы.
func intend(w int) {
	switch len(strconv.Itoa(w)) {
	case 1:
		fmt.Print("   ") // Если число однозначное, добавляем три пробела
	case 2:
		fmt.Print("  ")  // Если число двузначное, добавляем два пробела
	case 3:
		fmt.Print(" ")   // Если число трехзначное, добавляем один пробел
	}
}
