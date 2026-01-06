#include <iostream>
#include <array>
#include <utility>
using namespace std;

bool Row_station(int array[9][9], int row, int col, int num){
    for (int i = 0; i <= 8; i++){
        if ((array[i][col] == num) && (i != row)){
            return true;
        }


    }
    return false;
}

bool Box_role(int array[9][9], int row, int col, int num){


    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (array[i + (row - row % 3)][j + (col - col % 3)] == num){
                return true;
            }
        }
    }
    return false;
}
bool Col_station(int array[9][9], int row, int col, int num){
    for (int i = 0; i <= 8; i++){
        if ((array[row][i] == num) && (i != col)){
            return true;
       }
       }
     return false;
}

bool invalid(int array[9][9], int row, int col, int num){
   bool blnValidInput = true;
   if (Row_station(array, row, col, num) == true){
       blnValidInput = false;
   }
   if (Col_station(array, row, col, num) == true){
       blnValidInput = false;
   }
   if (Box_role(array, row, col, num) == true){
       blnValidInput = false;
   }
   return blnValidInput;
}


bool Solve(int array[9][9], int row, int col){
    if (row == 8 && col == 9){
            return true;
    }
    if (col == 9) {
            row = row + 1;
            col = 0;
        }
    if (array[row][col] > 0){
           return Solve(array, row, col + 1);
    }
    for (int num = 1; num <= 9; num++){

        if (invalid(array, row, col, num)){

                array[row][col] = num;

                if (Solve(array, row, col + 1)){
                          return true;
                }

        }
        array[row][col] = 0;

    }
    return false;
}


int main(){

    int x;
    int array[9][9];
    for(int i = 0; i <= 8; i++){
        for(int j = 0; j <= 8; j++){
            cin >> x;
            array[i][j] = x;
        }
    }
    cout<<endl;
    if (Solve(array, 0, 0) == true){
    for(int i = 0; i <= 8; i++){
        for(int j = 0; j <= 8; j++){
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    cout << endl;
    }
    else{
        cout << "No Solution" << endl;
    }


    return 0;
}

bool Box(int array[9][9], int row, int col, int num, int x1, int x2, int y1, int y2){
    for (int i = x1; i < x2; i++){
            for (int j = y1; j < y2; j++){
                if ((array[i][j] == num) && (i != row) && (j != col)){
                    return true;
                }
            }
        }
    return false;
}
/*if (row < 3 && col < 3){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if ((array[i][j] == num) && (i != row) && (j != col)){
                return true;
            }
        }
    }
}
if (row < 3 && col < 6){
    for (int i = 0; i < 3; i++){
        for (int j = 3; j < 6; j++){
            if ((array[i][j] == num) && (i != row) && (j != col)){
                return true;
            }
        }
    }
}
if (row < 3 && col < 9){
    for (int i = 0; i < 3; i++){
        for (int j = 6; j < 9; j++){
            if ((array[i][j] == num) && (i != row) && (j != col)){
                return true;
            }
        }
    }
}
if (row < 6 && col < 6){
    for (int i = 3; i < 6; i++){
        for (int j = 3; j < 6; j++){
            if ((array[i][j] == num) && (i != row) && (j != col)){
                return true;
            }
        }
    }
}
if (row < 9 && col < 9){
    for (int i = 6; i < 9; i++){
        for (int j = 6; j < 9; j++){
            if ((array[i][j] == num) && (i != row) && (j != col)){
                return true;
            }
        }
    }
}
    return false;*/


