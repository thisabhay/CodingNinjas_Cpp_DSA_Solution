/*Compress the String
Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

The string is compressed only when the repeated character count is more than 1.
Note:
Consecutive count of every character in the input string is less than or equal to 9.
Input Format:
The first and only line of input contains a string without any leading and trailing spaces.
Output Format:
The output contains the string after compression printed in single line.
Note:
You are not required to print anything. It has already been taken care of. Just implement the given function.
Constraints:
0 <= N <= 10^6

Where 'N' is the length of the input string.

Time Limit: 1 sec
Sample Input 1:
aaabbccdsa
Sample Output 1:
a3b2c2dsa
Explanation for Sample Output 1:
In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is repeated 2 times and 'd', 's' and 'a' and occuring 1 time hence no compression for last 3 characters.
Sample Input 2:
aaabbcddeeeee
Sample Output 2:
a3b2cd2e5
Explanation for Sample Output 2:
In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is occuring single time, 'd' is repeating 2 times and 'e' is repeating 5times.
*/
#include <cstring>
string getCompressedString(string &input) {
    int n = 0;
    //while(input[n] != '\0'){ 
        //n++;
    //}
    string temp="";
	n=input.size();
    int i=0;//for traversing the entire vector
    int ansIndex = 0;
    int j;
    while(i < n)
    {
        j = i+1; //for comparing the next character we had taken j=i+1
		while(j<n && input[i] == input[j])
        {
            j++;
        }
        /* when you will come here ?
        either we had traversed the whole vector
        or we had encountered the new character */
        
        // store the old char
       //input[ansIndex++] = input[i];
        temp+=input[i];
        int count  = j-i;
        if(count>1)
        {
            temp+= count+48;  
            //input[ansIndex++]=count+48;
        }
        //moving to the new different character
        i=j;
    }
   // input[ansIndex] = '\0';   
    return temp;
    
}
