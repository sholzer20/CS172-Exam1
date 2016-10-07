#include "Movie.h"
//I affirm that all code given below was written solely by me, Sam Holzer, and that any help I received
//adhered to the rules stated for this exam

Movie::Movie() //Default movie if no parameters are passed
{
	genre = "Comedy";
	title = "The Naked Gun"; //What a classic
	showTime = 4;
}

Movie::Movie(string Title, string Genre, int ShowTime) //Constructs a Movie object with the passed parameters.
														//Genre can only be "Action", "Comedy", "Horror", or "Documentary". Default is "Comedy"
{
	if (Genre == "Action" || Genre == "Comedy" || Genre == "Horror" || Genre == "Documentary") 
	{
		genre = Genre;
	} 
	else 
	{
		genre = "Comedy";
	}
	title = Title;
	showTime = ShowTime;
}

string Movie::GetTitle() //Accessor for title
{
	return title;
}

string Movie::GetGenre() //Accessor for genre
{
	return genre;
}

int Movie::GetShowTime() //Accessor for showTime
{
	return showTime;
}
