#include <iostream>
#include "Person.h"
using namespace std;
extern PersonList shallowCopyPersonList(PersonList pl);
int main() {
    PersonList originalList;
    originalList.numPeople = 2;
    originalList.people = new Person[2];
    originalList.people[0].name = "Alice";
    originalList.people[0].age = 25;
    originalList.people[1].name = "Bob";
    originalList.people[1].age = 30;

    PersonList copiedList = shallowCopyPersonList(originalList);

    
    cout << "Original List:" << endl;
    for (int i = 0; i < originalList.numPeople; ++i) {
        cout << "Person " << i + 1 << ": Name = " << originalList.people[i].name << ", Age = " << originalList.people[i].age << endl;
    }

    
    std::cout << "\nCopied List:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        cout << "Person " << i + 1 << ": Name = " << copiedList.people[i].name << ", Age = " << copiedList.people[i].age << endl;
    }

    
    delete[] originalList.people;

    return 0;
}
