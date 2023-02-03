#include<string>
#include"distance.h"
#include<stdio.h>
#include<iostream>

int main() {

	distance d1(6,4);
	distance d2(7, 8);
	distance d3(8,2);
	distance d4(5, 8);

	d1.print_measurement();
	d4.print_measurement();

	d1 = d4*d1;
	d1.print_measurement();

}