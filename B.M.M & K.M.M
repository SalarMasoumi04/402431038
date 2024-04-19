#include <iostream>
#include <string>
using namespace std;

int main(){
    int bmm=0 , kmm=0 , n , m;
    cin >> n;
    cin >> m;
    for (int i=1; i<=n ; i+=1){
        if (n%i == 0){
            if (m%i == 0){
                bmm=i;
            }
        }
    }
    while (kmm%m != 0 || kmm == 0){
        kmm+=n;
    }
    cout << "bmm is: " << bmm << endl << "kmm is: " << kmm;
}
