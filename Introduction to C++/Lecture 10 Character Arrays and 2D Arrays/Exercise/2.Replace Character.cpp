/*Replace Character
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)
Output Format :
Updated string
Note :
You don't need to output anything. Just implement the given function.
Constraints :
1 <= Length of String S <= 10^6
Sample Input :
abacd
a x
Sample Output :
xbxcd*/
void replaceCharacter(char input[], char c1, char c2) {
  int i = 0;
  while (input[i]) {
    if (input[i] == c1)
      input[i] = c2;
    i++;
  }
}