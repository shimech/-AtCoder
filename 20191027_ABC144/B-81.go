package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func main() {
	sc.Scan()
	N, _ := strconv.Atoi(sc.Text())
	var isYes = false
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
