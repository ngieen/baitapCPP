#include <iostream>
#include <cmath>
using namespace std;

int find_area(int side_length);
double find_area(double length, double width);

void area_calc() {
    
	int side_length = 2;
	int square_area = find_area(side_length);
	double length = 4.5, width = 2.3;
	double rectangle_area = find_area(length, width);
    
    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}

int find_area(int side_length) {
	return pow(side_length,2);
}

double find_area(double length, double width) {
	return length*width;
}

int main()
{
	area_calc();
	return 0;
}
