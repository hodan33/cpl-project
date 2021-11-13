#include<stdio.h>
#include<stdlib.h>

void encryption (){
		char array [100];
	printf("please entre the string  : ");
	scanf("%s", &array);
	for (int i=0; i<100 && array[i]!='\0';i++)
	{
		if (array[i]==' ')
		{continue;
		}
		array[i]=array[i]+3;
	}
	printf("%s\n",array);

}
void decryption (){
	char array2 [100];
	printf("please entre the string  : ");
	scanf("%s", &array2);
	for(int j=0;j<100 && array2[j]!='\0';j++)
	{
		if(array2[j]==' ')
		{
			continue;
		}
		array2[j]=array2[j]-3;
	}
	printf("%s",array2);

}
int main()
{
    int x=0 , y  ;

        while (x=0) {


            printf("press 1 if you want to encryption\n");
            printf("press 2 if you want to decryption\n");
            printf("press 3 if you want to exit \n");
            scanf("%d", &y);
            if (y == 1) {
                encryption();
            } else if (y == 2) {
                decryption();


                }
            else if (y == 3)  {
               void exit(int EXIT_FAILURE) ;
            } else {
                printf("you entre a wrong num  ");
            }
        }
	return 0;
}