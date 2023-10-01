package main

import (
	"fmt"
)

/* collatzSteps вычисляет количество шагов, необходимых для достижения числа 1 в последовательности Коллатца,
начиная с заданного числа x. */
func collatzSteps(x int) int {
	steps := 0
	for x != 1 {
		if x%2 == 0 {
			x /= 2
		} else {
			x = 3*x + 1
		}
		steps++
	}
	return steps
}

func main() {
	var x int
	fmt.Scan(&x)

	// Вызываем функцию collatzSteps для вычисления количества шагов в последовательности Коллатца.
	steps := collatzSteps(x)
	fmt.Println(steps)
}
