#include <stdio.h>
#include <string.h>

void compareString(char str1[], char str2[])
{
  if (strcmp(str1, str2) == 0)
    {
    printf("%s and %s are the same", str1, str2);
    }
  else
  {
    printf("%s and %s are different", str1, str2);
  }
}

int lenOfstr(char str[])
{
  return strlen(str);
}

int concatenateStr(char str1[], char str2[])
{
  strcat(str1," ");
  strcat(str1,str2);
  return *str1;
}

int findStringInsideString(char str1[], char str2[])
{
  char * result;
  result = strstr(str1, str2); 
  if (result)
  {
    printf("result = %s\n", result);
  }
  else
  {
    printf("%s not found in %s\n", str2, str1);
  }
  //strstr(char str1, char s2)
  // str1 = haystack (what you search in)
  // str2 = needle (what you search for)
  // return a pointer to the 1st occurance of str2 in str1
  // or a null pointer if str2 isnt found in str1
  return 0;
}

void firstchar(char str[],char ch)
{
  char * result;
  result = strchr(str, ch);
  if (result)
  {
    printf("result = %s\n", result);
  }
  else
  {
    printf("the character %c doesn't exist in the string %s\n", ch, str);
  }
}

void lastchar(char str[], char ch)
{
  char * result;
  result = strrchr(str, ch);
  if (result)
  {
    printf("result = %s\n", result);
  }
  else
  {
    printf("the character %c doesn't exist in the string %s\n", ch, str);
  }
}

void splitString()
{
  char csv[] = "one,two,three";
  char delim[] = ",";
  char *token;
  token = strtok(csv, delim);
  while( token != NULL ) 
  {
    printf( " %s\n", token );
    
    token = strtok(NULL, delim);
  }
}

void copyString(char str1[], char str2[])
{
  char string[] = {};
  strcpy(string, str1);
  strcpy(str1, str2);
  strcpy(str2, string);
  printf("str1 = %s \nstr2 = %s", str1, str2);
}

int main() {
  printf("c strings - character arrays\n\n");
  splitString();
  return 0;
}