#include <iostream>

using namespace std;
int main(){
    int T;
 
    cin >> T;

    int n;
    while (T--) {
        cin >> n;
        
        if((n+1)%3 == 0 || (n-1)%3 == 0) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }

    return 0;
}