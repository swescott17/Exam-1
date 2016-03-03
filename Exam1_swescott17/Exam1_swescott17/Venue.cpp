//I affirm that all code given below was written solely by me, Sara Wescott, and that any help I received adhered to the rules stated for this exam. 

#include <string>
#include <iostream>
#include "Venue.h"
#include "Event.h"
using namespace std;


void Venue::addEvent(const int t , string n)
{
	Event ScheduledEvents[t] = n; //adds an event at a certain time and title to the event list in the array
	
}

bool Venue::validTime(int time)
{
	bool empty(Event ScheduledEvents[time]);  //checks if the time is valid
}

Event Venue::findEvent(int time)
{
	Event ScheduledEvents[time]; //searches the string title attached to the array at a certain time
}

Event Venue::findEvent(string name) //searches the series of arrays to find the correct string
{
	for (int i = 0; i < 11; i++)
	{
		if (Event ScheduledEvents[i].compare(name) != 0)
		{

		}
		else
		{

		}
	}
	}