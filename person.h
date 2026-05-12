#ifndef PERSON_H
#define PERSON_H

#include<string>
using namespace std;

class Person {
private:
    string name;
    string lastname;
public:
    int capacity;
    void setFirstName(string n) {
        name = n;
    }
    void setLastName(string lname) {
        lastname = lname;
    }
    string getFirstName()const {
        return name;
    }

    string getLastName()const {
        return lastname;
    }


};


#endif