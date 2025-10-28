 /*
 #include<stdio.h>
void main()
{
    for(int i=1;i<=5; i++ ){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }

}
 
 
 */
/*
  *  *  *  *  *  *  *  *  *
  *  *  *  *    *  *  *  *
  *  *  *        *  *  *
  *  *            *  *
  *                *
  *  *            *  *
  *  *  *        *  *  *
  *  *  *  *    *  *  *  *
  *  *  *  *  *  *  *  *  *


*/



/*

#include<stdio.h>
int main()
{
    int n=5;
    int x=n,y=n;
    for(int i=1;i<=n*2-1;i++)
    {
    for(int j=1;j<=n*2-1;j++){
        if(j<=x || j>=y ){
            printf("%3c",'*');
        }else{
            printf("%3c"," ");
        }
    }
       if(i<n){
        x--;
        y++;
      }else{
          x++;
          y--;
      }
    printf("\n");
  }
}
 
*/







/*

*  *  *  *  *  *  *  *  *
     *  *  *  *  *  *  *   
        *  *  *  *  *      
           *  *  *         
              *            
           *  *  *         
        *  *  *  *  *      
     *  *  *  *  *  *  *   
  *  *  *  *  *  *  *  *  *
 


*/




#include <stdio.h>

int main() {
    int n=5;
    int x=1,y=n*2-1;
    for(int i=1;i<=n*2-1;i++) {
      for(int j=1;j<=n*2-1;j++){
           if(j<x || j>y){
               printf("%3c", ' ');
           } else{
               printf("%3c",'*');
           }
      }
           if(i<n) {
            x++;
            y--;
           }else {
               x--;
               y++;
           }
      printf("\n");
      }


}





}