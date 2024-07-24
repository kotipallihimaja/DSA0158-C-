#include <iostream>
using namespace std;
void insertData(int* arr, int size) 
{
    for(int i = 0; i < size; ++i) 
	{
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> *(arr + i);  
    }
}
void displayData(int* arr, int size) 
{
    std::cout << "The elements are: ";
    for(int i = 0; i < size; ++i) 
	{
        std::cout << *(arr + i) << " ";  
    }
    std::cout << std::endl;
}
int main() 
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int* arr = new int[size];  
    insertData(arr, size);    
    displayData(arr, size);    
    delete[] arr;   
	return 0;
}