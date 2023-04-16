#include <stdio.h>
#include <stdlib.h>

struct digit{ // Structure for LinkedList
    long data;
    struct digit *next;

};
struct digit *head = NULL;

char addDigit(long data){ // Function that takes datas in LinkedLists from root

    if(head==NULL){
        struct digit *new = (struct digit *)malloc(sizeof(struct digit));  // Makes spaces in LinkedList
        new->data = data;
        new->next = NULL; 

        head = new;
    }
    else {
        struct digit *new = (struct digit*)malloc(sizeof(struct digit));	// Makes spaces in LinkedList
        new->data = data;
        new->next = head; 
        head = new;
    }
    return 0;
}

int main(){

    int i = 0;

	struct digit *index = head;
    char number[100];
    gets(number);	// Takes first number

    while(isdigit(number[i])){  // Check the every char for LinkedList

        addDigit(number[i]);
        i++;
    }

    while(head != NULL){
    printf("%c", head->data);

    head = head->next;
    }

    printf("\n");
    
    char number2[100];
    fflush(stdin);  // Clear Buffer
    gets(number2);	// Takes second number
    long l = 0;
    
    while(isdigit(number2[l])){  // Check the every char for LinkedList

        addDigit(number2[l]);
        l++;
    }

    while(head != NULL){
    printf("%c", head->data);

    head = head->next;
    }
	
    return 0;
}
       
