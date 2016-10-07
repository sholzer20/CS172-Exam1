#include "Theater.h"
//I affirm that all code given below was written solely by me, Sam Holzer, and that any help I received
//adhered to the rules stated for this exam

Theater::Theater(string Name, string Phone) //Creates a theater with Name and Phone, and popcorn and coke are defaults
{
	name = Name;
	phone = Phone;
	popcorn = 3;
	coke = 2;
}

void Theater::AddMovie(Movie &Movie)
{
	movies.push_back(Movie);
}

string Theater::GetMovieForHour(int Hour)
{
	if (Hour < 0 || Hour > 24) //If Hour is not a valid hour, returns an empty string
	{
		return "";
	}
	for (unsigned int k = 0; k < movies.size(); k++) //Reads through every element in the vector
	{
		if (movies.at(k).GetShowTime() == Hour) //If the Hour passed is equal to the showTime of an object, the title of that object is returned
		{
			return movies.at(k).GetTitle();
		}
		else if (movies.at(k).GetShowTime() < Hour && movies.at(k + 1).GetShowTime() > Hour) //If the Hour passed falls between two showTimes, the latter show title is returned
		{
			return movies.at(k+1).GetTitle();
		}
	}
	return "";
}

int Theater::GetShowTimeForGenre(string Genre)
{
	if (Genre == "Action" || Genre == "Comedy" || Genre == "Horror" || Genre == "Documentary") //Genre passed must be one of these genres
	{ 
		for (unsigned int k = 0; k < movies.size(); k++)
		{
			if (movies.at(k).GetGenre() == Genre)
			{
				return movies.at(k).GetShowTime();
			}
		}
	}
		return -1; //If the Genre passed does not match one of the possible options, or if the option is not included (documentary), 
		//-1 is returned.
}

int Theater::GetPopcornPrice()
{
	return popcorn;
}

int Theater::GetCokePrice()
{
	return coke;
}
