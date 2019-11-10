//DAVID BERENGUER ANTON
// checkFinalMark

#include <iostream>
using namespace std;

int main()
{
    const int QuantityOfNumber = 10;
    int numbers[QuantityOfNumber];
    int countIncrements = 0;
    for (int number = 0; number < QuantityOfNumber; number++)
    {
        cout << "Enter number " + (number + 1) << endl;
        cin >> numbers[number];
        if (numbers[number] < 0)
        {
            do
            {
                cout << "a number positive please" << endl;
                cin >> numbers[number];
            } while (numbers[number] < 0);
        }
    }
    for (int position = 0; position < QuantityOfNumber - 1; position++)
    {
        if (numbers[position] < numbers[position + 1])
        {
            countIncrements++;
        }
    }
    cout << countIncrements + "increments." << endl;
}
