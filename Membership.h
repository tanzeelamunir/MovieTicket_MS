#ifndef Membership_H
#define Membership_H
#include<iostream>
#include<string>
#include"Customer.h"
class Membership :public Customer								//class Membership inherited from Customer
{
private:
	long phonenumber;              //data memeber
public:
	Membership()
	{
		phonenumber = 0;
	}
	void setphonenumber(long num);             //Setter for  phone number
	long getphonenumber();						//Getter for  phone number
	void getmembership();						//member function
};

void Membership::setphonenumber(long num)		//Setter for  phone number
{
	phonenumber = num;
}

long Membership::getphonenumber()				//Getter for  phone number
{
	return phonenumber;
}

void Membership::getmembership()				//Display the name and phone number of customer
{
	cout << "Congrataltion Now You Are  Member" << endl;
	cout << "Your Name:           " << getFirstname() << " " << getLastname() << endl;
	cout << "Your Phone Number   " << getphonenumber() << endl;
	cout << "Your Membership number is: " << "101" << endl;
}


#endif // !Membership
