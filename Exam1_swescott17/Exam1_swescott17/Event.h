//I affirm that all code given below was written solely by me, Sara Wescott, and that any help I received adhered to the rules stated for this exam. 

#ifndef _Event_H_
#define _Event_H_

#include <string>
using namespace std;

class Event
{
private:
	int time; //time for the event where 1 is 1:00PM
	string title; //title for the event located in an array
public:
	Event(); //constructor that creats a blank event
	Event(int const time, string name); //constructor that allows you to construct an event with time and title
	int getTime(); //retrieves time for event
	string getTitle(); //retrieves title for event
	void setTime(int t); //sets a time for an event
	void setTitle(string name); //sets a title for an event
};

#endif
