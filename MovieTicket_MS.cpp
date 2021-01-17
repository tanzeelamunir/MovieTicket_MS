#include<iostream>
#include<string>
#include"Movie.h"
#include"Customer.h"
#include"Bookticket.h"
#include"Membership.h"
#include"MovieTiming.h"
#include<fstream>
using namespace std;
int main()
{
	Bookticket B;											//Bookticket object
	Membership Ms;											//Membership object
	string Fna, Lna;
	cout << "=======================================================" << endl;
	cout << "    WELCOME TO MOVIE TICKET MANAGEMENT SYSTEM          " << endl;
	cout << "=======================================================" << endl;
	cout << "Enter your First name" << endl;			//Customer first name 
	cin >> Fna;
	cout << "Enter your Last name" << endl;				//Customer last name
	cin >> Lna;
	system("pause");
	system("cls");
	Ms.setFirstname(Fna);							//set firstname of customer
	Ms.setLastname(Lna);							//set lastname of customer
	cout << "     WELCOME " << Ms.getFirstname() << " " << Ms.getLastname() << endl;
	cout << "=======================================================" << endl;
	cout << "   BOOK YOUR TICKET NOW AND ENJOY						  " << endl;
	cout << "=======================================================" << endl;
	int v = 0;
	cout << "1.	Check movies details " << endl;					//menu
	cout << "2.	Add/remove movie            " << endl;
	cout << "3.	Book your ticket     " << endl;
	cout << "4.	Check available seats" << endl;
	cout << "5.	Check movie timing   " << endl;
	cout << "6.	View price of tickets" << endl;
	cout << "7.	Find movie           " << endl;
	cout << "8.	Get Membership       " << endl;
	cout << "9.      Exit            " << endl;
	cin >> v;
	while (!(v>10))
	{
		if (v == 1)
		{
			vector<string> result = B.details("Moviesdetails.txt");     //Text document name 
			for (string s : result)
			{
				cout << s << endl;
			}
			system("pause");
			system("cls");
			int m;
			cout << "Enter 1 back to menu" << endl;
			cout << "Enter 0 for Exit" << endl;
			cin >> m;
			if (m == 1)
			{
				cout << "1.	Check movies details " << endl;							//menu
				cout << "2.	Add/remove movie           " << endl;
				cout << "3.	Book your ticket    " << endl;
				cout << "4.	Check available seats" << endl;
				cout << "5.	Check movie timing" << endl;
				cout << "7.	Find movie           " << endl;
				cout << "8.	Get Membership       " << endl;
				cout << "9.      Exit            " << endl;
				cin >> v;
			}
			if (m == 0)
			{
				exit(0);
			}
		}
		if (v == 2)									//if add or remove name then admin enter name and password
		{
			string ad;
			string pass;
			cout << "Enter admin name" << endl;									//Enter Admin Name
			cin >> ad;
			while (!(ad == "admin"))
			{
				cout << "INCORRECT! " << endl;
				cout << "Enter admin name" << endl;									//Enter Admin Name
				cin >> ad;
			}
			cout << "Enter admin  password " << endl;							//Enter admin  password
			cin >> pass;
			while (!(pass == "admin"))
			{
				cout << "INCORRECT! " << endl;
				cout << "Enter admin password" << endl;									//Enter Admin Name
				cin >> pass;
			}
			int choice;
			cout << "Enter your choice" << endl;
			cout << "1.Add movie" << endl;										//Add movie	
			cout << "2.Remove movie" << endl;									//Remove movie
			cin >> choice;
			string title, dir, time, gen, dim, date, act;
			cout << "Enter Movie Name" << endl;
			cin >> title;
			cin.get();
			cout << "Enter Director Name" << endl;
			cin >> dir;
			cout << "Enter  Run Time" << endl;
			cin >> time;
			cout << "Enter Genre " << endl;
			cin >> gen;
			cout << "Enter Dimension" << endl;
			cin >> dim;
			cout << "Enter Releasing Date" << endl;
			cin >> date;
			cout << "Enter Actors" << endl;
			cin >> act;
			B.setmovietitle(title);
			B.setdirector(dir),
				B.setruntime(time);
			B.setgenre(gen);
			B.setdimension(dim);
			B.setreleasingdate(date);
			B.setactors(act);
			if (choice == 1)
			{
				B.addmovie();

			}
			if (choice == 2)
			{
				B.removemovie();
			}
			int m;
			cout << "Enter 1 back to menu" << endl;
			cout << "Enter 0 for Exit" << endl;
			cin >> m;
			if (m == 1)
			{
				cout << "1.	Check movies details " << endl;					//menu
				cout << "2.	Add movie/remove           " << endl;
				cout << "3.	Book your ticket    " << endl;
				cout << "4.	Check available seats" << endl;
				cout << "5.	Check movie timing" << endl;
				cout << "7.	Find movie           " << endl;
				cout << "8.	Get Membership       " << endl;
				cout << "9.      Exit               " << endl;
				cin >> v;
			}
			if (m == 0)
			{
				exit(0);
			}
		}
		if (v == 3)									//Book the customer tickect
		{
			B.display();
			B.print();
			cout << Ms.getFirstname() << " " << Ms.getLastname() << "  your ticket is book successfully" << endl;
			int m;
			cout << "Enter 1 back to menu" << endl;
			cout << "Enter 0 for Exit" << endl;
			cin >> m;
			if (m == 1)
			{
				cout << "1.	Check movies details " << endl;
				cout << "2.	Add/remove movie           " << endl;
				cout << "3.	Book your ticket    " << endl;
				cout << "4.	Check available seats" << endl;
				cout << "5.	Check movie timing" << endl;
				cout << "6.	View price of tickets" << endl;
				cout << "7.	Find movie           " << endl;
				cout << "8.	Get Membership  " << endl;
				cout << "9.      Exit            " << endl;

				cin >> v;
			}
			if (m == 0)
			{
				exit(0);
			}
		}
		if (v == 4)
		{
			B.seats();
			int m;
			cout << "Enter 1 back to menu" << endl;
			cout << "Enter 0 for Exit" << endl;
			cin >> m;
			if (m == 1)
			{
				cout << "1.	Check movies details " << endl;						//menu
				cout << "2.	Add/remove movie           " << endl;
				cout << "3.	Book your ticket    " << endl;
				cout << "4.	Check available seats" << endl;
				cout << "5.	Check movie timing" << endl;
				cout << "6.	View price of tickets" << endl;
				cout << "7.	Find movie           " << endl;
				cout << "8.	Get Membership	" << endl;
				cout << "9.      Exit            " << endl;
				cin >> v;
			}
			if (m == 0)
			{
				exit(0);
			}
		}
		if (v == 5)
		{
			vector<string> value = B.schedule("Moviestiming.txt");		//txt decuments show the Movie timing
			for (string st : value)
			{
				cout << st << endl;
			}
			int m;
			cout << "Enter 1 back to menu" << endl;
			cout << "Enter 0 for Exit" << endl;
			cin >> m;
			if (m == 1)
			{
				cout << "1.	Check movies details " << endl;						//menu
				cout << "2.	Add/remove movie           " << endl;
				cout << "3.	Book your ticket    " << endl;
				cout << "4.	Check available seats" << endl;
				cout << "5.	Check movie timing" << endl;
				cout << "6.	View price of tickets" << endl;
				cout << "7.	Find movie           " << endl;
				cout << "8.	Get Membership	" << endl;
				cout << "9.      Exit            " << endl;
				cin >> v;
			}
			if (m == 0)
			{
				exit(0);
			}
		}
		if (v == 6)
		{
			B.print();
			int m;
			cout << "Enter 1 back to menu" << endl;
			cout << "Enter 0 for Exit" << endl;
			cin >> m;
			if (m == 1)
			{
				cout << "1.	Check movies details " << endl;							//menu
				cout << "2.	Add/remove movie           " << endl;
				cout << "3.	Book your ticket    " << endl;
				cout << "4.	Check available seats" << endl;
				cout << "5.	Check movie timing" << endl;
				cout << "6.	View price of tickets" << endl;
				cout << "7.	Find movie           " << endl;
				cout << "8.	Get Membership  " << endl;
				cout << "9.      Exit            " << endl;
				cin >> v;
			}
			if (m == 0)
			{
				exit(0);
			}
		}
		if (v == 7)									//find the movie by genre and year
		{
			B.findmovie();
			int m;
			cout << "Enter 1 back to menu" << endl;
			cout << "Enter 0 for Exit" << endl;
			cin >> m;
			if (m == 1)
			{
				cout << "1.	Check movies details " << endl;
				cout << "2.	Add/remove movie           " << endl;
				cout << "3.	Book your ticket    " << endl;
				cout << "4.	Check available seats" << endl;
				cout << "5.	Check movie timing" << endl;
				cout << "6.	View price of tickets" << endl;
				cout << "7.	Find movie           " << endl;
				cout << "8.	Get Membership" << endl;
				cout << "9.      Exit            " << endl;
				cin >> v;
			}
			if (m == 0)
			{
				exit(0);
			}
		}
		if (v == 8)								//membership 
		{
			string Fna, Lna;
			cout << "Membership Benfits" << endl;
			cout << "1. Discount on Dirnks and Popcorns" << endl;
			cout << "2. Discount  on Tickets" << endl;
			cout << "3. Free 3D Glasses" << endl;
			long num;
			cout << "Enter your First name" << endl;
			cin >> Fna;
			cout << "Enter your Last name" << endl;
			cin >> Lna;
			cout << "Enter Phone number" << endl;
			cin >> num;
			while (!(num > 0))
			{
				cout << "Enter phonenumber" << endl;
				cin >> num;
			}
			char ch;
			cout << "Do you have any old  Membership if Yes enter y otherwise enter n for NO" << endl;
			cin >> ch;
			if (ch == 'y' || ch == 'Y')
			{
				int m_num;
				cout << "Enter Your MemberShip Number" << endl;
				cin >> m_num;
				while (!(m_num > 0))
				{
					cout << "Invalid! Membership number" << endl;
					cin >> m_num;
				}
				B.benefit();
			}
			if (ch == 'n' || ch == 'N')
			{
				Ms.setFirstname(Fna);
				Ms.setLastname(Lna);
				Ms.setphonenumber(num);
				Ms.getmembership();
				B.benefit();
			}
			int m;
			cout << "Enter 1 back to menu" << endl;
			cout << "Enter 0 for Exit" << endl;
			cin >> m;
			if (m == 1)
			{
				cout << "1.	Check movies details " << endl;
				cout << "2.	Add/remove movie           " << endl;
				cout << "3.	Book your ticket    " << endl;
				cout << "4.	Check available seats" << endl;
				cout << "5.	Check movie timing" << endl;
				cout << "6.	View price of tickets" << endl;
				cout << "7.	Find movie           " << endl;
				cout << "8.	Get Membership" << endl;
				cout << "9.      Exit            " << endl;
				cin >> v;
			}
			if (m == 0)
			{
				exit(0);
			}
		}
		if (v == 9)
		{
			exit(0);
		}
	}
	
}
				


