#include<string.h>
#include<iostream>
using namespace std;
class Customer{
	private:
		int cid;
		char name[51];
		double balance;
	public:
		Customer(int cid, char *name, double openingamount){
		if(openingamount<500) throw "Sorry! Opening amount must be >=500";
		this->cid=cid;
		strcpy(this->name,name);
		balance=openingamount;
	}
	void setName(char *name){
		if(strlen(name)==0) throw 0;
		strcpy(this->name,name);
	}
	int getCid(){
		return cid;
	}
	char *getName(){
		return name;
	}
	double getBalance(){
		return balance;
	}
	void deposit(double amount){
		if(amount<0) throw "Sorry! Invalid amount to deposit";
		balance+=amount;
	}
	void withdraw(double amount){
		if(amount>balance) throw "Sorry! Insufficeient Balance";
		balance-=amount;
	}
};

main(){
	try{
		Customer c(123,"Rohit Kumar",7000);
		cout << c.getCid() <<"," << c.getName() <<"," << c.getBalance() << endl;
		c.deposit(5000);
		cout << c.getCid() <<"," << c.getName() <<"," << c.getBalance() << endl;
		c.withdraw(1500);
		cout << c.getCid() <<"," << c.getName() <<"," << c.getBalance() << endl;
		c.setName("");
	}
	catch(char const *message){
		cerr << "Error : " << message;
	}
	catch(...){ //ellipses
		cerr << "OOPs! Something wrong happend";
	}
}
