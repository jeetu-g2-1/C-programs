#include<stdio.h>
#include<time.h>
int main(){
    time_t tr;
    time(&tr);
    printf("%s",ctime(&tr));
}
