#include<iostream>
using namespace std;
class Hr{
	public:
		virtual void salaryInfo()=0;
};
class Sales{
	public:
		virtual void forecasting()=0;
};
class Production{
	public:
		virtual void scheduling()=0;
};
class ERP: public Hr, public Sales, public Production{
	public:
		void salaryInfo(){
		cout <<"Salary will be given on 7th of every month" << endl;
	}
	void forecasting(){
		cout <<"Sales will be doubled this year" << endl;
	}
	void scheduling(){
		cout << "The production will be in three shift" << endl;
	}
};

main(){
	Hr *h=new ERP();
	h->salaryInfo();
	Production *p=new ERP();
	p->scheduling();
}
