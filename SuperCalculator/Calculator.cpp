#include "super_calculator_zh.h"

void Calculator(HANDLE hStdOut){
//    while(true){
//        cout << "Input first number: " << endl;
//        string num1;
//        getline(cin, num1);
//        num1 = itc_removeSpace(num1);
//        string operation;
//        cout << "Choose operation(+, -, *): " << endl;
//        getline(cin, operation);
//        operation = itc_removeSpace(operation);
//        cout << "Input second number: " << endl;
//        string num2;
//        getline(cin, num2);
//        num2 = itc_removeSpace(num2);
//        cout << "Result: "<<noZero(calculationController(num1, num2, operation)) << endl << endl;
//    }
    char key;
    while(true){
        key = getch();
        gotoxy(0, 0);
        NumpadInput(hStdOut, 1, 1);
    }
}
