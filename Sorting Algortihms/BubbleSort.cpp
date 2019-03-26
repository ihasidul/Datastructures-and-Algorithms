#include <iostream>

using namespace std;
//This is Bubble sort
int main()
{
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    int ArrayOf[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ArrayOf[i];
    }
    cout << "The unsorted array: " << endl;
    for (int k = 0; k < n; k++)
    {
        cout << ArrayOf[k] << " ";
    }
    cout << " " << endl;
    int temp;
    //This is what sorting the array.
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ArrayOf[i] > ArrayOf[j])
            {
                temp = ArrayOf[i];
                ArrayOf[i] = ArrayOf[j];
                ArrayOf[j] = temp;
            }
        }
    }
    cout << "Your sorted array is" << endl;
    for (int k = 0; k < n; k++)
    {
        cout << ArrayOf[k] << " ";
    }

    return 0;
}
