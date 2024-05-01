#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Define a 3x3 matrix
    vector<vector<int>> matrix = { {1, 2, 3},
                                   {4, 5, 6},
                                   {7, 8, 9} };

    // Define a three-dimensional vector
    vector<int> inputVector = { 1, 2, 3 };

    // Calculate the product of the matrix and the vector
    vector<int> result(3, 0);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i] += matrix[i][j] * inputVector[j];
        }
    }

    // Print the result
    cout << "The Answer is: ";
    for (int i = 0; i < 3; i++) {
        cout << result[i] << " ";
    }

    return 0;
}