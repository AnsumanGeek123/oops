#include <iostream>
using namespace std;

class Person {
private:
    string name;  // Private data member
    int age;      // Private data member

public:
    // Getter for 'name'
    string getName() {
        return name;
    }

    // Setter for 'name'
    void setName(string newName) {
        name = newName;
    }

    // Getter for 'age'
    int getAge() {
        return age;
    }

    // Setter for 'age'
    void setAge(int newAge) {
        if(newAge > 0) {  // Validation example
            age = newAge;
        } else {
            cout << "Invalid age!" << endl;
        }
    }
};

int main() {
    Person person;

    // Setting values using setter methods
    person.setName("John");
    person.setAge(25);

    // Getting values using getter methods
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    return 0;
}
// Private Data Members: name and age are private, so they cannot be accessed directly from outside the class.
// Getter Methods: getName() and getAge() are public methods that return the values of the private data members.
// Setter Methods: setName() and setAge() allow setting new values for name and age. In the case of setAge(), validation is added to ensure the age is positive.