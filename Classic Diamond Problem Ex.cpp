#include<iostream>
using namespace std;
class A{
	public:
		void show(){
		cout <<"Welcome to A" << endl;
	}
};

class B: virtual public A{ //virtual base class
};

class C: virtual public A{ //virtual base class
};

class D: public B, public C{
};

main(){
	D x;
	x.show();
}
