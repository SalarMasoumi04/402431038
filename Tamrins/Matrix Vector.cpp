#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Define a 3x3 matrix and initialize it with user input
    cout << "Enter the values for a 3x3 matrix:" << endl;
    vector<vector<int>> matrix(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Define a three-dimensional vector and initialize it with user input
    cout << "Enter the values for a three-dimensional vector:" << endl;
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
    
    // Print the result
    cout << "The multiplication of Matrix & Vector: ";
    for (int i = 0; i < 3; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
