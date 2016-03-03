//I affirm that all code given below was written solely by me, Sara Wescott, and that any help I received adhered to the rules stated for this exam. 

#ifndef _Event_H_
#define _Event_H_

#include <string>
using namespace std;

class Event
{
private:
	int const time;
	string title;
public:
	Event();
	Event(int const time, string name);
	int getTime();
	string getTitle();
	void setTime(int t);
	void setTitle(string name);
};

#endif
