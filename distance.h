#pragma once
#include<iostream>
#include<string>
#include<stdio.h>

class distance {
public:
	distance();
	distance(int f, double i);
	distance(double m);

	int getfeet() { return feet; }
	double getinches() { return inches; }

	void setfeet(int f);
	void setinches(double i);

	void print_measurement();

	distance operator+(const distance &d);
	distance operator-(const distance &d);
	distance operator*(const distance &d);
	distance operator/(const distance &d);
	distance (const distance& d);

private:
	int feet;
	double inches;

};