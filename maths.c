#include <stdio.h>
int main()
{

	int c,d,e,f,g, max, min;
	printf("Enter five numbers: ");
	scanf("%i, %i, %i, %i, %i", &c,&d,&e,&f,&g);

	if(c > d && c > e && c > f && c > g){
		max = c;
	} else if (d > c && d > e && d > f && d > g){
		max = d;
	} else if (e > c && e > d && e > f && e > g){
		max = e;
	} else if (f > c && f > d && f > e && f > g){
		max = f;
	} else if (g > c && g > d && g > e && g > f){
		max = g;
	{ else {
		printf("%i, %i, %i, %i, %i are all equal\n",c,d,e,f,g);
	}

	if(c < d && c < e && c < f && c < g){
		min = c;
	} else if (d < c && d < e && d < f && d < g){
		min = d;
	} else if (e < c && e < d && e < f && e < g){
		min = e;
	} else if (f < c && f < d && f < e && f < g){
		min = f;
	} else if (g < c && g < d && g < e && g < f){
		min = g;
	{ else {
		printf("%i, %i, %i, %i, %i are all equal\n",c,d,e,f,g);
	}

	printf("\nMax is %i and min is %i!!", max, min);

	int a = 2, b = 4;
	
	printf("%i\n",add(a,b));
	printf("%i\n",sub(a,b));
	printf("%i\n",mul(a,b));
	printf("%i\n"),div(a,b));
<<<<<<< HEAD
	printf("Hope you enjoyed!\n");
=======
	printf("%i\n"),mod(a,b));
>>>>>>> testing

	return 0;
}
int add(x,y){
	return x + y;
}
int sub(x,y){
return y - x;
}
int mul(x,y){
	return x * y;
}
int div(x,y){
	return y / x;
}
int mod(x,y){
	return y % x;
}
