#include <stdio.h>
#include<stdlib.h>
#include<math.h>  
typedef struct accountnumber {
  int acc ; 
  int amount ; 
}acc;

int main ()
{

acc acc1 = {1234,500};
acc acc2 = {1234,1000};
printf("acount no. is %d and amount is %d\n", acc1.acc,acc1.amount );
printf("acount no. is %d and amount is %d\n", acc2.acc,acc2.amount );

 return 0 ; 
}
