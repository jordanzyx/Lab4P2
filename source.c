//
// Created by Jordan on 9/19/2019.
//
#include <stdio.h>
#include "header.h"

char prompt_yes_no(){
    char c = 'o';


    while (c != 'y' && c != 'n' && c != 'Y' && c != 'N'){
        printf("Please respond with y/n");
        scanf(" %c",&c);
    }

    return c;
}

