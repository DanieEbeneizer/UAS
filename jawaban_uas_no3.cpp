#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

template <typename T, size_t size>
int binarySearch(const array<T, size> &items, const T &key)
{
    int low = 0;                       
    int high = items.size() - 1;       
    int middle = (low + high + 1) / 2; 
    int location = -1;                 
    do
    { 
        if (key == items[middle])
        {
            location = middle; 
        }
        else if (key < items[middle])
        {                      
            high = middle - 1; 
        }
        else
        {                    
            low = middle + 1; 
        }
        middle = (low + high + 1) / 2; 
    } while ((low <= high) && (location == -1));
    return location; 
}

int main()
{
    int searchKey;
    const size_t arraySize = 100; 
    array<int, arraySize> data;   
    data = {48, 52, 19, 79, 62, 63, 81, 3, 61, 24, 22, 46, 17, 25, 39, 11, 12,
            32, 44, 72, 73, 57, 85, 55, 26, 83, 59, 9, 35, 30, 53, 1, 77, 67, 31, 70,
            20, 98, 78, 90, 29, 36, 54, 42, 94, 68, 41, 100, 8, 87, 43, 50, 92, 49, 45,
            60, 71, 82, 69, 38, 93, 28, 58, 15, 37, 86, 7, 23, 13, 97, 76, 27, 5, 56,
            89, 96, 51, 33, 99, 88, 80, 47, 75, 64, 66, 84, 65, 6, 40, 10, 21, 4, 18, 2,
            95, 14, 16, 34, 91, 74}; 
    cout << "Enter integer search key: ";
    cin >> searchKey;
    sort(data.begin(), data.end()); 
    int element = binarySearch(data, searchKey);
    if (element != -1)
    {
        cout << "Found value in element " << element << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }
}