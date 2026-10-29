#include <iostream>
#include <string>
using namespace std;

class person {
private:
    int id;
    string name;
    int office;
    int nowhour;

public:
    person();
    person(int ID, string firstName, int officeNumber, int workHour);
    void show_nowhour();
    void set_hour(string Name, int workHour);
    void change_nowhour();
    void change_name(string newName);
    void action();
    void show_all();
};

person::person()
    : id(0), name("Unknown"), office(0), nowhour(0) {
}

person::person(int ID, string firstName, int officeNumber, int workHour)
    : id(ID), name(firstName), office(officeNumber), nowhour(workHour) {
}

void person::show_nowhour() {
    cout << name << " works " << nowhour << " hours.\n";
}

void person::set_hour(string Name, int workHour) {
    name = Name;
    nowhour = workHour;
}

// Assumption: read the new working hours from the keyboard.
void person::change_nowhour() {
    int workHour;
    cout << "Enter new working hours for " << name << ": ";
    if (cin >> workHour) {
        nowhour = workHour;
    }
}

void person::change_name(string newName) {
    name = newName;
}

// Assumption: display the person's work information.
void person::action() {
    cout << name << " works in office " << office
         << " for " << nowhour << " hours.\n";
}

void person::show_all() {
    cout << "ID: " << id << '\n'
         << "Name: " << name << '\n'
         << "Office: " << office << '\n'
         << "Working hours: " << nowhour << '\n';
}

int main() {
    person p1;
    person p2(1, "James Bond", 107, 8);

    p1.show_nowhour();
    p2.show_nowhour();

    p1.set_hour("Bill", 7);
    p1.show_nowhour();

    p2.change_nowhour();
    p2.show_nowhour();

    p2.change_name("James");
    p2.show_nowhour();

    p1.action();
    p2.action();

    p1.show_all();
    p2.show_all();

    return 0;
}
