#include <stdio.h>

void recordStatus(int wards[3][5]) {
    printf("Enter bed status (1=occupied, 0=empty): ");
    int i, j;
    for(i=0;i<3;i++){
        printf("\n Ward %d: ", i+1);
        for(j=0;j<5;j++){
            scanf("%d", &wards[i][j]);
        }
    }
}

void countBeds(int wards[3][5], int *occ, int *emp) {
    *occ = 0;
    *emp = 0;
	int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            if(wards[i][j] == 1) (*occ)++;
            else (*emp)++;
        }
    }
}

int main() {
    int wards[3][5];
    int occupied, empty;
	int i,j;
    recordStatus(wards);
    countBeds(wards, &occupied, &empty);

    printf("\nBed Status\n");
    for(i=0;i<3;i++){
        printf("Ward %d: ", i+1);
        for(j=0;j<5;j++){
            printf("%d ", wards[i][j]);
        }
        printf("\n");
    }

    printf("\nOccupied: %d\nEmpty: %d\n", occupied, empty);

    return 0;
}

