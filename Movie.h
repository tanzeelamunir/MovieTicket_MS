#ifndef Movie_H
#define Movie_H
#include<iostream>
#include<string>
#include"MovieTiming.h"
#include<fstream>
#include<vector>
using namespace std;
class Movie :public Movietiming               //class Movie inherited from class Movie
{
private:
	//data members
	string movietitle;
	string director;
	string runtime;
	string genre;
	string dimension;
	string releasingdate;
	string actors;
public:
	//Setter // Getters
	void setmovietitle(string title);
	string getmovietitle();
	void setdirector(string dir);
	string getdirector();
	void setruntime(string time);
	string getruntime();
	void setgenre(string gen);
	string getgenre();
	void setdimension(string dim);
	string getdimension();
	void setreleasingdate(string date);
	string getreleasingdate();
	void setactors(string act);
	string getactors();
	//member function
	void display();
	void addmovie();
	void removemovie();
	void findmovie();
	vector<string> details(string fileName);
	
};

void Movie::setmovietitle(string title)						//Setter for Movie Title
{
	movietitle = title;
}

string Movie::getmovietitle()								//Getter for Movie Title
{
	return movietitle;
}

void Movie::setdirector(string dir)							//Setter for Movie Director
{
	director = dir;
}

string Movie::getdirector()									//Getter for Movie Director
{
	return director;
}

void Movie::setruntime(string time)							//Setter for Movie Run Time
{
	runtime = time;
}

string Movie::getruntime()									//Getter for Movie Run Time
{
	return runtime;
}

void Movie::setgenre(string gen)							//Setter for Movie Genre
{
	genre = gen;
}

string Movie::getgenre()									//Getter for Movie Genre
{
	return genre;
}

void Movie::setdimension(string dim)						//Setter for Movie Dimension
{
	dimension = dim;
}

string Movie::getdimension()								//Getter for Movie Dimension
{
	return dimension;
}

void Movie::setreleasingdate(string date)					//Setter for Movie Releasing Data
{
	releasingdate = date;
}

string Movie::getreleasingdate()							//Getter for Movie Releasing Data
{
	return releasingdate;
}

void Movie::setactors(string act)							//Setter for Movie Actors
{
	actors = act;
}

string Movie::getactors()									//Getter for Movie Actors
{
	return actors;
}

void Movie::display()										//function display the movie details according  to user's input
{
	int input;
	cout << "Enter your choice  " << endl;
	cout << "Enter 1 for Movie 1" << endl;
	cout << "Enter 2 for Movie 2" << endl;
	cout << "Enter 3 for Movie 3" << endl;
	cout << "Enter 4 for Movie 4" << endl;
	cout << "Enter 5 for Movie 5" << endl;
	cout << "Enter 6 for Movie 6" << endl;
	cin >> input;
	if (input == 1)															//Movie 1 details 
	{
		cout << "Movie title   : Soul " << endl;
		cout << "Director      : Pete Docter " << endl;
		cout << "Runtime       : 1h 47m  " << endl;
		cout << "Genre         : Comedy " << endl;
		cout << "Dimension     : 2D " << endl;
		cout << "Releasing Date: 25 December 2020" << endl;
		cout << "Actors: " << endl;
		cout << "1. Poul" << endl;
		cout << "2. Allan" << endl;
		cout << " Movie Timing " << endl;
		movie1timing();
		int choice;
		cout << "Enter Your Choice" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "Your Movie Timimg is:" << endl;
			cout << " DATE         |       DAY            |        TIME				" << endl;
			cout << "_______________________________________________________________" << endl;
			cout << "09-02-2021          MONDAY                   5:15PM			" << endl;
		}
		if (choice == 2)
		{
			cout << "Your Movie Timimg is:" << endl;
			cout << " DATE         |       DAY            |        TIME				" << endl;
			cout << "_______________________________________________________________" << endl;
			cout << " 13-02-2021          FRIDAY                   3:10PM			" << endl;
		}

	}
	if (input == 2)												//Movie 2 details 
	{
		cout << "Movie title   : Monster Hunter " << endl;
		cout << "Director      : Paul W.S. Anderson " << endl;
		cout << "Runtime       : 1h 44m  " << endl;
		cout << "Genre         : Action  " << endl;
		cout << "Dimension     : 2D " << endl;
		cout << "Releasing Date: 3 December 2020" << endl;
		cout << "Actors: " << endl;
		cout << "2. Tony Jaa" << endl;
		cout << "3. MC Jin" << endl;
		cout << "	 Movie Timing" << endl;
		movie2timing();
		int choice;
		cout << "Enter Your Choice" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "Your Movie Timing is:" << endl;
			cout << " DATE         |       DAY            |        TIME				" << endl;
			cout << "_______________________________________________________________" << endl;
			cout << " 10-02-2021         TUESDAY                   12:00AM			" << endl;
		}
		if (choice == 2)
		{
			cout << "Your Movie Timing is:" << endl;
			cout << " DATE         |       DAY            |        TIME				" << endl;
			cout << "_______________________________________________________________" << endl;
			cout << " 14-02-2021         SATURDAY                  2:30PM			" << endl;
		}
	}
	if (input == 3)														//Movie 3 details 
	{
		cout << "Movie title   : Superstar " << endl;
		cout << "Director      : Azaan Sami Khan" << endl;
		cout << "Runtime       : 2h 33m  " << endl;
		cout << "Genre         : Drama " << endl;
		cout << "Dimension     : 2D " << endl;
		cout << "Releasing Date: 2 April 2019" << endl;
		cout << "Actors: " << endl;
		cout << "1.Mahira Khan" << endl;
		cout << "2. Bilal Ashraf" << endl;
		cout << "   Movie timing" << endl;
		movie3timing();
		int choice;
		cout << "Enter Your Choice" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "Your Movie Timimg is:" << endl;
			cout << " DATE         |       DAY            |        TIME				" << endl;
			cout << "_______________________________________________________________" << endl;
			cout << " 11-02-2021          THURSDAY                   7:15PM			" << endl;
		}
		if (choice == 2)
		{
			cout << "Your Movie Timimg is:" << endl;
			cout << " DATE         |       DAY            |        TIME				" << endl;
			cout << "_______________________________________________________________" << endl;
			cout << " 15-02-2021          SUNDAY			         3:10PM			" << endl;
		}
	}
	if (input == 4)																//Movie 4 details 
	{
		cout << "Movie title   : Shadow In The Cloud " << endl;
		cout << "Director      : Max Landis " << endl;
		cout << "Runtime       : 1h 23m  " << endl;
		cout << "Genre         : Horror  " << endl;
		cout << "Dimension     : 3D " << endl;
		cout << "Releasing Date: 31 December 2020" << endl;
		cout << "Actors: " << endl;
		cout << "1. William" << endl;
		cout << "2. Captain Reeves" << endl;
		cout << " Movie Timing " << endl;
		movie4timing();
		int choice;
		cout << "Enter Your Choice" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "Your Movie Timimg is:" << endl;
			cout << " DATE         |       DAY            |        TIME				" << endl;
			cout << "_______________________________________________________________" << endl;
			cout << " 16-02-2021          MONDAY                   6:15PM			" << endl;
		}
		if (choice == 2)
		{
			cout << "Your Movie Timimg is:" << endl;
			cout << " DATE         |       DAY            |        TIME				" << endl;
			cout << "_______________________________________________________________" << endl;
			cout << " 20-02-2021          FRIDAY                   1:00PM			" << endl;
		}
	}
	if (input == 5)																//Movie 5 details 
	{
		cout << "Movie title   : Comedy Play " << endl;
		cout << "Director      : Jacob Chase " << endl;
		cout << "Runtime       : 1h 45m  " << endl;
		cout << "Genre         : Action  " << endl;
		cout << "Dimension     : 2D " << endl;
		cout << "Releasing Date: 28 October  2020" << endl;
		cout << "Actors: " << endl;
		cout << "1. Sarah" << endl;
		cout << "2. Oliver" << endl;
		cout << " Movie Timing " << endl;
		movie5timing();
		int choice;
		cout << "Enter Your Choice" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "Your Movie Timimg is:" << endl;
			cout << " DATE         |       DAY            |        TIME				" << endl;
			cout << "_______________________________________________________________" << endl;
			cout << " 18-02-2021         THURSDAY                  2:00PM			" << endl;
		}
		if (choice == 2)
		{
			cout << "Your Movie Timimg is:" << endl;
			cout << " DATE         |       DAY            |        TIME				" << endl;
			cout << "_______________________________________________________________" << endl;
			cout << " 22-02-2021          SUNDAY                   8:00PM			" << endl;
		}
	}
	if (input == 6)												//Movie 6 details 
	{
		cout << "==============================================" << endl;
		cout << "|     Movie 6 details                        |" << endl;
		cout << "==============================================" << endl;
		cout << "Movie title   : Wonder Women " << endl;
		cout << "Director      : Patty Jenkins " << endl;
		cout << "Runtime       : 21h 35m  " << endl;
		cout << "Genre         : Action/Adventure  " << endl;
		cout << "Dimension     : 3D " << endl;
		cout << "Releasing Date: 14 August 2020" << endl;
		cout << "Actors: " << endl;
		cout << "1. Gal Gadot" << endl;
		cout << "2. Chris Pine" << endl;
		cout << "Movie Timing" << endl;
		movie6timing();
		int choice;
		cout << "Enter Your Choice" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "Your Movie Timimg is:" << endl;
			cout << "DATE          |     DAY              |       TIME	       " << endl;
			cout << "__________________________________________________________" << endl;
			cout << "02-03-2021     	SATURDAY                   2:00PM	  " << endl;
		}
		if (choice == 2)
		{
			cout << "Your Movie Timimg is:" << endl;
			cout << " DATE         |       DAY            |        TIME				" << endl;
			cout << "_____________________________________________________________" << endl;
			cout << " 10-03-2021          SUNDAY                  8:00PM			" << endl;
		}
	}
}

void Movie::addmovie()															//Admin add any movie
{
	cout << "==============================================" << endl;
	cout << "|    Add  Movie Details                       |" << endl;
	cout << "==============================================" << endl;

	cout << "Movietitle : " << getmovietitle() << endl;
	cout << "Director      : " << getdirector() << endl;
	cout << "Runtime       : " << getruntime() << endl;
	cout << "Genre         : " << getgenre() << endl;
	cout << "Dimension     : " << getdimension() << endl;
	cout << "Releasing Date: " << getreleasingdate() << endl;
	cout << "Actor         : " << getactors() << endl;
}
inline void Movie::removemovie()											//Admin Remove  any movie
{
	cout << "==============================================" << endl;
	cout << "|    Remove Movie Details                     |" << endl;
	cout << "==============================================" << endl;

	cout << "Movietitle : " << getmovietitle() << endl;
	cout << "Director      : " << getdirector() << endl;
	cout << "Runtime       : " << getruntime() << endl;
	cout << "Genre         : " << getgenre() << endl;
	cout << "Dimension     : " << getdimension() << endl;
	cout << "Releasing Date: " << getreleasingdate() << endl;
	cout << "Actor         : " << getactors() << endl;
}
void Movie::findmovie()												//find movie by genre and year						
{
	char g;
	int find;
	cout << "Find Movie : " << endl;
	cout << "1.By Genre: " << endl;
	cout << "2.By Year:" << endl;
	cout << "3.By Diector:" << endl;
	cin >> find;
	if (find == 1)
	{
		cout << "Enter h for horror movies" << endl;			//horror movies
		cout << "Enter a for action movies" << endl;			// action movies
		cout << "Enter c for comedy movies" << endl;			//comedy movies
		cout << "Enter d for drama/romantic movies" << endl;	//drama/romantic movies
		cin >> g;
		if (g == 'h' || g == 'H')
		{
			cout << "Horror Movie:" << endl;
			cout << "- Shadow In The Cloud" << endl;
		}
		if (g == 'a' || g == 'A')
		{
			cout << "Action Movies: " << endl;
			cout << "-  Comedy Play" << endl;
			cout << "-  Monster Hunter" << endl;
		}
		if (g == 'c' || g == 'C')
		{
			cout << "Comedy Movies:" << endl;
			cout << "- soul" << endl;
		}
		if (g == 'd' || g == 'D')
		{
			cout << "Drama / Romantic Movies:" << endl;
			cout << "- Superstar" << endl;
		}
	}
	int year = 0;
	if (find == 2)
	{
		cout << "Enter Releasing Year of Movie :" << endl;
		cin >> year;
		while (!(year > 0))
		{
			cout << "INVALID!" << endl;
			cout << "Enter Releasing Year of Movie :" << endl;
			cin >> year;
		}
		if (year == 2020)
		{
			cout << " Movies Release in  " << year << " is " << endl;
			cout << "- Comedy Play\n" << "- Shadow In The Cloud\n" << " - Monster Hunter\n";
		}
		if (year == 2019)
		{
			cout << " Movies Release in  " << year << " is " << endl;
			cout << "- Soul\n" << "- Superstar\n";
		}
		if (year == 2018)
		{
			cout << " Movies Release in  " << year << " is " << endl;
			cout << "- Wonder Women\n";
		}
	}
	if (find == 3)
	{
		string d_name;
		cout << "Enter director name(without space)" << endl;
		cin >> d_name;
		if (d_name == "petedocter")
			{
				cout << "- Soul" << endl;
				cout << "- Monster Hunter" << endl;

			}
		if (d_name == "azaansamikhan")
		{
			cout << "- Superstar" << endl;

		}
		if (d_name == "maxlandis")
		{
			cout << "- Shadow In The Cloud" << endl;
		}
		if (d_name == "jacobchase")
		{
			cout << "- Comedy Play " << endl;
		}
		if (d_name == "pattyjenkins")
		{
			cout << "- Wonder Women" << endl;
		}
		
	}
	else
		cout << "Not found";

}
vector<string> Movie::details(string fileName)            //display Movie list of all the movies through text documents
{
	ifstream file;
	file.open(fileName);
	string Moviesdetails;
	vector<string> result;
	while (file.is_open() && !file.eof())
	{
		getline(file, Moviesdetails);
		if (!Moviesdetails.empty())
		{
			result.push_back(Moviesdetails);
		}
	}
	return result;
}

#endif // !Movie_H
