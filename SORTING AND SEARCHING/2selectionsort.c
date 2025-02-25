//Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places that element
// at the beginning of the unsorted list

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,n,swap,place;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
                 for(int z=0;z<n;z++){
                    printf("%d ",a[z]);
                    }
                     printf("\n");
    
    for(i=0;i<n-1;i++){
        place =i;
        for(j=i+1;j<n;j++){
            if(a[place]>a[j]){
                place=j;
            }
            
        }
        if(place!=i){
                swap=a[i];
                a[i]=a[place];
                a[place]=swap;
            }
                 for(int z=0;z<n;z++){
                    printf("%d ",a[z]);
                    }
        printf("\n");
    }
    
    
    return 0;
}
