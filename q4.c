#include <stdio.h>

void searchElement(int (*arr)[3], int key) {
	int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if( *(*(arr + i) + j) == key ) {   
                printf("Found at Row %d, Column %d\n", i+1, j+1);
                return;
            }
        }
    }
    printf("Element not found.\n");
}

int main() {
    int arr[3][3];
    int key;
	int i,j;
    printf("Enter 3x3 matrix:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", (*(arr + i) + j));    
        }
    }

    printf("Enter value to search: ");
    scanf("%d", &key);

    searchElement(arr, key);

    return 0;
}

