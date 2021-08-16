/*Name: Mazhar Hussain    Registration No:20MDELE098
Email:20MDELE098@uetmardan.edu.pk */
/*program to convert a lower case alphabet to uppercase and using ASCII values */
#include<stdio.h>
int main(){
	char character;
	printf("enter any alphabet \n");
	scanf("%c",&character);
	if(('a'<=character) && ('z'>=character)){
		character=character-' ';
			printf("%c is an upper case character",character);
	}
	else if(('A'<=character) && ('Z'>=character)){
			character=character+' ';
		printf("%c is a lower case character",character);}
	else 
		printf("invalid character");
		return 0;
}
