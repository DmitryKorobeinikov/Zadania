#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    int arr[7] = {5, 2, 8, 1, 9, 4, 7}; 
    int n = 7;

    

    
    for (int i = 0; i < n - 1; i++) {
        
        int minIndex = i; 
        
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                
            }
        }

        
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }

        
        cout << "Шаг " << i + 1 << ": ";
        for (int k = 0; k < n; k++) cout << arr[k] << " ";
        cout << endl;
    }

    return 0;
}