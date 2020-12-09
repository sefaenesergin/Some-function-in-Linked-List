#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Linked list in Data Structure with C.
//Created by Sefa Enes Ergin. For everyone...
struct node{
    int data;
    struct node * ptr;
};

int main(){
    
    struct node * first;//define node and give name him.
    first=(struct node *)malloc(sizeof(struct node));//for dynamic memory
    struct node * sec;
    sec=(struct node *)malloc(sizeof(struct node));
    struct node * thir;
    thir=(struct node *)malloc(sizeof(struct node));
    struct node * fourth;
    fourth=(struct node *)malloc(sizeof(struct node));

    first ->data=11;//assign  data
    first ->ptr=sec;//Go second data. Linking data.
                    
    sec ->data=22;
    sec ->ptr=thir;
                    
    thir ->data=33;
    thir ->ptr=fourth;
                    
    fourth ->data=44;
    fourth ->ptr=NULL;//no last member.
    
    
    printf("%d - %d - %d - %d",first->data, sec->data, thir->data,fourth->data);
}

