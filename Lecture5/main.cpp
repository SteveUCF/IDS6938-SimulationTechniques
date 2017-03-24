//Eulers Method to solve a differential equation
#define _USE_MATH_DEFINES

#include <cmath>


#include<iostream>
#include<math.h>




double df(double x, double y)            //function for defining dy/dx
{
	double a = (y*log(y)) / x;
	return a;
}


int main()
{

	double y = M_E;
	double x = 2.0;

	std::cout << " function name" << df(x, y)<< std::endl;


	return 0;
}

int main()
{

	double y = 2.85;
	double x = 2.1;

	std::cout << " function name" << df(x, y) << std::endl;


	return 0;
}