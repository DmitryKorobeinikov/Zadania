#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    int arr[7] = {5, 2, 8, 1, 9, 4, 7}; 
    int n = 7;

    
    for (int i = 1; i < n; i++) {
        int y = arr[i]; 
        int j = i - 1;  
        
        bool F = false; 

        while (j >= 0 && !F) { 
            if (arr[j] > y) {
                
                arr[j + 1] = arr[j];
                j = j - 1;
            } else {
                F = true; 
            }
        }
        
       
        arr[j + 1] = y; 

       
        cout << "Шаг " << i << ": ";
        for (int k = 0; k < n; k++) cout << arr[k] << " ";
        cout << endl;
    }

    return 0;
}