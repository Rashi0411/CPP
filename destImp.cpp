/*From the given code
main(){
	cout <<"welcome";
}
Print the following output:-
Dear Rashi, welcome to ABES Engineering College without changing anything inside the main()*/
#include<iostream>
using namespace std;
class A{
	public:
	A(){
		cout <<"Dear Rashi, ";
	}
	~A(){
		cout <<" to ABES Engineering College" << endl;
	}
};
A x;
main(){
	cout <<"welcome";
}
