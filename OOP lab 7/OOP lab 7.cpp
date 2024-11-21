#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    int rows, cols;

    cout << "Введiть кiлькiсть рядкiв: ";
    cin >> rows;
    cout << "Введiть кiлькiсть стовпцiв: ";
    cin >> cols;

    vector<vector<int>> array(rows, vector<int>(cols));

    cout << "Введiть елементи масиву:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << "Елемент [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "Ваш масив:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    int maxElement = numeric_limits<int>::min();
    int minElement = numeric_limits<int>::max();

    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            if (array[i][j] > maxElement) 
            {
                maxElement = array[i][j];
            }
            if (array[i][j] < minElement) 
            {
                minElement = array[i][j];
            }
        }
    }

    cout << "Максимальний елемент: " << maxElement << endl;
    cout << "Мiнiмальний елемент: " << minElement << endl;

    return 0;
}