package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)

	// Создаем слайс для хранения исходных значений
	values := make([]int, n)
	
	// Создаем слайс для хранения сглаженных значений
	smoothed := make([]float64, n)

	// Считываем исходные значения
	for i := 0; i < n; i++ {
		fmt.Scan(&values[i])
	}

	// Первый и последний элементы сглаженного слайса равны исходным значениям
	smoothed[0] = float64(values[0])
	smoothed[n-1] = float64(values[n-1])

	// Вычисляем сглаженные значения для остальных элементов
	for i := 1; i < n-1; i++ {
		smoothed[i] = (float64(values[i-1]) + float64(values[i]) + float64(values[i+1])) / 3.0
	}

	// Выводим сглаженные значения
	for i := 0; i < n; i++ {
		fmt.Printf("%.10f", smoothed[i])
		if i < n-1 {
			fmt.Print(" ")
		}
	}
	fmt.Println()
}
