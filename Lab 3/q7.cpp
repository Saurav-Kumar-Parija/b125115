#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter number of rows (m): ";
    cin >> m;

    cout << "Enter number of columns (n): ";
    cin >> n;

    //Alloctaing memory for rows
    int** matrix = new int*[m];

    //Alloctaing memory for columns
    for (int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }

    //Inputing the elements of the matrix
    cout << "\nEnter matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    //Displaying the elements of the matrix
    cout << "\nThe matrix is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    //Deallocating the allocated memory for columns 
    for (int i = 0; i < m; i++) {
        delete[] matrix[i];
    }

    //Deallocating the allocated memory for rows
    delete[] matrix;

    return 0;
}