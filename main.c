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

void cold_increase() {
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
    printf("          |    |    -    |      |");
    white_on_green();
    printf("    +    ");
    reset();
    printf("|    |\n");
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
    printf("          |    |    -    |      |    +    |    |\n");
    printf("          |     ---------        ---------     |\n");
    printf("           \\                                  /\n");
    printf("            ---------------------------------\n\n");
}

void increasing_increase() {
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

void increasing_decrease() {
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
    printf("          |    |");
    white_on_green();
    printf("    -    ");
    reset();
    printf("|      |    +    |    |\n");
    printf("          |     ---------        ---------     |\n");
    printf("           \\                                  /\n");
    printf("            ---------------------------------\n\n");
}

void hot() {
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
    printf("           \033[1;37mHOT            ");
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
    printf("          |    |    -    |      |    +    |    |\n");
    printf("          |     ---------        ---------     |\n");
    printf("           \\                                  /\n");
    printf("            ---------------------------------\n\n");
}

void hot_decrease() {
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
    printf("           \033[1;37mHOT           ");
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
    printf("          |    |");
    white_on_green();
    printf("    -    ");
    reset();
    printf("|      |    +    |    |\n");
    printf("          |     ---------        ---------     |\n");
    printf("           \\                                  /\n");
    printf("            ---------------------------------\n\n");
}

void hot_increase() {
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
    printf("           \033[1;37mHOT            ");
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

void decreasing() {
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
    printf("       \033[1;37mDECREASING         ");
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

void decreasing_decrease() {
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
    printf("       \033[1;37mDECREASING         ");
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

void decreasing_increase() {
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
    printf("       \033[1;37mDECREASING         ");
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
        if ((o0 == 0) && (o1 == 0)) {
            printf("\n\n\n\n--------------------------------------------------------------");
            printf("\n\nCurrent state: %d %d (Cold)\n\n", o0, o1);
            cold();
        }
        else if ((o0 == 0) && (o1 == 1)) {
            printf("\n\n\n\n--------------------------------------------------------------");
            printf("\n\nCurrent state: %d %d (Increasing)\n\n", o0, o1);
            increasing();
        }
        else if ((o0 == 1) && (o1 == 0)) {
            printf("\n\n\n\n--------------------------------------------------------------");
            printf("\n\nCurrent state: %d %d (Hot)\n\n", o0, o1);
            hot();
        }
        else if ((o0 == 1) && (o1 == 1)) {
            printf("\n\n\n\n--------------------------------------------------------------");
            printf("\n\nCurrent state: %d %d (Decreasing)\n\n", o0, o1);
            decreasing();
        }

        i1 = 0;
        i2 = 0;
    
        printf("Temperature [0 for Low (<40) // 1 for High (>40)]: ");
        scanf("%d", &i1);
        printf("Button [0 for Decrease Temperature // 1 for Increase Temperature]: ");
        scanf("%d", &i2);

        printf("\033[2J");      // Clear the screen
        fflush(stdout);
        printf("\033[1;1H");    // Move the cursor to upper left

        if ((i1 == 0 || i1 == 1) && (i2 == 0 || i2 == 1)) {
            nextState(q1, q0, i1, i2, &Q1, &Q0);
            printf("\n\n\nNext state: %d %d\n", Q1, Q0);

            output(q1, q0, &o0, &o1);
            printf("Output: %d %d\n", o0, o1);
            printf("\n");

        } else {
            printf("Sorry, your input is invalid, try again.\n\n");
        }


        if ((o0 == 0) && (o1 == 0)) {
            if (i2 == 0) {
                cold_decrease();
            }
            else {
                cold_increase();
            }
        } 
        else if ((o0 == 0) && (o1 == 1)) {
            if (i2 == 0) {
                increasing_decrease();
            }
            else {
                increasing_increase();
            }
        } 
        else if ((o0 == 1) && (o1 == 0)) {
            if (i2 == 0) {
                hot_decrease();
            }
            else {
                hot_increase();
            }
        } 
        else if ((o0 == 1) && (o1 == 1)) {
            if (i2 == 0) {
                decreasing_decrease();
            }
            else {
                decreasing_increase();
            }
        } 

        q1 = Q1;
        q0 = Q0;
        output(q1, q0, &o0, &o1);

    }

    return 0;
}
