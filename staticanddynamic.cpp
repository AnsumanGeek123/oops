#include <iostream>
#include "hero.cpp"
using namespace std;
//class is a user defined data type

class Hero{
    // these are all properties of the class
    private:
    string name = "siku";
    public:
    int health;

    string getName(string s){
        s = name;
        return s;
    }
};

int main(){
    // creation of the object
    Hero a; // Static allocation

    Hero* b = new Hero;// Dynamic Allocation

    Hero h1;
    string s1;
    cout<< h1.getName(s1);

    return 0;
}