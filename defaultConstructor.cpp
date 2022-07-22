/*Example 1 : Default Constructor
Class a class Num2 having two data members as a and b.
Create the setter to update the data and getters to return the data.
Create the method product() to return product of a and b.*/
#include<iostream>
using namespace std;
class Num2{
	private:
	int a,b;
	public:
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
	Num2 x; //default constructor
	Num2 *y=new Num2(); //default constructor
	x.setA(5);
	x.setB(9);
	y->setA(12);
	y->setB(15);
	cout << x.product() << ", "<<y->product();
}

