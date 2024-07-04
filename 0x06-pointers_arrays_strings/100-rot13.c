#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: string for encoding
 *
 * Return: Pointer to string @s
 */

char *rot13(char *s)
{
  int sub, encoder;

  char *alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  char *encoding = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

  for (sub = 0; s[sub] != '\0'; sub++)
      for (encoder = 0; alphabets[encoder] != '\0'; encoder++)
	  if (s[sub] == alphabets[encoder])
	  {
	      s[sub] = encoding[encoder];
	      break;
	  }

  s[sub] = '\0';
  return (s);
}
