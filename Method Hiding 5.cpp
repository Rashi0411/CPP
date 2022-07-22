#include<iostream>
using namespace std;
class A{
	public:
	void aboutus(){
		cout <<"This is A" << endl;
	}
};
class B: public A{
	public:
	void aboutus(){ //method hiding
		cout << "This is B" << endl;
	}
	void welcome(){
		cout <<"Welcome to B" << endl;
	}
};
class C: public B{
	public:
	void aboutus(){ //method hiding
		cout << "This is C" << endl;
	}
};
main(){
	A *p;
	p=new A();
	p->aboutus();
	p=new B();
	p->aboutus();
	p=new C();
	p->aboutus();
}
