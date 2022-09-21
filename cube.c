# include<stdio.h>
int main(){
int n;
void cube(int n);
printf( " enter no : \n");
scanf(" %d",&n);
cube(n);
return 0;
}
void cube( int n){
    for(int i=1; i<=n;i++)
    { 
        printf(" cube is %d \n", i*i);
    }
}
