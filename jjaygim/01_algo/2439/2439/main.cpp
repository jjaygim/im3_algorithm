//
//  main.cpp
//  2439
//
//  Created by 김재정 on 2016. 11. 25..
//  Copyright © 2016년 jjaygim. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        for(int k=1 ; k<=n-i ; k++)  //--; ?? 두 포문에 같은 변수?
            cout<<" ";
        for(int k=1 ; k<=i ; k++)
            cout<<"*";
        cout<<endl;
    }
    
    return 0;
}



