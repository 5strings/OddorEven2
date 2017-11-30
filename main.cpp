//
//  main.cpp
//  odd or even c++
//
//  Created by Eun Jae Lee on 30/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int num;
    cout<<"Enter any number: \n";
    cin>>num;
    
    if (num%2 ==0 ) {
        cout<<num<<" is even number \n";
    } else {
        cout<<num<<" in odd number \n";
    }
    system("pause");
}
