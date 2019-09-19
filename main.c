/*
 *         1. All-Star Game appearance = $25,000

        2. Regular season MVP = $75,000

        3. World Series MVP = $100,000

        4. Gold Glove award = $50,000

        5. Silver Slugger award = $35,000

        6. Home run champ = $25,000

        7. Batting average champ = $25,000
 *
 *
 */

#include <stdio.h>
#include "header.h"

int main() {
    int bonus = 0;
    char response = 'n';

    printf("Did you appear in the allstar game?");
    response = prompt_yes_no();
    if(response == 'y')bonus += 25000;

    printf("\n\nWere you the regular season MVP?");
    response = prompt_yes_no();
    if(response == 'y')bonus += 75000;

    printf("\n\nWere you the World Series MVP?");
    response = prompt_yes_no();
    if(response == 'y')bonus += 100000;

    printf("\n\nDid you win the Gold Glove Award?");
    response = prompt_yes_no();
    if(response == 'y')bonus += 50000;

    printf("\n\nDid you win the Silver Slugger Award?");
    response = prompt_yes_no();
    if(response == 'y')bonus += 35000;

    printf("\n\nWere you the home run champ?");
    response = prompt_yes_no();
    if(response == 'y')bonus += 25000;

    printf("\n\nWere you the batting average champ?");
    response = prompt_yes_no();
    if(response == 'y')bonus += 25000;

    printf("Your bonus this year from your accolades was %d",bonus);

    return 0;
}