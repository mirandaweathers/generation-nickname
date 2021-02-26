/* * * * * * * * * * * * * * * * * * * * * * * *
*                                              *
*      What Generation do You Belong To?       *
*                                              *
*   DESCRIPTION: This program takes user       *
*   input for year born and returns the name   *
*   of the generation that year belongs to.    *
*                                              *
*          AUTHOR: Miranda Weathers            *
*              DATE: 25 Feb 2021               *
*                                              *
* * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

int yearBorn = 0;

int main(void) {
  printf("Nice to meet you! Just curious... What year were you born?\n");

  scanf("%d", &yearBorn);

  if(yearBorn >= 2022) {
    printf("Did we make it out alive?\n");
  }
  if((yearBorn >= 2013) && (yearBorn <= 2021)) {
    printf("Generation Alpha – no more letters after Z!\n");
    printf("May the odds be ever in your favor.\n");
  }
  if((yearBorn >= 1997) && (yearBorn <= 2012)) {
    printf("Gen Z. Please don't take away my skinny jeans.\n");
  }
  if((yearBorn >= 1981) && (yearBorn <= 1996)) {
    printf("Ha, Millennial!\n");
  }
  if((yearBorn >= 1965) && (yearBorn <= 1980)) {
    printf("Gen X. That's funny, you could be my friend OR my parent.\n");
  }
  if((yearBorn >= 1946) && (yearBorn <= 1964)) {
    printf("Ah, you're a Baby Boomer – once the most populous generation, now overtaken by Millennials.\n");
  }
  if((yearBorn >= 1928) && (yearBorn <= 1945)) {
    printf("The Silent Generation. It's ok, you can talk now.\n");
  }
  if((yearBorn >= 1901) && (yearBorn <= 1927)) {
    printf("The Greatest Generation? I guess it's all downhill from here :/\n");
  }
  if((yearBorn >= 1883) && (yearBorn <= 1900)) {
    printf("The Lost Generation. It was nice knowing you...\n");
  }
  if(yearBorn < 1883){
    printf("You've stumped me.\n");
  }

  return 0;
}
