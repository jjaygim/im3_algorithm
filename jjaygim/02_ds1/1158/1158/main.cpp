//
//  main.cpp
//  1158
//
//  Created by 김재정 on 2016. 12. 3..
//  Copyright © 2016년 jjaygim. All rights reserved.
//

#include <cstdio>
#include <queue>
using namespace std;
int main() {
    int n, m;
    scanf("%d %d",&n,&m);
    queue<int> q;
    for (int i=1; i<=n; i++) {
        q.push(i);
    }
    printf("<");
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<m-1; j++) {
            q.push(q.front());
            q.pop();
        }
        printf("%d, ",q.front());
        q.pop();
    }
    printf("%d>\n",q.front());
    return 0;
}