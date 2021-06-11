// DA


#include <iostream>


using namespace std;


struct Triangle
{
	double length;
	double height;

};

double area(double length, double height)

{
	return 0.5 * (length * height);

}
double pow(double base, double pow)
{
	int total = 1;
	for (int i = 0; i < pow; i++)
	{
		total *=base;

	}
	return total;
}
int main()
{

	cout << pow(3,3) << endl;

	/*
	Triangle triangle;
	triangle.length = 5;
	triangle.height = 10;
	cout << area(triangle.length, triangle.height);
	*/

	return 0;

}