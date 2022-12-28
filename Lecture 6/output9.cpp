#include <iostream>
using namespace std;
int main()
{
    for(int i = 0; i < 5; i = i + 1) {
     if(i == 2) 
           continue;
    cout << i << " ";
    }
}