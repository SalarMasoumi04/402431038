#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Get the value of the matrix from user
    cout << "Enter the values of a 3*3 matrix:" << endl;
    vector<vector<int>> matrix(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Get the 3D vector from user
    cout << "Enter the values of a 3D vector:" << endl;
    vector<int> inputVector(3);
    for (int i = 0; i < 3; i++) {
        cin >> inputVector[i];
    }
    
    // Calculate the product of the matrix and the vector
    vector<int> result(3, 0);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i] += matrix[i][j] * inputVector[j];
        }
    }
    
    // Print the final result
    cout << "The multiplication of Matrix & Vector: ";
    for (int i = 0; i < 3; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
