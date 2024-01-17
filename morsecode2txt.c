#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct MorseCode// (
{
  char character;
  char code[6];
};
struct MorseCode2
{
  char code2[6];
  char character2;
};

int main()
{
char text[100] ,
     morse[100],
     m[10],
     t[100];
int auswahl,
       a,
       i,
       k,
       j;
char* textPtr ;
char* morsePtr ;
char trennzeichen[] = " ";
struct MorseCode dictionary[] =
{


  {' ' ," "},
  {'A',"1-."},        //(-.)
  {'B',"-..."},      //(-...)
  {'C',"-.-."},     //(-.-.)
  {'D',"-.."},      //(-..)
  {'E',". "},        //(.)
  {'F',"..-."},     //(..-.)
  {'G',"--."},      //(--.)
  {'H',"..."},    //(...)
  {'I',".." },       //(.. )
  {'J',".---"},     //(.---)
  {'K',"-.-"},      //(-.-)
  {'L',".-.."},     //(.-..)
  {'M',"--"},       //(--)
  {'N',"-."},       //(-.)
  {'O',"---"},      //(---)
  {'P',".--."},     //(.--.)
  {'Q',"--.-"},     //(--.-)
  {'R',".-."},      //(.-.)
  {'S',"..."},      //(...)
  {'T',"-"},        //(-)
  {'U',"..-"},      //(..-)
  {'V',".--"},      //(.--)
  {'W',"...-"},     //(...-)
  {'X',"-..-"},     //(-..-)
  {'Y',"-.--"},     //(-.--)
  {'Z',"--.."},     //(--..)

};
struct MorseCode2 dictionary2[] =
{

  {'-.', {'A'}},      //(-.)
  {'-...', {'B'}},     //(-...)
  {'-.-.', {'C'}},     //(-.-.)
  {'-..', {'D'}},      //(-..)
  {'.', {'E'}},        //(.)
  {'..-.', {'F'}},     //(..-.)
  {'--.', {'G'}},      //(--.)
  {'...', {'H'}},      //(...)
  {'..', {'I'}},       //(.. )
  {'.---', {'J'}},     //(.---)
  {'-.-', {'K'}},      //(-.-)
  {'.-..', {'L'}},     //(.-..)
  {'--', {'M'}},       //(--)
  {'.', {'N'}},       //(-.)
  {'---', {'O'}},      //(---)
  {'.--.', {'P'}},     //(.-*pointer = &string[100];-.)
  {'--.-', {'Q'}},     //(--.-)
  {'.-.', {'R'}},      //(.-.)
  {'...', {'S'}},      //(...)
  {'-', {'T'}},        //(-)
  {'..-', {'U'}},      //(..-)
  {'.--', {'V'}},      //(.--)
  {'...-', {'W'}},     //(...-)
  {'-..-', {'X'}},     //(-..-)
  {'-.--', {'Y'}},     //(-.--)
  {'--..', {'Z'}},     //(--..)

};

printf("Geben Sie ein was Sie brauchen:\n");
printf("1. Text in Morse\n");
printf("2. Morse in Text\n");
scanf("%d", &auswahl);

switch(auswahl)
    {
        case 1:

                printf("Geben Sie Ihren Text in Grossbuchstaben ein:\n");
                fflush(stdin);
                gets(text);

                for( textPtr = text;*textPtr!='\0';textPtr++)   //while(*textPtr++)
                {
                   for(j = 0; j<27; j++)// while(
                   {
                       if (dictionary[j].character == *textPtr)
                           printf("%s ", dictionary[j].code);
                   }

                }
          break;

         case 2:

                printf("Geben Sie Ihren Morsecode, getrennt durch ein Leerzeichen, ein:\n");
                fflush(stdin);
                gets(morse);

                for(morsePtr = strtok(morse, trennzeichen);*morsePtr!='\0';
                    morsePtr = strtok(NULL,trennzeichen))
                {
                        for(i=0;i<27;i++)
                      {
                        if(strcmp(dictionary[i].code, morsePtr)==0)
                        printf("%c", dictionary[i].character);

                      }

                    }

    break;
               }

system("PAUSE");
return 0;
}


