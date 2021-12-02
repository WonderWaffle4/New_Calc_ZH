#include "super_calculator_zh.h"

int StartMenuLogic(int option, int key, HANDLE hStdOut){
    switch(key){
            case 72:
                if(option != 0)
                    option--;
                return option;
                break;
            case 80:
                if(option != 2)
                    option++;
                return option;
                    break;
            case 13:
                if(option == 2){
                    cout << "\n\n exiting..." << endl;
                    return 10;
                }
                if(option == 1)
                    cout << "there are no options!" << endl;
                if(option == 0){
                    system("cls");
                    Calculator(hStdOut);
                }
                break;
        }
            return option;
}
