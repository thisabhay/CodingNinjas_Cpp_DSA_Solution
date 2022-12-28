#include <iostream>
using namespace std;
int main()
{   
    int x = 15;
    int y = x++;
    int z = ++x;
    cout << y << " " << z;
}