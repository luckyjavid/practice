#include <iostream>
using namespace std;

//change the function
template <class T, class U>
T myMax(T a, U b) {
    return (a > b ? a : b);
}

int main () {
    double x;
    int y;
    cin>>x>>y;
    cout << myMax(x, y) << endl;
}
