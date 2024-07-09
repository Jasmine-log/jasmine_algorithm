#include <iostream>
#include <vector>
using namespace std;

void printSortedArray(vector<int> &array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void swap(vector<int> &arr, int i, int j)
{
    int temp;
    temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
}


void bubbleSort(vector<int> &arr)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < arr.size() - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr, j, j + 1);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
    printSortedArray(arr);
}

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr, i, minIndex);
    }
    printSortedArray(arr);
}
void insertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printSortedArray(arr);
}

void merge(vector<int> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    vector<int> L(n1);
    vector<int> R(n2);

    for (int i = 0; i < n1; ++i)
        L[i] = arr[left + i];

    for (int i = 0; i < n2; ++i)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            ++i;
        }
        else
        {
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        ++i;
        ++k;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        ++j;
        ++k;
    }
}
void mergeSort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; --i)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; --i)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; ++j)
    {
        if (arr[j] < pivot)
        {
            ++i;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return (i + 1);
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

static vector<int> arr;
void initArr(vector<int> &arr)
{
    arr = {3, 2, 9, 6, 1, 7, 4, 8};
}

int main()
{

    cout << "Bubble Sort:" << endl;
    initArr(arr);
    printSortedArray(arr);
    bubbleSort(arr);

    cout << "Selection Sort:" << endl;
    initArr(arr);
    printSortedArray(arr);
    selectionSort(arr);

    cout << "Insersion Sort:" << endl;
    initArr(arr);
    printSortedArray(arr);
    insertionSort(arr);

    cout << "Merge Sort:" << endl;
    initArr(arr);
    printSortedArray(arr);
    mergeSort(arr, 0, arr.size() - 1);
    printSortedArray(arr);

    cout << "Heap Sort:" << endl;
    initArr(arr);
    printSortedArray(arr);
    heapSort(arr);
    printSortedArray(arr);

    cout << "Quick Sort:" << endl;
    initArr(arr);
    printSortedArray(arr);
    quickSort(arr, 0, arr.size() - 1);
    printSortedArray(arr);

    return 0;
}