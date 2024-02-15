#include <iostream>
using namespace std;
void Merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid + 1;
    int *first = new int[len1];
    int *second = new int[len2];
    int mainArrayIndex = s;
    // copying the values
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }
    mainArrayIndex = mid + 1;
    for (int i = mid + 1; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }
    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {

            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void MergeSort(int *arr, int s, int e)
{

    if (s >= e)
    {
        return;
    }
    // cout << "HII" << endl;
    int mid = s + (e - s) / 2;

    // sortLeftPart
    MergeSort(arr, s, mid);
    // right part sorting
    MergeSort(arr, mid + 1, e);
    Merge(arr, s, e);
}

int main()
{

    int arr[7] = {38, 27, 43, 3, 9, 82, 10};
    int n = 5;
    MergeSort(arr, 0, 4);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}