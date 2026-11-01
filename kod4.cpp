#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(65001);
    
    int arr[] = {3, -5, 10, 11, -5, 10, 2, -5};
    
    
    int n = sizeof(arr) / sizeof(arr[0]);

    
    int min_val = arr[0];
    int max_val = arr[0];
    
    
    int first_min_index = 0;
    int first_max_index = 0;
    
    
    int count_min = 0;
    int count_max = 0;

    
    for (int i = 0; i < n; i++) {
       
        if (arr[i] < min_val) {
            min_val = arr[i];
            first_min_index = i;
            
        } 
        else if (arr[i] == min_val) {
            count_min++; 
        }

        
        if (arr[i] > max_val) {
            max_val = arr[i];
            first_max_index = i;
            count_max = 1; 
        } 
        else if (arr[i] == max_val) {
        }   
    }

    
    cout << "Максимальный элемент: " << max_val << endl;
    cout << "Индекс первого максимума: " << first_max_index << endl;
    cout << "Количество максимумов: " << count_max << endl;
    cout << endl;
    cout << "Минимальный элемент: " << min_val << endl;
    cout << "Индекс первого минимума: " << first_min_index << endl;
    cout << "Количество минимумов: " << count_min << endl;

    return 0;
}