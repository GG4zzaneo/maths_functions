#include <stdio.h>
int main()
{
	int a = 2, b = 4;
	
	printf("%i\n",add(a,b));
	printf("%i\n",sub(a,b));
	printf("%i\n",mul(a,b));
	printf("%i\n"),div(a,b));
	printf("%i\n"),mod(a,b));

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
