
#include <stdio.h>
main()
{
float unit,rs,charge,amount;

printf(" Enter Unit To Calculate Bill : ");
scanf("%f",&unit);

if (unit<=50)
rs=unit*.50;

else if (unit>=50 && unit<=150 )
rs=(50*.50)+((unit-50)*.75);


else if (unit>=150 && unit <=250)
rs=(50*.50)+(100*.75)+((unit-150)*1.20);


else
rs=(50*.50)+(100*.75)+(100*1.20)+((unit-250)*1.50);


charge=rs/100*20;

amount=rs+charge;

printf("\n Your Bill Amount : %.2f ",amount);

return 0;
}
