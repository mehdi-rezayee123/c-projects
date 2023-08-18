#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int);


using namespace std;

int main() {
    int n = 5; 
    
    //n=5 => number of person structs in the array
    Person* peopleArray = createPersonArray(n);

    for (int i = 0; i < n; ++i) {
        cout << "Person " << i + 1 << ": Name = " << peopleArray[i].name << ", Age = " << peopleArray[i].age << endl;
    }

    delete[] peopleArray; 

    return 0;
}
