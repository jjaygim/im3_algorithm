//
//  main.cpp
//  2438
//
//  Created by 김재정 on 2016. 11. 25..
//  Copyright © 2016년 jjaygim. All rights reserved.
//

#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int n;
    
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("*");
            printf("\n");
        }
    }
    
    return 0;
}





#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
            cout<<"*";
        
        cout<<endl;
    }
    return 0;
}




