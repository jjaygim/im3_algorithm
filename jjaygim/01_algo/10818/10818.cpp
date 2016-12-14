#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	int a[1000002];
	cin >> n;
	for(int i=0; i<n; i++){
		int temp;
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	cout << a[0] << ' '<< a[n-1] << '\n';
}





#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);  //--; ??
    }
    sort(a,a+n);  //--; ?? sort(Array, Array+length);  //#include <algorithm>
    printf("%d %d\n",a[0],a[n-1]);
}





#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int n, a[n];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        int min=a[0],max=a[0];
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }
    
    printf("%d %d\n",min,max);
}
