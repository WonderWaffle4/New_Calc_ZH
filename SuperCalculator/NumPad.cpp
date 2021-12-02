#include "super_calculator_zh.h"

string NumpadInput(HANDLE hStdOut, int stolb, int stroke){
    int numpad[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i + 1 == stroke && j + 1 == stolb)
                SetConsoleTextAttribute(hStdOut, BACKGROUND_BLUE | BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
            cout << numpad[i][j];
            SetConsoleTextAttribute(hStdOut, 15);
            cout << " ";
        }
        cout << endl;
    }
    return "";
}
