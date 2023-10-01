package main

import (
  "fmt"
  "math"
)

func main() {
  var human float64 = 0.5
  var oak float64 = 20
  var poplar float64 = 32

  human = 365 * human
  oak1 := math.Ceil(human / oak)
  poplar1 := math.Ceil(human / poplar)
  
  fmt.Println(human, poplar1, oak1)
}
