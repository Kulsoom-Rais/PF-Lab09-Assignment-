#include <stdio.h>

int isVowel(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
}

void replaceVowels(char arr[3][20]) {
	int i,j;
    for(i=0;i<3;i++){
        for(j=0; arr[i][j] != '\0'; j++){
            if(isVowel(arr[i][j])){
            arr[i][j] = '*';	
			} 
        }
    }
}

int main() {
    char arr[3][20];
	int i;
    printf("Enter 3 strings:\n");
    for(i=0;i<3;i++) scanf("%s", arr[i]);

    replaceVowels(arr);

    printf("\nAfter replacement:\n");
    for(i=0;i<3;i++) printf("%s\n", arr[i]);

    return 0;
}

