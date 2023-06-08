#ifndef __LOCATION_H__
#define __LOCATION_H__
#include <string>
#include <iostream> 

using namespace std;

class Location{
    private:
        string name;
        string description;
        string type;
        int size;

    public:
        Location(const string name, const string description, const string type) : name(name), description(description), type(type){}

        const string getName(){return name;}

        const string getType(){return type;}

        const string getDescription(){return description;}

        const int getSize(){return size;}

        void setSize(int size){this->size = size;}

        void displayLocation(){
            cout << "You are in the ";
            cout << getType();
            cout << ": ";
            cout << getName();
            cout << "! ";
            cout << getDescription();      
            cout << "." << endl;
        }
        

};

#endif // __PERSON_H__
