#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {3, 5, 7, 9, 10, 8, 12}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    
    bool is_sorted = true; 

   
    for (int i = 0; i < n - 1; i++) {
        
        if (arr[i] > arr[i + 1]) {
            is_sorted = false; 
            break; 
        }
    }

    
    if (is_sorted) {
        cout << "Массив упорядочен по возрастанию" << endl;
    } else {
        cout << "Массив НЕ упорядочен по возрастанию" << endl;
    }

    return 0;
}