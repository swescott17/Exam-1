//I affirm that all code given below was written solely by me, Sara Wescott, and that any help I received adhered to the rules stated for this exam. 


#include <string>
#include <iostream>
#include "Venue.h"
#include "Event.h"
using namespace std;


Event::Event()
{
	time = 0;  //the blank constructor
	title = "The First";
}

Event::Event(int t, string n)
{
	time = t; //the argument constructor
	title = n;
}
int Event::getTime()
{
	return time;//returns time
}

string Event::getTitle()
{
	return title;//returns title
}

void Event::setTime(int t)
{
	time = t; //sets new time
}

void Event::setTitle(string name)
{
	title = name; //sets new name
}