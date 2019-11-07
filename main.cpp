

#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;
struct timeOfDay
{
  short Hour;
  short Minute;
  short Second;
};
short appDate
{
short dayOfMonth;
short Month;
short year;
};

struct event
{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
};

int main()
{
/*
time hr:min:sec
date: m/d/y 
*/

timeOfDay t; // instance of timeOfDay struct
t.Hour = 7;
t.Minute = 45;
t.Second  = 22;
cout  << "\nTime:"  << endl;
cout  << t.hour << ":"  << t.Minute << ":" << t.Second << endl;

appDate d; // instance of appDate struct
d.dayOfMonth = 6;
d.Month = 6;
d.year = 1999;
cout << "\nDate: " << endl;
cout << d.DayOfMonth << "/" << d.Month << "/" << d.year << endl;

event e;
e.eventName = "Date Of Birth: ";
int decision = 0;
string status = " ";

cout << "\n Is this event, " << e.evenName << ", urgent (1=yes, 2= no)" << endl;
cin >> decision;

if(decision == 1)
{
  e.isUrgent = true;
  status = "urgent";
}
else if (decision == 2)
{
  e.isUrgent = false;
  status = "not urgent";
}
else
{
  status = "error";
}
cout << "\nEvent Name:" << e.eventName << "Status: " << status << endl;

  return 0;
}
