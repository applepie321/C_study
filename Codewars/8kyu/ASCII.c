// get character from ASCII Value
// https://www.codewars.com/kata/55ad04714f0b468e8200001c



// My code
#include <stdio.h>
char char_of_code (int charcode) {
    return (char) charcode;
}



// Best Practices from users
char char_of_code (unsigned charcode)
{
  return charcode;
}


#include <ctype.h>
char char_of_code (unsigned charcode)
{
  return toascii(charcode);
}


const char char_of_code[] = "WX?";


char char_of_code (unsigned charcode)
{
  char a=charcode;
  return a;
}