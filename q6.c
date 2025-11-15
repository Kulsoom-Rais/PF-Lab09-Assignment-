#include <stdio.h>

void takeAttendance(int att[4][5]){
	int i,j;
    for(i=0;i<4;i++){
    	printf("Enter 1 for present or 0 for absent \n");
        printf("Student %d: ", i+1);
        for(j=0;j<5;j++){
            scanf("%d", &att[i][j]);
        }
    }
}

int calcPercentage(int row[]){
    int total = 0;
    int i;
    for(i=0;i<5;i++) total += row[i];
    return (total * 100) / 5;
}

int main(){
    int att[4][5];
	int i;
    takeAttendance(att);

    printf("\nAttendance Report:\n");
    for(i=0;i<4;i++){
        int p = calcPercentage(att[i]);
        printf("Student %d: %d%%", i+1, p);
        if(p < 75) printf("last Warning for you!");
        printf("\n");
    }

    return 0;
}

