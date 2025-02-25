// //Insertion sort is a sorting algorithm that places an unsorted 
// element at its suitable place in each iteration.
// Insertion sort works similarly as we sort cards in our hand in a card game.
// We assume that the first card is already sorted then, we select an unsorted card. 
// If the unsorted card is greater than the card in hand, it is placed on the right otherwise,
//  to the left. In the same way, other unsorted cards are taken and put in their right place.
// A similar approach is used by insertion sort.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,n,key;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
          
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        
    while(j>=0 && key<a[j]){
        a[j+1]=a[j];
        j--;
       }
        
        a[j+1]=key;
        
        for(int z=0;z<n;z++){
            printf("%d ",a[z]);
        } printf("\n");
    }
    return 0;
}
