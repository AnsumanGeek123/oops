#include <iostream>
#include "hero.cpp"
using namespace std;
//class is a user defined data type

class Hero{
    // these are all properties of the class
    public:
    int health;
    //private:
    string name;
};
// There are acess modifiers
// Public -> Can acess both inside and outiside the Class.
// Private -> Can only acess inside the Class
// Protected
int main(){
    // creation of the object
    Hero h1;

    cout<<"size "<< sizeof(h1);
    h1.health = 1;
    h1.name = "s";

    return 0;
}