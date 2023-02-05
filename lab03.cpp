#include<string>
#include"distance.h"
#include<stdio.h>
#include<iostream>

int main() {

	distance d1(6,4);
	distance d2(7, 8);
	distance d3(8,2);
	distance d4(5, 8);

	//d1.print_measurement();
	d4.print_measurement();
	std::cout << std::string(d4);
	//std::cout << d4.getmeters();
	//d1.print_measurement();

}