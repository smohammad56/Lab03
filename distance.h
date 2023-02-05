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
	double getmeters();

	void setfeet(int f);
	void setinches(double i);

	void print_measurement();

	distance operator+(const distance &d);
	distance operator-(const distance &d);
	distance operator*(float s);
	distance operator/(float s);
	bool operator==(const distance& d);
	std::string operator std::string();
	distance (const distance& d);

private:
	int feet;
	double inches;

};