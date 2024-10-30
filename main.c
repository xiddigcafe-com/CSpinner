//Written by A.Jama - Aug.2024
#include <stdio.h>
#include <string.h>
#include <time.h>

//Function to provide a small delay
void delay(int numberOfSeconds){
    int milliseconds = 1000 * numberOfSeconds;
    clock_t start_time = clock();
    while (clock() < start_time + milliseconds);
}

//Function to spin stuff
void spinner(){
    char spinnerPositions[4] = {'|','/','-','\\'};

    int it0 = 0;
    while (1){
        printf("%c", spinnerPositions[it0]);
        it0 = (it0 + 1) % strlen(spinnerPositions);
        printf("\b");
        delay(1);
        fflush(stdout);
    }
}

int main(){
    spinner();
}