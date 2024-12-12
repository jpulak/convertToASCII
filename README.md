# convertToASCII
Write a program that gets a user's first and last initials, and then displays the initials along with their corresponding ASCII code values. Lastly, your program will then add 1 to the two ASCII encodings and display the new values along with their equivalent characters.

You can use the cast operator to find the integer code for a character. For example, assuming we have an integer variable named value, we can find and assign the ASCII code for uppercase 'A' to value by writing the following line of code:
```
value = static_cast <int>('A');
```
We can assign the code for the character in a char variable named ch to the integer variable value by writing the following line of code:
```
value = static_cast <int>(ch);
```
Note: Character literals, such as 'A', must be in single quotation marks, while the names of variables are not in quotation marks.

Example Output
The output produced by the program should closely match the following. Note there is a blank line above and between the calculated results and a newline at the end of the output.
```
Enter your first initial: B
Enter your last initial: R

B has code 66
66 plus one is 67 which is the character C

R has code 82
82 plus one is 83 which is the character S
```
