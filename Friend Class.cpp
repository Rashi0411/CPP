#include<iostream>
using namespace std;
class General{
	private:
		int num;
	public:
		General(int num){
		this->num=num;
	}
	int factorial(){
		int f=1,i;
		for(i=1;i<=num;i++)
		f=f*i;
	return f;
	}
	friend class MyMath;
};
class MyMath{
	public:
		static void cube(General x){
		int cb=x.num*x.num*x.num;
		cout <<"Cube of " << x.num << " is " << cb << endl;
	}
};
main(){
	General g(6);
	cout << g.factorial() << endl;
	MyMath::cube(g);
}
