#ifndef __LOCATION_H__
#define __LOCATION_H__
#include <string>

using std::string;

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

};

#endif // __PERSON_H__
