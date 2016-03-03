//I affirm that all code given below was written solely by me, Sara Wescott, and that any help I received adhered to the rules stated for this exam. 

#ifndef _Venue_H_
#define _Venue_H_

#include <string>
#include "Event.h"
using namespace std;

class Venue //Class that states the venue/location that can have events
{
private:
	Event ScheduledEvents[12]; //Sets 12 event spaces
	int numEvents; //allows a certain number of events
	bool validTime(const int time); //Tells if the time is valid
public:
	void addEvent(const int time, string name); //Adds an event with a name
	Event findEvent(int time); //returns the name of event at a certain time
	Event findEvent(string name); //returns the time of a certain event
};


#endif
