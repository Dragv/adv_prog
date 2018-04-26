#include <stdio.h>

int main(){
    int data[3] = {235, 140, 4};

    if(data[0] <= 127){
        printf("True");
    } else if (data[0] <= 223){
        if(data[1] <= 191 && data[1] >= 128){
            printf("True");
        } else {
            printf("False");
        }
    } else if (data[0] <= 239){
        if((data[1] <= 191 && data[1] >= 128) && (data[2] <= 191 && data[2] >= 128)){
            printf("True");
        } else {
            printf("False");
        }
    } else {
        printf("False");
    }
}