#ifndef Customer_H
#define Customer_H
#include<iostream>
#include<string>
using namespace std;
class Customer										//customer class
{
private:
	string Firstname;								//data member
	string Lastname;
	string password;
public:
	//setter // getter
	void setFirstname(string Fna);				
	string getFirstname();
	void setLastname(string Lna);
	string getLastname();
};

void Customer::setFirstname(string Fna)							//Setter for customer first name
{
	Firstname = Fna;
}

string Customer::getFirstname()									//Getter for customer first name
{
	return Firstname;
}

void Customer::setLastname(string Lna)							//Setter for customer Last name
{
	Lastname = Lna;
}

string Customer::getLastname()									//Getter for customer Last name
{
	return Lastname;
}
#endif // !Customer
