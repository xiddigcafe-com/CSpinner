//Written by A.Jama - Aug.2024
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


//Function to spin stuff
void spinner(){
    char spinnerPositions[4] = {'|','/','-','\\'};

    int it0 = 0;
    while (1){
        printf("%c", spinnerPositions[it0]);
        it0 = (it0 + 1) % strlen(spinnerPositions);
        printf("\b");
        sleep(1);
        fflush(stdout);
    }
}

int main(){
    spinner();
}