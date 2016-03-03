//I affirm that all code given below was written solely by me, Sara Wescott, and that any help I received adhered to the rules stated for this exam. 

#include <string>
#include <iostream>
#include "Venue.h"
#include "Event.h"
using namespace std;

//Unable to get the const int of the array working

void Venue::addEvent(const int t , string n)
{
	if (Venue::validTime(t) == false)
	{
		cout << "Couldn't schedule event. :( " << endl;
	}
	else
	{
		Event ScheduledEvents[t] = n; //adds an event at a certain time and title to the event list in the array
		cout << "Event scheduled!" << endl;
	}
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
		if (Event ScheduledEvents[i].compare(name) == 0) //uses compare function to see if the strings are similar
		{
			cout << "The time is " << i << endl;
		}
	
	}
}