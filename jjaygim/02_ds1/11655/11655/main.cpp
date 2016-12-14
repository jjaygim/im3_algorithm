//
//  main.cpp
//  11655
//
//  Created by 김재정 on 2016. 12. 3..
//  Copyright © 2016년 jjaygim. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string rot13(string s) {
    for (int i=0; i<s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'm') {
            s[i] = s[i] + 13;
        } else if (s[i] >= 'n' && s[i] <= 'z') {
            s[i] = s[i] - 13;
        } else if(s[i] >= 'A' && s[i] <= 'M') {
            s[i] = s[i] + 13;
        } else if(s[i] >= 'N' && s[i] <= 'Z') {
            s[i] = s[i] - 13;
        }
    }
    return s;
}
int main() {
    string s;
    getline(cin,s);
    cout << rot13(s) << '\n';
}
