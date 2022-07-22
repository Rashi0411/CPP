#include<iostream>
using namespace std;
//function overloading
void area(double radius);
void area(int length, int width);
void area(int side);
main(){
	area(5.0),area(3,4),area(4);
}
void area(double radius){
	cout << "Area of circle is " <<3.14*radius*radius << endl;
}
void area(int length, int width){
	cout << "Area of rectangle is " <<length*width << endl;
}
void area(int side){
	cout << "Area of square is " <<side*side << endl;
}
