#include <iostream>
using namespace std;

int main() {
    // Массив из 7 целых чисел
    int arr[7] = {5, 2, 8, 1, 9, 4, 7}; 
    int n = 7;

   

    
    for (int i = 0; i < n - 1; i++) {
        
        
        for (int j = 0; j < n - 1 - i; j++) {
            
            
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        
        cout << "Шаг " << i + 1 << ": ";
        for (int k = 0; k < n; k++) cout << arr[k] << " ";
        cout << endl;
    }

    return 0;
}