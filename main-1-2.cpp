#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

int main() {
    int n = 3; // Number of people in the list
    PersonList personList = createPersonList(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": Name = " << personList.people[i].name << ", Age = " << personList.people[i].age << std::endl;
    }

    delete[] personList.people; // Free allocated memory

    return 0;
}
