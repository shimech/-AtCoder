package main

import (
	"fmt"
	"math"
)

func main() {
	var N int
	fmt.Scan(&N)
	minVal := N - 1
	if N == 2 || N == 3 {
		fmt.Println(minVal)
		return
	}
	for i := 2; i <= int(math.Sqrt(float64(N))); i++ {
		q, r := N/i, N%i
		if r == 0 {
			val := (i - 1) + (q - 1)
			if val < minVal {
				minVal = val
			}
		}
	}
	fmt.Println(minVal)
}
