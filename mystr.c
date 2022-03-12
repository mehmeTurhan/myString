/*
 * Program:   mystr.c
 * Purpose:   This program Computes the Length of a String, Copies Strings, Concatenaties Strings using pointers.
 * Author(s): Mehmet Turhan
 * Date:      10/01/2021
 */
#include <stdio.h>
int mystrlen(char *s);
char *mystrcpy(char *dest, char *src);
char *mystrcat(char *dest, char *src);

/** Function: mystrlen
  * Purpose: Counts each character in a string and computes the length of it.
  *
  * Parameters:
  *   *s: pointer representing the character s
  */
int mystrlen(char *s){
  int count = 0;
  for (; *s != '\0'; s++){
    count++;
  }
  return count;
}

/** Function: mystrcpy
  * Purpose: Copies each character from source string to destination string to create a copy string.
  *
  * Parameters:
  *   *dest: pointer representing the characters in the destination string.
  *   *src: pointer representing the characters in the source string.
  */
char *mystrcpy(char *dest, char *src){
  char *first = dest;
  while(*src != '\0'){
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';
  return first;
}

/** Function: mystrcat
  * Purpose: Appends each character from source string to at the end destination to create a new string with combined characters.
  *
  * Parameters:
  *   *dest: pointer representing the characters in the destination string.
  *   *src: pointer representing the characters in the source string.
  */
char *mystrcat(char *dest, char *src){
  char *tracker = dest;
  while(*tracker != '\0'){
    tracker++;
  }
  for (; *src != '\0'; src++){
    *tracker = *src;
    tracker++;
  }
  return dest;
}

void main()
{
   char *s1 = "Hello ";
   char *s2 = "CPSC 275!";
   char s3[20];

   printf("length of s1 = %d\n", mystrlen(s1));
   printf("s3 = %s\n", mystrcpy(s3, s1));
   printf("s3 = %s\n", mystrcat(s3, s2));
}
