#include <stdio.h>
int main()
{
	int a = 2, b = 4;
	
	printf("%i\n",add(a,b));
	printf("%i\n",sub(a,b));
	print("%i\n",mul(a,b));

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
