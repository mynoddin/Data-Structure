/* https://github.com/mynoddin/ */
#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int box[SIZE],top=0;

void push(int num){
    if(top>=SIZE){
        printf("Your stack is full.\n");
    }
    else{
        box[top] = num;
        top++;
    }

}

void pop(){
    if(top<=0){
        printf("Your stack is empty!");
    }
    else{
        top--;
    }
}

void stack_element(){
    int i;
    printf("Stack elements : \n");
    for(i=0; i<top; i++){
        printf("%d\n",box[i]);
    }
}


int main(){
    int choice,num;

    while(true){
        printf("What do you want to do with  a stack? \n");
        printf("1. PUSH\n2. POP\n3. Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: scanf("%d",&num);
                    push(num);
                    stack_element();
                    break;
            case 2: pop();
                    stack_element();
                    break;
            case 3: exit(0);
        }
    }
    return 0;
}
