#include <stdio.h>

int UCLN(int a, int b);
 
int main (){
	int a, b;
	printf("Uoc chung lon nhat cua 2 so a va b la: \n");
		
} 
int UCLN(int a, int b){
	while (a != b){
		if(a < b){
			int temp = a;
			a = b;
			b = temp;
		}
		int temp = a -b;
		a=b;
		b=temp;
	}
return a;
}

