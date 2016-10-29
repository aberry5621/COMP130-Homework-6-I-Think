//
//  main.cpp
//  COMP130 Homework 6 I Think
//
//  Created by ax on 10/27/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;


const int ARR_X_SIZE = 10;
const int ARR_Y_SIZE = 10;

void prnt_arr(const int p_arr[][ARR_Y_SIZE], int x_size) {
    
    cout << "Printing array!" << endl;
    
    // col heads
    for (int i = 0; i < ARR_X_SIZE; i++) {
        cout << left << "|==== " << i + 1 << " ====|" ;
    }
    cout << endl;
    
    for (int i = 0; i < ARR_X_SIZE; i++) {
        for (int j = 0; j < ARR_Y_SIZE; j++) {
            cout << left << setw(12) << p_arr[i][j] << " ";
        }
        cout << endl;
    }
    
    
}

void find_row_matches(const int p_arr[][ARR_Y_SIZE], int x_size) {
    
    for (int i = 1; i < ARR_X_SIZE; i++) {
        cout << "searching i values: " << i << endl;
        for (int j = 0; j < ARR_Y_SIZE; j++) {
            cout << "searching j values: " << j << endl;
            if (p_arr[i][j] == i + 1) {
                cout << "found a match at p_arr[" << i << "][" << j << "]" << endl;
                cout << "i val at match point: " << i << endl;
                cout << "p_arr[i][j] val at match point: " << p_arr[i][j] << endl;
            }
        }
    }
}

int main() {

    cout << "Router Math!\n";
    
    // declare a 10 by 10 2d array
    int matrix[ARR_X_SIZE][ARR_Y_SIZE];
    
    for (int i = 0; i < ARR_X_SIZE; i++) {
        for (int j = 0; j < ARR_Y_SIZE; j++) {
            if (j == 0) {
                matrix[i][j] = i + 1;
            } else {
                matrix[i][j] = 1 + (rand() % 26);
            }
        }
    }
    
    prnt_arr(matrix, ARR_X_SIZE);
    
    find_row_matches(matrix, ARR_X_SIZE);
    
    return 0;
}


/*

 
 
 
*/