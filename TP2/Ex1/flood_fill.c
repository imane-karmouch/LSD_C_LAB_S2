#include"header.h"
void flood_fill(char** d, t_point T,t_point dim,char s, char p)
{
 if(T.n<0 || T.n>=dim.n || T.m<0 || T.m>=dim.m)
   return;
 if(d[T.n][T.m]==s){
        d[T.n][T.m]=p;
        flood_fill(d , (t_point){T.n+1,T.m} , dim, s , p);
        flood_fill(d , (t_point){T.n-1,T.m} , dim, s , p);
        flood_fill(d , (t_point){T.n,T.m+1} , dim, s , p);
        flood_fill(d , (t_point){T.n,T.m-1} , dim, s , p);  
  }
} 
  
  
  
  
