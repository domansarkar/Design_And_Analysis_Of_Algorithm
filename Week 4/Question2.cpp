//QuickSort
#include<iostream>
using namespace std;

int c = 0;
int swaps = 0;
int partition(int array[], int low, int high)
{
    int pivot = array[low];
    int i = low, j = high;
    while(i < j)
    {
        do{
            i++;
            c++;
        }while(array[i] <= pivot);
        c--;
        do{
            j--;
            c++;
        }while(array[j] > pivot);
        c--;
        if(i < j){
            swap(array[i], array[j]);
            swaps++;
        }
    }
    swap(array[low], array[j]);
    swaps++;
    return j;
}

void quickSort(int array[], int low, int high)
{
    int j;
    if(low < high)
    {
        j = partition(array, low, high);
        quickSort(array, low, j);
        quickSort(array, j + 1, high);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int array_size;
        cin >> array_size;
        int *array = new int[array_size];
        for(int i = 0; i < array_size; i++)
            cin >> array[i];
        quickSort(array, 0, array_size);
        for(int i = 0; i < array_size; i++)
            cout << array[i] << " ";
        cout << endl;
        cout << "comparisons = " << c << endl;
        cout << "Swaps = " << swaps << endl;
    }
}
