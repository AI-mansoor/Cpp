#include <iostream>
using namespace std;

int main() {

    // Create an array containing 5 numbers
    int numbers[5] = {10, 25, 7, 40, 15};

    // Assume the first number is the greatest
    int greatest = numbers[0];

    // Start the loop from index 1
    // because index 0 is already stored in 'greatest'
    for (int i = 1; i < 5; i++) {

        // Check if the current number is greater
        // than the number currently stored in 'greatest'
        if (numbers[i] > greatest) {

            // If current number is greater,
            // store it as the new greatest number
            greatest = numbers[i];
        }
    }

    // Display the greatest number
    cout << "Greatest number is: " << greatest;

    return 0;
}