#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(65001);
    int arr[3][4] = {
        {5, 12, 7, 3},
        {8, 15, 2, 11},
        {4, 9, 1, 6}
    };
    
    int rows = 3;
    int cols = 4;

    
    int max_val = arr[0][0];
    int max_row = 0;
    int max_col = 0;

    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j < cols; j++) {
            
            if (arr[i][j] > max_val) {
                max_val = arr[i][j]; 
                max_row = i;         
                max_col = j;         
            }
        }
    }

    
    cout << "Максимальный элемент: " << max_val << endl;
    cout << "Его индексы: строка " << max_row << ", столбец " << max_col << endl;

    return 0;
}