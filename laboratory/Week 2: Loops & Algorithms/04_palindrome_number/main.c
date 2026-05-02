#include <stdio.h>

/*
Write a program that checks whether a given number is a palindrome.
A number is a palindrome if it reads the same from left to right
and from right to left.

Example:
Input: 121  -> Output: The number is a palindrome.
Input: 123  -> Output: The number is not a palindrome.
*/
int main()
{
    int num;
    int original_num;
    int reversed_num = 0;
    int remainder;

    printf("Enter a number: \n");
    scanf(" %d", &num);
    original_num = num;

  while(num != 0){
   remainder = num % 10;
   reversed_num = reversed_num * 10 + remainder;
   num = num / 10;
  }
  if(original_num == reversed_num){
    printf("The number %d is a palindrome", original_num);
  }
  else{
    printf("The number %d is NOT a palindrome", original_num);
  }
  return 0;
}
