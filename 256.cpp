#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");

    int x = 0, y = 0, z = 0, n, a;
    char c;
    in >> n;

    for (int i = 0; i < n; i++) {
        in >> c;
        if (c == 'X') {
            in >> a;
            x += a;
        }
        else 
            if (c == 'Y') {
            in >> a;
            x += a;
            z += a;
            }
        else {
            in >> a;
            z += a;
        }
    }

    if ((x > 0) && (z > 0) || (x < 0) && (z < 0)) {
        if (x < z)
            y = x;
        else
            y = z;
    }
    x -= y;
    z -= y;
    out << x + y + z;

}
