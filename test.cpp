#include<iostream>
using namespace std;
class A1{
	public:
		virtual void hello()=0; // pure virtual method
};
class B1: public A1{
	public:
		virtual void hello(){
			cout <<"Hello Welcome" << endl;
		}
};
main(){
	A1 *p;
	p= new B1;	
	p->hello();
}
