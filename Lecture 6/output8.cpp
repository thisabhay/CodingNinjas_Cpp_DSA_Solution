#include <iostream>
using namespace std;
int main()
{
    for(int i = 0; i < 2; i = i + 1) {
     for(int j = 0; j < 2; j = j + 1) {
          if (j == 1)
              break;
          cout << j << " ";
      }
    }
}