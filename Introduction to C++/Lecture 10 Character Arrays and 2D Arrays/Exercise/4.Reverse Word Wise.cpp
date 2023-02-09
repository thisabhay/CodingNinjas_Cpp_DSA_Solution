/*Reverse Word Wise
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/
void reverseStringWordWise(char input[]) {
  int len = 0;
  // char temp;
  int j = 0;
  while (input[j] != '\0') {
    len++;
    j++;
  }

  int start = 0, end = len - 1; // reversing the entire string
  while (start < end) {
    // swapping the characters at start and end
    char temp = input[start];
    input[start] = input[end];
    input[end] = temp;
    start++;
    end--;
  }
  int i = 0;
  while (input[i] != '\0') {
    start = i;
    while (input[i] != ' ') {
      i++;
      if (i >= len)
        break;
    }
    end = i - 1;
    while (start < end) {
      // swapping the characters at start and end
      char temp = input[start];
      input[start] = input[end];
      input[end] = temp;
      start++;
      end--;
    }
    i++;
    if (i >= len)
      break;
  }
}