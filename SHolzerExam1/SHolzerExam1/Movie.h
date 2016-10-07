//I affirm that all code given below was written solely by me, Sam Holzer, and that any help I received
//adhered to the rules stated for this exam
//This class represents a movie, which includes a title, a genre, and a show time
#pragma once
#include <string>
using namespace std;

class Movie
{
private:
	string title;
	string genre;
	int showTime;

public:
	Movie(); //Default constructor sets genre to "Comedy", title to "The Naked Gun", and showTime to 4

	Movie(string Title, string Genre, int ShowTime);

	string GetTitle(); //Returns the movie title
	string GetGenre(); //Returns the movie genre
	int GetShowTime(); //When is this movie shown?


};

