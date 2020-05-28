#include <stdio.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n",
            bugs, bug_rate);

    //use long to store a big number 
    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    //%ld means print out as a long decimal
    printf("The entire universe has %ld bugs.\n",
            universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n",
            expected_bugs);

    double part_of_universe = expected_bugs/universe_of_defects;
    //use %e to print in scientific notation
    printf("That is only a %e portion of the universe.\n",
            part_of_universe);

    //this is just a demo of something weird
    char nul_byte = '\0';//this is effectively the number 0
    int care_percentage = bugs * nul_byte;
    //%% (two percent chars)
    printf("Which means you should care %d%%.\n",
            care_percentage);
}