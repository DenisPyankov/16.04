#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");
    int n;
    in >> n;
    int x = (n * n + 1) / 2;
    x = (x - 1) / 9 * 10 + (x - 1) % 9 + 1;
    out << x;
}
