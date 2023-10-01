package main

import (
	"fmt"
)

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)

	maximum := a
	if b > maximum {
		maximum = b
	}
	if c > maximum {
		maximum = c
	}

	fmt.Println(maximum)
}
