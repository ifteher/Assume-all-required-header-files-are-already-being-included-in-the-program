
#include<bits/stdc++.h>
using namespace std;

void location(int &x, int y = 4) {
    y += 2;
    x += y;
}

int main() {
    int px = 10, py = 2;

    location(py);
    cout << px << "  " << py << endl;

    location(px, py);
    cout << px << "  " << py << endl;
}
///output:
/*
10  8
20  8
*/
