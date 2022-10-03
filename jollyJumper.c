#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>

int isJollyJumber ( const int seq [] , int size )
{
//boolean array, som vi kan alle udfald some værende 0
int array [ size - 1];
for (int c = 0; c < size - 1; ++c)
array [c] = 0;

//Et loop, som udregner forskellen mellem 2 sideliggende arrays
for (int c = 0; c < size - 1; ++c)
{
int sum = ( seq [c] > seq [c+1]) ; seq [c] - seq [c+1] ; seq [c+1] - seq [c];

//For at checke om det er en jollyjumper har vi en checker
if (sum > 0 && sum < size)
array [sum - 1] = 1;
}

//counter til at check for hve
for (int c = 0; c < size; ++c) 
{
if (array [c] == 0)
return 0;
}

return 1;
}