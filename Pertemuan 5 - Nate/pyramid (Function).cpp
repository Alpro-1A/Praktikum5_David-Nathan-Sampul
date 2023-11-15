#include <iostream>
using namespace std;

void pyramid() {

    int n;
    cin >> n; // Masukin input bintangnya mau berapa

    for(int i = 1, k = 0; i <= n; i++, k = 0) {
        for(int j = 1; j <= n-i; j++) {
            cout <<"  "; // Dikasih spasi biar nga dempetan
        }

        while(k != 2 * i-1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
}

int main()  {
    pyramid();
        return 0;
}
