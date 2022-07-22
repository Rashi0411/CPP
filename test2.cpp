#include<iostream>
using namespace std;
class B1{
	public:
		void hello(){
			cout << "Hello Welcome" << endl;
		}
}b1;

class a1:B1{ //class a1 imports class B1
	public:
		void h(){
			hello(); //use function from class B1
		}
}A1;

int main(){
	A1.h();
	return 0;
}
