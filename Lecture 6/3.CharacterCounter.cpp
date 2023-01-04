#include <iostream>
#include<ctype.h>
using namespace std;

int main() {
	char c;
	c = cin.get();
	int cnum = 0, calpha = 0, crest=0;
	while (c != '$') {
		if(isdigit(c))
		++cnum;
		else if(isalpha(c))
		++calpha;
		else
		++crest;
		c = cin.get();
	}
        cout << calpha <<' '<<cnum <<' ' << crest;
}
