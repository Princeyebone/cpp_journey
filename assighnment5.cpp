#include <iostream>
using namespace std;

class Shape
{
protected:
	double length;
	double width;
public:
	void shape(double lth, double wth)
	{
		length = lth;
		width = wth;
	}
	// virtual function  to calculate Area (to be overridden by a derived class)
	virtual  double area()
	{
		return 0.0;
	}
	//virtual function to display calculated area
	virtual void display()
	{
		cout << "Area = " << area() << endl;
	}
};

class rectangle : public Shape
{
	double length;
	double width;

public:
	rectangle(double leth, double with)
	{
		length = leth;
		width = with;
	}

	double area()
	{
		length* width;
		return length * width;
	}

	void display()
	{
		cout << "area = " << area() << endl;
	}
};

class circle : public Shape
{
private:
	double radius;

public:
	circle(double  rad)
	{
		radius = rad;
	}
	double area()
	{
		3.14 * radius * radius;
		return 3.14 * radius * radius;
	}
	void display()
	{
		cout << "area = " << area() << endl;
	}
};

class trapezoidal : public Shape
{
private:
	double length1;
	double length2;
	double height;


public:
	trapezoidal(double ht, double l1, double l2)
	{
		height = ht;
		length2 = l1;
		length1 = l2;

	}

	double area()
	{
		0.5 * (length1 + length2) * height;
		return 0.5 * (length1 + length2) * height;
	}

	void display()
	{
		cout << "area = " << area() << endl;
	}
};

int main()
{
	Shape* shapePtr[3];  // Array of pointers to the base class

	// Creating instances of derived classes
	rectangle Rectangle(5.0, 3.0);
	shapePtr[0] = &Rectangle;

	circle Circle(2.0);
	shapePtr[1] = &Circle;

	trapezoidal Trapezoidal(3.0, 6.0, 4.0);
	shapePtr[2] = &Trapezoidal;

	// Loop to display the areas of different shapes
	for (int i = 0; i < 3; ++i) {
		std::cout << "Shape " << i + 1 << " - ";
		shapePtr[i]->display();
	}

	return 0;





}