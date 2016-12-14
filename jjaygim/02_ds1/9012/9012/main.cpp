//
//  main.cpp
//  9012
//
//  Created by 김재정 on 2016. 12. 3..
//  Copyright © 2016년 jjaygim. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string valid(string s) {
    int cnt = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '(') {
            cnt += 1;
        } else {
            cnt -= 1;
        }
        if (cnt < 0) {
            return "NO";
        }
    }
    if (cnt == 0) {
        return "YES";
    } else {
        return "NO";
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << valid(s) << '\n';
    }
    return 0;
}