#include <iostream>
using namespace std;
int main()
{
    int i = 1;
while(i < 3) {
    int j = 0;
    while(j < 5) {
        j++;
        if(j == 3) {
            continue;
        }
        cout << j << " ";
    }
    i++;
}
}