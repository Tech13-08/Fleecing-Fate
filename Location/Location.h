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
        Location(const string name, const string description, const string type, const int size) : name(name), description(description), type(type), size(size){}

        const string getName(){return name;}

        const string getType(){return type;}

        const string getDescription(){return description;}

        const int getSize(){return size;}

};

#endif // __PERSON_H__
