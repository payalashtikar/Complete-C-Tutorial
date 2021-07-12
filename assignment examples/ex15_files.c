/* you have to fill in values to a template letter.txt
letter.txt looks something like this:
thank{{name}} for purchasing {{item}} from our outlet {{outlet}}.
please visit our outlet{{outlet}} for any kind of problems .
we plan to serves you again soon.

you have to read this file and replace these values:
{{name}} - payal
{{item}} - chocochips
{{outlet}} - RajLaxmi Dairy
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//this is a string

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
     char *resultString;
     int i, count = 0;
     int newWordLength = strlen(newWord);
     int oldWordLength = strlen(oldWord);

     //lets count the number of times old word occurs in the string
     for (int i = 0; i < str[i] != '\0'; i++)
     {
          if (strstr(&str[i], oldWord) == &str[i])
          {
               count++;
               //jump over this word
               i = i + oldWordLength - 1;
          }
     }
     //making a new string to fit in the repla(ce wprds
     resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);
     i = 0;
     while (*str)
     {
          //compare the substring with result
          if (strstr(str, oldWord) == str)
          {
               strcpy(&resultString[i], newWord);
               i += newWordLength;
               str += oldWordLength;
          }
          else
          {
               resultString[i] = *str;
               i += 1;
               str += 1;
          }
     }
     resultString[i] = '\0';
     return resultString;
}

int main()
{
     FILE *ptr = NULL;
     FILE *ptr2 = NULL;

     ptr = fopen("Bill(ex15).txt", "r");
     ptr2 = fopen("genBill.txt", "w");

     char str[200];
     fgets(str, 200, ptr);
     printf("the given bill template was %s\n", str);

     //call the replaceWord function and generate newStr
     char *newStr;

     newStr = replaceWord(str, "{{item}}", "chocochips");
     newStr = replaceWord(newStr, "{{outlet}}", "RajLaxmi Dairy");
     newStr = replaceWord(newStr, "{{name}}", "payal");
     printf("the actual bill template is : %s\n", newStr);
     printf("the generated bill has been written to the file genBill.txt\n");

     fprintf(ptr, "%s", newStr);
     fclose(ptr);
     fclose(ptr2);
     return 0;
}