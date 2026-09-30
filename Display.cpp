#include <iostream>
using namespace std;


void display(int numbers[3][3])
{
    cout << "\n2D Array:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << numbers[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int numbers[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int row, column;

    cout << "Original Array:";
    display(numbers);


    cout << "\nEnter row (1-3): ";
    cin >> row;

    cout << "Enter column (1-3): ";
    cin >> column;

    
    numbers[row - 1][column - 1] = 0;


    cout << "\nAfter deleting the value:";
    display(numbers);

    return 0;
}
