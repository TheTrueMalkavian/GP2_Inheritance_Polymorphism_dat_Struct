//user.cpp
#include "user.h"
#include "sstream"
using namespace std;

//constructors

user::user() {
	setName("", "");
	setID(0);
}
user::user(string first, string last, int id) {
	setName(first, last);
	setID(id);
}
//mutators 
void user::setName(string first, string last) {
	this -> first = first;
	this -> last = last;
}
void user::setID(int num, string letter)
{
	stringstream sstm;
	sstm << letter << num;
	userID = sstm.str();
}
void user::setID(int id, string letter) {
	stringstream sstm;
	sstm << letter << id;
	usrID = sstm.str();
}
void user::setID(string wholeID)
{
	userID = wholeID;
}
//accessors 
string user::view() const {
	string message = "Name:" + first + " " + last + "\n \t\t\t ID: " + getIDString();
	return message;

}
string user::getName() const { return first + " " + last; }
int user::getID()const { return id; }

string user::getIDString() const {
	stringstream ID;
	ID << id;
	string message = ID.str();
	return message;
}
