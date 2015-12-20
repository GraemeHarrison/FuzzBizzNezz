//
//  main.c
//  FuzzBizzNezz
//
//  Created by Graeme Harrison on 2015-12-16.
//  Copyright © 2015 Graeme Harrison. All rights reserved.
//
//Write a program that takes three integer inputs: "Fuzz", "Bizz", and "Nezz". Print numbers from 1 to the user's input for "Nezz". For the multiples of "Fuzz", print "Fuzz" instead of the number and for the multiples of "Bizz", print "Bizz" instead of the number. For numbers which are multiples of both "Fuzz" and "Bizz" print "FuzzBizz"

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int Fuzz = 0;
    printf("Please enter an integer for Fuzz: ");
    scanf("%d", &Fuzz);
    
    int Bizz = 0;
    printf("Please enter an integer for Bizz: ");
    scanf("%d", &Bizz);
    
    int Nezz = 0;
    printf("Please enter an integer for Nezz: ");
    scanf("%d", &Nezz);
    
    int x = 1;
    while (x <= Nezz) {
        if (x % Fuzz == 0 && x % Bizz ==0 ) {
            printf("FuzzBizz \n");
            x++;
        } else if (x % Fuzz == 0) {
            printf("Fuzz \n");
            x++;
        } else if (x % Bizz == 0) {
            printf("Bizz \n");
            x++;
        } else {
            printf("%d \n", x);
            x++;
        }
    }
    return 0;
}