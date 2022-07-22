#include<iostream>
using namespace std;
template<class T1, class T2>
void product(T1 a,T2 b){
	cout <<"Product of " << a <<" and "<< b<< "is "<< a*b<< endl;
}
main(){
	product(4,5);
	product(4.6,3.2);
	product(7,4.11);
	product('A','B');
}
