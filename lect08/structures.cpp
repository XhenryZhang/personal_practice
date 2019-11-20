#include <iostream>
using namespace std;

struct Point{
	double x;
	double y;
};

struct Box{
	Point ul;
	double width;
	double height;
};

---------
ul.x = 10; // incorrrect
Box b1 = {{400, 400}, 400, 409}; // correct!
---------

void printPoint(Point p) {
	cout << p.x << " " << p.y << endl; 

}

void printPoint(Point &p) {
	// pass in ref. to p1
}

void printPoint (const Point &p) {
	// pass in ref. to p1, doesn't create new variable, but also cannot modify original p1.
}

void printPoint(Point *q){
	cout << "Pass by address." << endl;
	cout << (*q).x << endl; // prints dereference of q.x
	cout << q -> x << endl; // the arrow is shorthand for *. used more often
	// but why would you pass via address?
}

void setPoint(Point *q, double xx, double yy){
	cout << "Pass by address." << endl;
	q -> x = xx; // changes p1.x to xx, etc.
	q -> y = yy; // using parameter names x and y is also appropriate, prog. differentiates between local variable and parameter names
}

int main() {
	Point p1 = {10, 20}; // declaration
	printPoint(p1); // in this case, passing p1 as the value is appropriate
			// for efficiency purposes, can pass in a ref. to p1
			// but now, user can change the data in parameter p1
			// use a CONST reference!
	
	Point *z = &p1; // z points to address of p1, which is really the same as address of p1.x (first variable in struct)
	printPoint(z); // pass in a pointer to a struct

	
	return 0;

}
