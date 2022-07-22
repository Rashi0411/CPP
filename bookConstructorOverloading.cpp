/*
Create a class Book having data members as bookno, title, author and price.
Create a constuctor to intialize data of book, setter for title, author and price, getter for all data members.
Create a method discount() to return the discount on a book based on conditions
	30% for price >= 2000
	20% for price >= 1000
	10% for others
*/
#include <string.h>
#include <iostream>
using namespace std;
class Book{
	private:
	int bookno;
	char title[51],author[51];
	float price;
	public:
//constructor overloading
	Book(int bookno, char *title, char *author, float price){
		this->bookno=bookno;
		strcpy(this->title,title);
		strcpy(this->author,author);
		this->price=price;
	}
	Book(int bookno, char *title, char *author){
		this->bookno=bookno;
		strcpy(this->title,title);
		strcpy(this->author,author);
		this->price=0;
	}
	Book(int bookno, char *title){
		this->bookno=bookno;
		strcpy(this->title,title);
		strcpy(this->author,"");
		this->price=0;
	}
	void setTitle(char *title){
		strcpy(this->title,title);
	}
	void setAuthor(char *author){
		strcpy(this->author,author);
	}
	void setPrice(float price){
		this->price=price;
	}
	int getBookNo(){
		return bookno;
	}
	char *getTitle(){
		return title;
	}
	char *getAuthor(){
		return author;
	}
	float getPrice(){
		return price;
	}
	float discount(){
		float d;
		if(price>=3000)
			d=price*0.3F;
		else if(price>=1000)
			d=price*0.2F;
		else
			d=price*0.1F;
		return d;
	}
};
main(){
	Book b1(123,"C Programming","Dr B P Sharma",450); //static instance creation
	Book *b2=new Book(125,"Java Programming"); //dynammic instance creation
	b2->setAuthor("Rashi");
	b2->setPrice(600);
	cout <<b1.getBookNo() <<"," << b1.getTitle() << "," << b1.getAuthor() <<"," << b1.getPrice() << "," << b1.discount() << endl;
	cout <<b2->getBookNo() <<"," << b2->getTitle() <<"," << b2->getAuthor() <<"," << b2->getPrice() << "," << b2->discount() << endl;
}
