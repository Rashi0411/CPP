/*Create a namespace first having a class Demo with a method hello() which shows a message
“Hello to First Namespace”
Create another namespace second again having a class Demo with a method hi() which show a
message “Hi Everyone”
Create the instances of Demo classes from both the namespaces and call their methods.*/
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
main(){
	first::Demo::hello();
	second::Demo x;
	x.hi();
}
/*NULL Character \0 -- ASCII value 0
NULL means no address
int *ptr=NULL;

NUL --> Special device managed by the Windows Operating System which works as black hole. If pass any data to it, that
 data is not display anywhere. We cannot create any file or folder with the  name of NUL.*/

