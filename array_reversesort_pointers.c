#include <stdio.h>

void reverseArray(int take_array[],int no){
    int* i = & take_array[0];
    int* j = & take_array[no-1];

    int temp;

    for(int x = 0;x<no/2;x++){
        temp = *i;
        *i = *j;
        *j = temp;
        i++;
        j--;
    }

    for(int x=0;x<no;x++){
        printf("%d\t", take_array[x]);
    }

}


int main(){

    int arr[5]={45,76,32,8,100};
    int n= sizeof(arr)/sizeof(int);

   reverseArray(arr,5);



    return 0;
}







 
