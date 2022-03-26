#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using std::cout;
using std::endl;
using std::vector;
using std::string;

//abstract base class
class Shape
{
	string name;
	public:
	Shape(string _n) { name = _n; }

	void setName(string _n) { name = _n; }
	string getName() const { return name; }
	virtual double getArea() const = 0; //pure virtual function
};

//child class
class Circle : public Shape
{
	double radius;

	public:
		Circle(string _n, double _r) : Shape(_n) { radius = _r; }
	void setRadius(double _r) { radius = _r; }
	double getRadius() const { return radius; }
	double getArea()const { return radius * radius * 3.14159; }
};

class Rectangle : public Shape
{
	double length, width;

	public:
	Rectangle(string _n, double _l, double _w) : Shape(_n) { length = _l; width = _w; }
	void setLength(double _l) { length = _l; }
	void setWidth(double _w) { width = _w; }
	double getLength() const { return length; }
	double getWidth() const { return width; }
	double getArea() const { return length * width; }
};

class Solid : public Rectangle
{
	double depth;

	public :
		Solid(string _n, double _l, double _w, double _d) : Rectangle(_n, _l, _w) { depth = _d; }
		double getArea()const { return getLength() * getWidth() * depth; }
};

int main()
{
	vector<Shape*> shapes{ new Circle("Circle", 2.1), new Rectangle("Rectangle", 2,4), new Solid("Solid", 3, 2, 4)};
	
	for (auto* s : shapes)
	{
		cout << s->getName() << ", " << s->getArea() << endl;
	}

	for (auto*s : shapes)
	{
		delete s;
	}

	//Shape s("Shape");
	//cout << s.getName() << endl;

	/*Circle c("Circle", 2.1);
	cout << c.getName() << ", " << c.getRadius() <<", " << c.getArea() << endl;

	Rectangle r("Rectangle", 4, 2);
	cout << r.getName() << ", " << r.getLength() << ", " << r.getWidth() << ", " << r.getArea() << endl;

	Solid s("Solid", 3, 2, 4);
	cout << s.getName()<<", " << s.getArea() << endl;
	*/
}
