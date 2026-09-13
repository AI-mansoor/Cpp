#include <iostream>
using namespace std;

int main() {
    int array[5] = {1, 5, 3, 5, 6};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (array[j] > array[j + 1]) {
                int hold = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hold;
            }
        }
    }

    for (int j = 0; j < 5; j++) {
        cout << array[j] << " ";
    }

    return 0;
}