#include<iostream>
using namespace std;
template<class T1,class T2>
class General{
	private:
		T1 a;
		T2 b;
	public:
	General(T1 a,T2 b){
		this->a=a;
		this->b=b;
	}	
	void product(){
		cout<< "Product of " <<a<<" and "<<b<<" is "<<a*b<<endl;
	}
};
main(){
	General<int,double> x(12,6.5);
	x.product();
	
	General<double,long> y(2.5,5L);
	y.product();
}
