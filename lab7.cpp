#include <iostream>
using namespace std;

int main() {
    const int rows = 5;
    const int cols = 5;
    int array[rows][cols] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += array [i][j];
        }
        double average = static_cast<double>(sum) / cols;
        cout << "Середнє значення для рядка " << i + 1 << ": " << average << endl;
    }

    return 0;
}
