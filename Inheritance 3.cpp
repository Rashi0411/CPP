#include<iostream>
using namespace std;
class Num2{
	private:
		int a,b;
	public:
		Num2(int a,int b){
			this->a=a;
			this->b=b;
		}	
		int p2(){
			return a*b;
		}
};
class Num3: public Num2{
	private:
		int c;
	public:
		Num3(int a, int b,int c): Num2(a,b){
			this->c=c;
		}
		int p3(){
			return p2()*c;
		}	
};
main(){
	Num3 v(3,5,2);
	cout<<v.p3();
}
