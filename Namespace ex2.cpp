#include<iostream>
using namespace std;
namespace first{
	class Demo{
		public:
			static void hello(){
				cout<<"Welcome to namespace first"<<endl;
			}
	};
}
namespace second{
	class Demo{
		public:
			void hi(){
				cout<<"Hii! Everyone"<<endl;
			}
	};
} 
using namespace first;
main(){
	Demo::hello();
	second::Demo x;
	x.hi();
}
