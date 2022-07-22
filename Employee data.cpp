#include<iostream>
#include<string.h>
using namespace std;
class Common{
	private:
		char name[51], email[51],mobile[11];
	public:
		Common(char *name, char *email, char *mobile){
		strcpy(this->name,name);
		strcpy(this->email,email);
		strcpy(this->mobile,mobile);
	}
	void setName(char *name){
		strcpy(this->name,name);
	}
	char *getName(){
		return name;
	}
	char *getEmail(){
		return email;
	}
	char *getMobile(){
		return mobile;
	}
};
class Employee: public Common{
	private:
		int empid;
		char dept[51],desig[51];
	public:
		Employee(int empid, char *name, char *email, char *mobile, char *dept, char*desig):Common(name,email,mobile){
		this->empid=empid;
		strcpy(this->dept,dept);
		strcpy(this->desig,desig);
	}
	int getEmpid(){
		return empid;
	}
	char *getDept(){
		return dept;
	}
	char *getDesig(){
		return desig;
	}
};
main(){
	Employee e(123,"Rohit Kumar","rohit@gmail.com","1122334455","Sales","Manager");
	cout << e.getEmpid() <<"," << e.getName() <<","<< e.getDesig();
}
