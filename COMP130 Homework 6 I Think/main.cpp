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

int main() {

    cout << "Router Math!\n";
    
    // declare a 10 by 10 2d array
    const int SIZE = 10;
    int m_arr[][SIZE] = {0};
    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (j == 0) {
                m_arr[i][j] = i + 1;
            }
            cout << setw(12) << m_arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
