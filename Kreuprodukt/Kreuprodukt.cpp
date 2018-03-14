// Kreuprodukt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>


int main()
{
	//Vector/Array A
	int a[3];
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;

	//Vector/Array B
	int b[3];
	a[0] = 3;
	a[1] = 2;
	a[2] = 1;

	//Vector/Array C
	int c[3];

	//AXB
	for (int i = 0; i < 3; i++) {
		c[i] = a[(i + 1) % 3] * b[(i + 2) % 3] - a[(i + 2) % 3] * b[(i + 1) % 3];
	}
	std::cout << c << std::endl;

    return 0;
}


