package main

import "fmt"

func main() {
	var a [5]*int
	var b [5]int
	for i:=0;i<5;i++ {
		a[i] = &b[i]
		*a[i] = i
	}
	
	for i:=0;i<5;i++ {
		*a[i]+=5
	}
	// printf("%d\n",*a[0]*(*a[1])*(*a[2]))
	for i:=0;i<5;i++{
		printf("i=%d, b[i]=%d\n",i,b[i])
	}



}
