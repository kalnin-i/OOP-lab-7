#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    int rows, cols;

    cout << "����i�� �i���i��� ����i�: ";
    cin >> rows;
    cout << "����i�� �i���i��� ������i�: ";
    cin >> cols;

    vector<vector<int>> array(rows, vector<int>(cols));

    cout << "����i�� �������� ������:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << "������� [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "��� �����:" << endl;
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

    cout << "������������ �������: " << maxElement << endl;
    cout << "�i�i������� �������: " << minElement << endl;

    return 0;
}