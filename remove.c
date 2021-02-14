//************************************************************
// Written by Steven Smail for COP3514
//
// remove.c (Project 2)
//
// This program takes a message entered by the user, removes
// all punctuation (nonletters) except white spaces, brings
// all letters to uppercase, and then prints the message.
//************************************************************

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char ch1, ch2;

  printf("Enter the message: \n");
  printf("Output: ");

  //Loop to change message
  do
  {
    ch1 = getchar();
    //Changes letters to uppercase
    if(isalpha(ch1))
      ch2 = toupper(ch1);
    //Keeps white spaces
    else if(ch1 == 32)
      ch2 = ch1;
    //Skips punctuation
    else
      continue;

    printf("%c", ch2);
  }
  while(ch1 != '\n');

  printf("\n");

  return 0;
}