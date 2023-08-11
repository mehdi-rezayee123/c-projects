#include <iostream>
using namespace std;

void print_matrix( int array[10][10], int n)
{
    for (int i=0; i<n; i++){
        for ( int j = 0;j<n; j++){

       cout << array[i][j]<< "   ";
        }
        cout << endl;
    };

}

