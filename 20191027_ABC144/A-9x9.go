package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func main() {
	sc.Split(bufio.ScanWords)
	sc.Scan()
	A, _ := strconv.Atoi(sc.Text())
	sc.Scan()
	B, _ := strconv.Atoi(sc.Text())
	if (A >= 1 && A <= 9) && (B >= 1 && B <= 9) {
		fmt.Println(A * B)
	} else {
		fmt.Println(-1)
	}
}
