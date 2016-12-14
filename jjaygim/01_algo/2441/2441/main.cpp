//
//  main.cpp
//  2441
//
//  Created by 김재정 on 2016. 11. 26..
//  Copyright © 2016년 jjaygim. All rights reserved.
//

#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0 ; i<=n ; i++)
    {
        for(int k=1 ; k<=i ; k++)
            cout<<" ";
        for(int k=1 ; k<=n-i ; k++)
            cout<<"*";
        
        cout<<endl;
    }
    return 0;
}


