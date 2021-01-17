#include <stdio.h>
#include <stdlib.h>

int main() 
{
	/*4.38 (“The Twelve Days of Christmas” Song) Write a program that uses repetition and switch
      statements to print the song “The Twelve Days of Christmas.” One switch statement should be
      used to print the day (i.e., “first,” “second,” etc.). A separate switch statement should
      be used to print the remainder of each verse.*/

    int verse, lines=1;
   
    printf("\tTitle: The Twelve Days of Christmas.\n");
                                                                  // verses Loop repeats 12 times
    for (verse = 1; verse <= 12; verse++)
    {
        printf("On the");

        switch (verse)
        {

          case 1:
            printf(" 1st ");                                     
            break;

          case 2:
            printf(" 2nd ");
            break;

          case 3:
            printf(" 3rd ");
            break;

          default:
            printf(" %dth ", verse);
            break;
        }
            printf("day of Christmas my true love sent to me\n\n");

            switch (lines)
            {
              case 12: printf("12 drummers drumming\n\n");
              case 11: printf("11 pipers piping\n\n");
              case 10: printf("10 lords a-leaping\n\n");
              case 9: printf("Nine ladies dancing\n\n");
              case 8: printf("Eight maids a - milking\n\n");
              case 7: printf("Seven swans a - swimming\n\n");
              case 6: printf("Six geese a - laying\n\n");
              case 5: printf("Five golden rings\n\n");
              case 4: printf("Four calling birds\n\n");
              case 3: printf("Three french hens\n\n");
              case 2: printf("Two turtle doves, and\n\n");
              case 1: printf("A partridge in a pear tree\n\n");
              lines++;
            }
         
    }



    system("pause");
    return 0;
}