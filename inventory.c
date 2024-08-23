#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    char category[30];
    int quantity;
    float price;
    float disconutPercentage;
}Product;
const int arraysize=100;
void DelectProduct();

void UpdateProductQuantity(){
    int j;
    int i;
    Product product1[arraysize];
    printf("Enter your update product ID");
    scanf("%d",&j);
    for(i=0;i<100;i++){
        if(product1[i].id==j){
            printf("Enter the New Quantity");
        }
    }
}