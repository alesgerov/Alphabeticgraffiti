#include <stdio.h>

int main() {
    int input,input2;
    char a;
    a='a';
    scanf("%d",&input);
    input2=input;
    for (int i = 0; i <input ; ++i) {
        for (int j = 0; j !=1 ; ++j) {
            printf("%c",a);
        }
        for (int j = input2-1; j > 0; --j) {
            printf(" ");

        }

        for (int j = 0; j <=i ; ++j) {
            printf("%c",a+j);
        }
        printf("\n");
        input2--;
    }
    return 0;
}
