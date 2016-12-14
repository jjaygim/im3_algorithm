#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << n*(n+1)/2 << '\n';
}


#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int n, sum=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        sum += i;
    }
    printf("%d\n",sum);
}

