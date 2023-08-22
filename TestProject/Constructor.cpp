#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    // Constructor with parameters
    Person(const string &name, int age)
    {
        this->name = name;
        this->age = age;
    }

    // Member function to display information
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

private:
    string name;
    int age;
};

int main()
{
    // Create an instance of the Person class using the constructor
    Person person1("Alice", 25);

    // Display information using the member function
    cout << "Information for person1:" << endl;
    person1.displayInfo();

    // Create another instance of the Person class using the constructor
    Person person2("Bob", 30);

    // Display information for the second person
    cout << "\nInformation for person2:" << endl;
    person2.displayInfo();

    return 0;
}
