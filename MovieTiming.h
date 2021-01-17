#ifndef MovieTiming_H
#define MovieTiming_H
#include<iostream>
using namespace std;
#include<fstream>
#include<vector>
class Movietiming									//class Movie Timming
{
private:
	string movietiming;								//data member
public:
	void setmovietiming(string time);				//Setter for Movie Timing
	string getmovietimimg();						//Getter for Movie Timing
	void movie1timing();							//member function
	void movie2timing();
	void movie3timing();
	void movie4timing();
	void movie5timing();
	void  movie6timing();
	vector<string> schedule(string fileName);		//movie timing details
};
void Movietiming::setmovietiming(string time)		//Setter for Movie Timing
{
	movietiming = time;
}

string Movietiming::getmovietimimg()				//Getter for Movie Timing
{
	return movietiming;
}

void Movietiming::movie1timing()					//Movie 1 Timing
{
	cout << " DATE         |       DAY            |        TIME				" << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << "1) 09-02-2021          MONDAY                   5:15PM			" << endl;
	cout << "2) 13-02-2021          FRIDAY                   3:10PM			" << endl;

}

void Movietiming::movie2timing()					//Movie 2 Timing
{
	cout << " DATE         |       DAY            |        TIME				" << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << "1) 10-02-2021         TUESDAY                   12:00PM		" << endl;
	cout << "2) 14-02-2021         SATURDAY                  2:30PM			" << endl;
}

void Movietiming::movie3timing()					//Movie 3 Timing
{
	cout << " DATE         |       DAY            |        TIME				" << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << "1) 11-02-2021          THURSDAY                   7:15PM		" << endl;
	cout << " 2)15-02-2021          SUNDAY			           3:10PM		" << endl;
}

void Movietiming::movie4timing()					//Movie 4 Timing
{
	cout << " DATE         |       DAY            |        TIME				" << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << " 16-02-2021          MONDAY                   6:15PM			" << endl;
	cout << " 20-02-2021          FRIDAY                   1:00PM			" << endl;
}

void Movietiming::movie5timing()					//Movie 5 Timing
{
	cout << " DATE         |       DAY            |        TIME				" << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << " 18-02-2021         THURSDAY                  2:00PM			" << endl;
	cout << " 22-02-2021         SUNDAY                    8:00PM			" << endl;
}
void Movietiming::movie6timing()					//Movie 6 Timing
{
	cout << "     DATE            |       DAY            |        TIME	" << endl;
	cout << "-----------------------------------------------------------" << endl;
	cout << " 1) 02-03-2021		    SATURDAY                2:00PM		" << endl;
	cout << " 2) 10-03-2021          SUNDAY                  8:00PM	    " << endl;
}

 vector<string> Movietiming::schedule(string fileName)				//display Movie Timing of all the movies through text documents
{
	ifstream file;
	file.open(fileName);
	string Moviestiming;
	vector<string> value;
	while (file.is_open() && !file.eof())
	{
		getline(file, Moviestiming);
		if (!Moviestiming.empty())
		{
			value.push_back(Moviestiming);
		}
	}
	return value;
}
#endif // !MovieTiming
