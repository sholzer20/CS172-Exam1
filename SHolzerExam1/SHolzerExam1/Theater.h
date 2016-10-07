//I affirm that all code given below was written solely by me, Sam Holzer, and that any help I received
//adhered to the rules stated for this exam
//This class represents a theater which includes a name, phone number, and cost for popcorn and Coca-Cola
#pragma once
#include <string>
#include <vector>
#include "Movie.h"
using namespace std;

class Theater
{
private:
	string name;
	string phone;

	int popcorn;  //These two will be set to a default in the constructor. Same for any theater object
	int coke;

	vector<Movie> movies; //Vector to store all of the movies

public:
	Theater(string Name, string Phone); //Constructs the theater with a name and phone number
	void AddMovie(Movie& Movie); //Add a movie at a specific time

	string GetMovieForHour(int Hour); //Return the movie shown at or after the given hour, returns "" if none are upcoming
	int GetShowTimeForGenre(string Genre); //When will the movie of the given genre be shown? Returns -1 if none exist

	int GetPopcornPrice(); //Returns the cost of popcorn in dollars
	int GetCokePrice(); //Returns the cost of a Coke in dollars


};