#ifndef Bookticket_H
#define Bookticket_H
#include<iostream>
#include<string>
#include"Movie.h"
class Bookticket : public Movie							//class bookticket inherited from class movie
{
private:
	int noOfseats;
	int bookingcharges;
	int totalprice;
	int availableseats;
public:
	Bookticket()								//default constructor
	{
		noOfseats = 0;
		bookingcharges = 0;
		totalprice = 0;
		availableseats = 0;
	}
	//getter // setter
	void setnoOfseats(int seats);
	int  getnoOfseats();
	void setbookingcharges(int charges);
	int getbookingcharges();
	void settotalprice(int price);
	int gettotalprice();
	void setavailbleseats(int as);
	int  getavailableseats();
	//member function
	void print();
	void seats();
	void benefit();
};

void Bookticket::setnoOfseats(int seats)						//Setter for No of seats
{
	noOfseats = seats;
}

int Bookticket::getnoOfseats()									//Getter for No of seats
{
	return noOfseats;
}

void Bookticket::setbookingcharges(int charges)					//Setter for Booking Charges
{
	bookingcharges = charges;
}

int Bookticket::getbookingcharges()								//Getter for Booking Charges
{
	return bookingcharges;
}

void Bookticket::settotalprice(int price)						//Setter for Total Price
{
	totalprice = price;
}

int Bookticket::gettotalprice()									//Getter for Total Price
{
	return totalprice;
}

void Bookticket::setavailbleseats(int as)						//Setter for Available seats
{
	availableseats = as;
}

int Bookticket::getavailableseats()								//Getter for Available seats
{
	return availableseats;
}

void Bookticket::print()										//Display seats and amount 
{
	int seats;
	cout << "How many seats/Tickets you want to book" << endl;
	cin >> seats;
	setnoOfseats(30);
	cout << "The Extra charges For Booking the seat is: " << getnoOfseats() << "PKR" << endl;
	setbookingcharges(seats * 30);
	if (seats >= 2)
	{
		cout << "Extra charges for " << seats << " Tickets is " << getbookingcharges() << "PKR " << endl;
	}
	cout << "Price For 1 Ticket is:   750PKR" << endl;
	settotalprice(getbookingcharges() + (750 * seats));
	cout << "Total Amount for  " << seats << " is: " << gettotalprice() << "PKR " << endl;
}

void Bookticket::seats()											//Available seats and show the customer seats
{
	int seats;
	cout << "Total Seats   300 " << endl;
	cout << "How many seats/Tickets you want to book" << endl;
	cin >> seats;
	cout << "You Book " << seats << "  seats ." << endl;
	cout << "Now avalible seats is   ";
	setavailbleseats(300 - seats);
	cout << getavailableseats() << endl;
}
inline void Bookticket::benefit()							//if customer has membership card then customer get benefit
{
	int be;
	cout << "Enter Your Choice" << endl;
	cout << "1. Discount on Dirnks and Popcorns" << endl;
	cout << "2. Discount  on Tickets" << endl;
	cout << "3. Free 3D Glasses" << endl;
	cin >> be;
	if (be == 1)
	{
		cout << "Congratulations! " << endl;
		cout << "You Get Discount on Dirnks and Popcorns" << endl;
	}
	if (be == 2)
	{
		cout << "Congratulations! " << endl;
		cout << "You Get Discount  on Tickets" << endl;
	}
	if (be == 3)
	{
		cout << "Congratulations! " << endl;
		cout << "You Get Free 3D Glasses" << endl;
	}
	
}
#endif // !Bookticket
