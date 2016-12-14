//
//  main.cpp
//  2522
//
//  Created by 김재정 on 2016. 11. 26..
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
        for(int k=1 ; k<=n-i ; k++)
            cout<<" ";
        for(int k=1 ; k<=i ; k++)
            cout<<"*";
        cout<<endl;
    }
    for(int i=1 ; i<=n-1 ; i++)
    {
        for(int k=1 ; k<=i ; k++)
            cout<<" ";
        for(int k=1 ; k<=n-i ; k++)
            cout<<"*";
        
        cout<<endl;
    }
    return 0;
}

