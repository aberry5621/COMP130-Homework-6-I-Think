//
//  main.cpp
//  COMP130 Homework 6 I Think
//
//  Created by ax on 10/27/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

// globular variables and settings
const int ARR_X_SIZE = 10;
const int ARR_Y_SIZE = 10;

void prnt_arr(const int p_arr[][ARR_Y_SIZE], int x_size) {
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

void find_row_matches(int p_arr[][ARR_Y_SIZE], int x_size) {
    
    for (int i = 1; i < ARR_X_SIZE; i++) {
        // cout << "searching i values: " << i << endl;
        for (int j = 0; j < ARR_Y_SIZE; j++) {
            // cout << "searching j values: " << j << endl;
            if (p_arr[i][j] >= 1 && p_arr[i][j] <= 10) {
                if (j != 0) {
                    p_arr[i][j] = 0;
                }
            }
        }
    }
}

void report_neighbors(const int p_arr[][ARR_Y_SIZE], int x_size) {
    // print out routers and neighbors per row
    for (int i = 0; i < ARR_X_SIZE; i++) {
        cout << setw(2) << i + 1 << " is a neighbor to: ";
        for (int j = 1; j < ARR_Y_SIZE; j++) {
            if (p_arr[i][j] != 0)
                cout << p_arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    cout << "Router Neighbors Simulator\n";
    
    // seed random
    srand(static_cast<int>(time(0)));
    
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
    
    cout << "Random Number Connections for Routers 1-10\n";
    prnt_arr(matrix, ARR_X_SIZE);
    cout << endl;
    cout << "Set Neighbors to 0 if they are 1 - 10 \n";
    find_row_matches(matrix, ARR_X_SIZE);
    prnt_arr(matrix, ARR_X_SIZE);
    cout << endl;
    cout << "Router Neighbors Report 1-10\n";
    report_neighbors(matrix, ARR_X_SIZE);
    cout << endl;
    return 0;
}
