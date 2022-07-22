#include<iostream>
using namespace std;
// method overloading
class General{
	public:
		static void area(int side);
		static void area(int length, int width);
		static void area(double radius);
};
main(){
	General::area(5);General::area(6,7); General::area(5.0);
}
void General::area(int side){
	cout << "Area of square is " << side*side << endl;
}
void General::area(int length, int width){
	cout <<"Area of rectangle is " << length * width << endl;
}
void General::area(double radius){
	cout <<"Area of circle is " << 3.14*radius*radius << endl;
}



