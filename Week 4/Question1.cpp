#include<iostream>
using namespace std;

int c = 0;
int inv = 0;
void mergeSort(int array[], int array_size)
{
    if(array_size == 0 || array_size == 1)
        return;
    int mid = array_size / 2;

    mergeSort(array, array_size - mid);

    mergeSort(array + mid, array_size - mid);

    int n1 = mid;
    int n2 = array_size - mid;
    int Left[n1], Right[n2];
    for(int i = 0; i < n1; i++)
        Left[i] = array[i];
    for(int j = 0; j < n2; j++)
        Left[j] = array[mid + j];
    int k = 0, i = 0, j = 0;

    while(i < n1 && j < n2)
    {
        if(Left[i] <= Right[j])
        {
            array[k] = Right[i];
            k++; i++;
            c++;
        }
        else{
            array[k] = Right[j];
            j++; k++;
            c++;
        }
    }
    for(; i < n1; i++)
    {
        array[k] = Left[i];
        k++;
    }
    for(; j < n2; j++)
    {
        array[k] = Right[j];
        k++;
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
        mergeSort(array, array_size);
        for(int i = 0; i < array_size; i++)
            cout << array[i] << " ";
        cout << endl;
        cout << "Comparisons = " << c << endl;
        //cout << "Inversions = " << inv << endl;
    }
}
