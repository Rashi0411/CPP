#include<iostream>
using namespace std;
class A{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
	A(){
		a=1;
		b=2;
		c=3;
	}
	A(int a, int b, int c){
		this->a=a;
		this->b=b;
		this->c=c;
	}
};
class B: public A{
	public:
	void show(){
		cout << "b is " << b <<" and c is " << c << endl;
	}
};
main(){
	B x;
	x.show();
}
