#include <iostream>
using namespace std;
void bubbleSort(int array[], int n)
{

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            // To sort in descending order, change > to < in this line.
            if (array[j] > array[j + 1])
            {
                // swap if greater is at the rear position
                // int temp = array[j];
                // array[j] = array[j + 1];
                // array[j + 1] = temp;
                swap(array[j], array[j + 1]);
            }
        }
    }
}
// function to print the array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << " " << array[i];
    }
    cout << endl;
}
// driver code
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << "Sorted Array in Ascending Order:\n";
    printArray(arr, n);
}
