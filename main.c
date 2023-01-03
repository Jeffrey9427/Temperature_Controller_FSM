#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "mylib/mylib.h"

void white_on_red() {
    printf("\033[41;37m");
}

void white_on_blue() {
    printf("\033[46;37m");
}

void white_on_green() {
    printf("\033[37;42m");
}

void green() {
    printf("\033[42m");
}

void reset() {
    printf("\033[0m");
}

void clear() {
    printf("\033[2J");
}


void cold() {
    printf("            ----------------------------------\n");
    printf("           /                                  \\\n");
    printf("          |     --------------------------     |\n");
    printf("          |    |");
    white_on_blue();
    printf("                          ");
    reset();
    printf("|    |\n");
    printf("          |    |");
    white_on_blue();
    printf("   The temperature is     ");
    reset();
    printf("|    |\n");
    printf("          |    |");
    white_on_blue();
    printf("           \033[1;37mCOLD           ");
    reset();
    printf("|    |\n");
    printf("          |    |");
    white_on_blue();
    printf("                          ");
    reset();
    printf("|    |\n");
    printf("          |     --------------------------     |\n");
    printf("          |                                    |\n");
    printf("          |     ---------        ---------     |\n");
    printf("          |    |    -    |      |    +    |    |\n");
    printf("          |     ---------        ---------     |\n");
    printf("           \\                                  /\n");
    printf("            ---------------------------------\n\n");
}

void cold_decrease() {
    printf("            ----------------------------------\n");
    printf("           /                                  \\\n");
    printf("          |     --------------------------     |\n");
    printf("          |    |");
    white_on_blue();
    printf("                          ");
    reset();
    printf("|    |\n");
    printf("          |    |");
    white_on_blue();
    printf("   The temperature is     ");
    reset();
    printf("|    |\n");
    printf("          |    |");
    white_on_blue();
    printf("           \033[1;37mCOLD           ");
    reset();
    printf("|    |\n");
    printf("          |    |");
    white_on_blue();
    printf("                          ");
    reset();
    printf("|    |\n");
    printf("          |     --------------------------     |\n");
    printf("          |                                    |\n");
    printf("          |     ---------        ---------     |\n");
    printf("          |    |");
    white_on_green();
    printf("    -    ");
    reset();
    printf("|      |    +    |    |\n");
    printf("          |     ---------        ---------     |\n");
    printf("           \\                                  /\n");
    printf("            ---------------------------------\n\n");
}

void increasing() {
    printf("            ----------------------------------\n");
    printf("           /                                  \\\n");
    printf("          |     --------------------------     |\n");
    printf("          |    |");
    white_on_red();
    printf("                          ");
    reset();
    printf("|    |\n");
    printf("          |    |");
    white_on_red();
    printf("   The temperature is     ");
    reset();
    printf("|    |\n");
    printf("          |    |");
    white_on_red();
    printf("       \033[1;37mINCREASING         ");
    reset();
    printf("|    |\n");
    printf("          |    |");
    white_on_red();
    printf("                          ");
    reset();
    printf("|    |\n");
    printf("          |     --------------------------     |\n");
    printf("          |                                    |\n");
    printf("          |     ---------        ---------     |\n");
    printf("          |    |    -    |      |");
    white_on_green();
    printf("    +    ");
    reset();
    printf("|    |\n");
    printf("          |     ---------        ---------     |\n");
    printf("           \\                                  /\n");
    printf("            ---------------------------------\n\n");
}



int main(void){
    int q1=0, q0=0, i1=0, i2=0, Q1=0, Q0=0, o0 = 0, o1 = 0;
    while(true){
        
        if ((Q1 == 0) && (Q0 == 0) && (o0 == 0 && o1 == 0)) { 
            printf("Current state: %d %d (Cold)\n\n",Q1,Q0);
            cold();
        } 
        else if ((Q1 == 0) && (Q0 == 0) && (o0 == 1 && o1 == 0)) {
            if (i2 == 0) {
                printf("Current state: %d %d (Cold)\n\n",Q1,Q0);
                cold_decrease();
            }
        }
        else if ((Q1 == 0) && (Q0 == 1)) {
            if (i2 == 1) {
                printf("Current state: %d %d (Increasing)\n\n",Q1,Q0);
                increasing();
            }
        }
        else if ((Q1 == 1) && (Q0 == 0)) {
            if (i2 == 0) {
                printf("Current state: %d %d (Increasing)\n\n",Q1,Q0);
                // hot_decease();
            }
            else if (i2 == 1){
                printf("Current state: %d %d (Hot)\n\n",Q1,Q0);
                // hot_increase();
            }
        }
        else if ((Q1 == 0) && (Q0 == 1) && (o0 = 0 && o1 == 1)) {
            if (i2 == 0) {
                // decreasing_decrease();
                printf("Current state: %d %d (Decreasing)\n\n",Q1,Q0);
            }
            else if (i2 == 1){
                // decreasing_increase();
                printf("Current state: %d %d (Decreasing)\n\n",Q1,Q0);
            }
        }
        

        i1 = 0;
        i2 = 0;

        printf("Temperature [0 for Low (<40) // 1 for High (>40)]: ");
        scanf("%d", &i1);
        printf("Button [0 for Decrease Temperature // 1 for Increase Temperature]: ");
        scanf("%d", &i2);

        if ((i1 == 0 || i1 == 1) && (i2 == 0 || i2 == 1)) {
            nextState(q1, q0, i1, i2, &Q1, &Q0);
            printf("\nNext state: %d %d\n", Q1, Q0);

            output(q1, q0, &o0, &o1);
            printf("Output: %d %d\n\n\n\n\n\n\n", o0, o1);

            q1 = Q1;
            q0 = Q0;
        } else {
            printf("Sorry, your input is invalid, try again.\n\n");
        }

    }

    return 0;
}