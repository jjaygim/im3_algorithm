//
//  main.cpp
//  10992
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
        for(int z=1 ; z<=2*i-1 ; z++)
        {
            if(i!=n)
            {
            if(z==1 || z==2*i-1){cout<<"*";}
            else{cout<<" ";}
            }
            else{cout<<"*";}
        }
        cout<<endl;
    }
    return 0;
    
}

