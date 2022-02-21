#include <stdio.h>

int main()
{
    
    int a[6],i,j,temp;
   
    a[0]=1;
    a[1]=4;
    a[2]=7;
    a[3]=3;
    a[4]=9;
    a[5]=2;
    
    for(i=0;i<=5;i++){
        for(j=0;j<5;j++){
            temp = a[j];
            if (a[j]>a[j+1] ){
                a[j]=a[j+1];
                a[j+1]=temp;
            
        }
        }
    }
    
    
    for(i=0;i<6;i++){      
        printf("%d \n",a[i]);    
    }
    return 0;
    
    
}
