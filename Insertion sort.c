int main()
{
    
    int a[6],i,j,temp;
   
    a[0]=1;
    a[1]=4;
    a[2]=7;
    a[3]=3;
    a[4]=9;
    a[5]=2;
    for(i=1;i<6;i++){
        j=i-1;
        temp = a[i];
        while (temp<a[j] &&j>=0){
            a[j+1]=a[j];
            j=j-1;
            
        }
        a[j+1]=temp;
    }
    for(i=0;i<6;i++){      
        printf("%d \n",a[i]);    
    }
    return 0;
    
    
}
