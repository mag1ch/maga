//taskr
#include <iostream>
using namespace std;
int main() {
int min,max;
cout << "Enter minimum , maximum number: ";
cin >> min >> max;
    for (int i = min; i <=max; i++) {
        if(i%2==0){
            cout << i << endl ;
        }
    }
    return 0;
}