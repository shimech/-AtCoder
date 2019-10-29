package main

import (
	"fmt"
)

func main() {
	var N int
	fmt.Scan(&N)
	var isYes bool = false
	for i := 1; i <= 9; i++ {
		q, r := N/i, N%i
		if (q >= 1 && q <= 9) && r == 0 {
			isYes = true
			break
		}
	}
	if isYes {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
