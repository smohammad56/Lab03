#include<string>
#include"distance.h"
#include<stdio.h>
#include<iostream>

distance::distance() {
	feet = 0;
	inches = 0;
}

distance::distance(int f, double i) {
	feet = f;
	inches = i;

}

distance::distance(double m) {
	m *= 3.28084;
	inches = int (m) % 12;
	feet = floor(m / 12);

}

distance::distance(const distance& d) {
	feet = d.feet;
	inches = d.inches;

	feet += floor(inches / 12);
	inches = int(inches) % 12;
}


void distance::setfeet(int f) {
	feet = f;
}

void distance::setinches(double i) {
	feet += floor(i / 12);
	inches = int(i) % 12;

}

double distance::getmeters() {
	return ((feet *12) + inches) * 0.0254;
}


void distance::print_measurement() {
	std::cout << "Feet: " << feet << std::endl;
	std::cout << "Inches: " << inches << std::endl;
}

 distance distance::operator+(const distance &d) {
	 distance d1 = *this;
	 d1.inches += d.inches;
	 d1.feet += floor(inches / 12)+(d.feet);
	 d1.inches = int(inches) % 12;
	 return d1;
}

 distance distance::operator-(const distance& d) {
	 distance d1 = *this;
	 d1.inches -= d.inches;
	 d1.feet -= d.feet;

	 if (d1.feet < 0 && d1.inches >0) {
		 d1.feet++;
		 d1.inches -= 12;
	 }

	 if (d1.inches < 0 && d1.feet > 0) {
		 d1.feet--;
		 d1.inches += 12;
	 }
	 return d1;
 }

 distance distance::operator*(float s) {
	 distance d1 = *this;
	 d1.inches = this->inches * s;
	 d1.feet = this->feet * s;

	 d1.feet += floor(d1.inches / 12);
	 d1.inches = int(d1.inches) % 12;
	 return d1;
 }

 distance distance::operator/(float s) {
	 distance d1 = *this;
	 d1.inches = this->inches + (this->feet * 12);
	 d1.inches /= s;
	 d1.feet = 0;

	 d1.feet += floor(d1.inches / 12);
	 d1.inches = int(d1.inches) % 12;
	 return d1;
 }

 bool distance::operator==(const distance& d)
 {
	 return(inches == d.inches && feet == d.feet);
 }

  std::string distance::operator std::string()
 {
	 return "Feet: " + feet + ", Inches: " + inches;
 }
 




