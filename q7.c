#include <stdio.h>

void inputRuns(int runs[]) {
	int i;
    printf("Enter runs of 11 players:\n");
    for(i = 0; i < 11; i++) {
        scanf("%d", &runs[i]);   // normal input ok
    }
}

int totalRuns(int *arr) {
    int total = 0;
    int i;
    for(i = 0; i < 11; i++) {
        total += *(arr + i);     // pointer used here
    }
    return total;
}

float averageRuns(int *arr) {
    int total = totalRuns(arr);  
    return total / 11.0;         
}

int highestScorer(int *arr) {
    int max = *arr;              
    int index = 0;
	int i;
    for(i = 1; i < 11; i++) {
        if( *(arr + i) > max ) { 
            max = *(arr + i);
            index = i;
        }
    }
    return index;                
}

int main() {
    int runs[11];

    inputRuns(runs);

    int total = totalRuns(runs);
    float average = averageRuns(runs);
    int highIndex = highestScorer(runs);

    printf("\nTotal Runs = %d\n", total);
    printf("Average Runs = %.2f\n", average);
    printf("Highest Scorer: Player %d with %d runs\n",
           highIndex + 1, runs[highIndex]);   

    return 0;
}

