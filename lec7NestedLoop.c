# include <stdio.h>
int main( )
{
int r, c, sum ;
    for(r=1 ; r<=3 ;r++) // outer loop 
    {
        for (c=1; c<=2 ;c++ ){ // inner loop 
            sum = r+c ;
            printf( "r=%d c=%d sum=%d\n",r,c,sum);
        }
    }
return 0 ;
}
/* output
r=1 c=1 sum=2
r=1 c=2 sum=3
r=2 c=1 sum=3
r=2 c=2 sum=4
r=3 c=1 sum=4
r=3 c=2 sum=5
*/