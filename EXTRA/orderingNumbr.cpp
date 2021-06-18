#include <iostream>
using namespace std;
int main()
{
    int arr[] = {45,1,234};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "the ordering is" << endl;
        cout << arr[i] << endl;
    }

    return 0;
}