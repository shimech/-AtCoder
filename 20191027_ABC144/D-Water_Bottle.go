package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func main() {
	sc.Split(bufio.ScanWords)
	sc.Scan()
	a, _ := strconv.ParseFloat(sc.Text(), 64)
	sc.Scan()
	b, _ := strconv.ParseFloat(sc.Text(), 64)
	sc.Scan()
	x, _ := strconv.ParseFloat(sc.Text(), 64)
	var theta float64
	if x <= a*a*b/2 {
		surface := x / a
		base := 2.0 * surface / b
		theta = math.Atan(b/base) * 180 / math.Pi
	} else {
		surface := (a*a*b - x) / a
		base := 2.0 * surface / a
		theta = math.Atan(base/a) * 180 / math.Pi
	}
	fmt.Println(theta)
}
