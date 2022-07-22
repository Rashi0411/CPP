//Example 2 : Blank Constructor
#include<iostream>
using namespace std;
class Num2{
	private:
	int a,b;
	public:
	Num2(){ //blank constuctor
	}
	Num2(int a, int b){ //parameterized constructor
		this->a=a;
		this->b=b;
	}
	void setA(int a){
		this->a=a;
	}
	void setB(int b){
		this->b=b;
	}
	int product(){
		return a*b;
	}
};
main(){
	Num2 x; //blank constructor
	Num2 *y=new Num2(); //blank constructor
	Num2 z(3,4); // parameterized constuctor
	x.setA(5);
	x.setB(9);
	y->setA(12);
	y->setB(15);
	cout << x.product() << ", "<<y->product() << ", " << z.product();
}
