#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float a,b,s,m,si,si2,p,d;
	
	char signe;
	printf("donnez la premier nombre:\n");
	scanf("%f",&a);
		printf(" donnez le signe : ");
	scanf("%s",&signe);  
	printf("donnez la deuxieme nombre:\n");
	scanf("%f",&b);

	
	if(signe== '+'){
		s=a+b;
		printf ("le somme des nombres %.2f  et %.2f est :\n= %.2f",a,b, s);}
     else if (signe== '-'){
    m= a-b;
    	printf ("le moin des nombres %f et %f est :\n= %.2f",a,b, m);
	 }
	 else if (signe=='*'){
	 p= a*b;
	 	printf ("le prouduit des nombres %f et %f est :\n= %.2f",a,b, p);
	 }
	 else if (signe == '/'){
	 d = a/b;
	 	printf ("la devision des nombres %f et %f est :\n= %.2f",a,b, d);	
	 }
	else if (signe == 's'){
		si=sin (a);
		si2=sin (b);
		printf(" le sin de nombre %f et %f est: %lf et  %lf " ,a,b,si,si2);	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
