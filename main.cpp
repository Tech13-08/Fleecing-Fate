#include <iostream> 
#include <cstring> 
#include "Location/Village.h"

using namespace std; 

int main() { 
    Village* vil1 = new Village("Village A", "The first village ever");
    cout << "Location: " + vil1->getName() + " | " + vil1->getDescription() << endl;
}