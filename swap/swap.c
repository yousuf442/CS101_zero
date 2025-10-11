#include<stdio.h>
int arr[5]= {  1, 2 , 3, 4, 5};
void fg ( );
void swap ();
int main()
{

fg ( );

 swap ();




}


void swap ( )
{
	for(int i=0;i<=4;i++)
	{
		printf("%d ", arr[4-i]);
	}

}
void fg ( )
{
        for(int i=0; i<=4; i++)
        {
                printf("%d ", arr[i]);
        }
}

