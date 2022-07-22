#include<iostream>
#include<iomanip>
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
		cout<< setprecision(2)<< setiosflags(ios::fixed) << "Product of " <<a<<" and "<<b<<" is "<<a*b<<endl;
	}
};
main(){
	General<double,double> x(12.4,6.5);
	x.product();
	
	General<double,float> y(2.5,5.4F);
	y.product();
}
