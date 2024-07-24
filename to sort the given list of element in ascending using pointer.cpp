#include <iostream>
using namespace std;
void sort(int* arr, int size)
 {
    for(int i = 0; i < size - 1; ++i) 
	{
        for(int j = i + 1; j < size; ++j)
		 {
            if(*(arr + i) > *(arr + j)) 
			{
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}
void printArray(int* arr, int size) 
{
    for(int i = 0; i < size; ++i)
	 {
        cout << *(arr + i) << " ";
    }
   cout << std::endl;
}
int main() 
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, size);
    sort(arr, size);
    cout << "Sorted array: ";
    printArray(arr, size);
    return 0;
}