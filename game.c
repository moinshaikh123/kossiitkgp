/*
Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:
1)There are 21 matchsticks.
2)The computer asks the player to pick 1, 2, 3, or 4
matchsticks.
3)After the person picks, the computer does its picking.
Whoever is forced to pick up the last matchstick loses the game.
*/


#include<stdio.h>
int main()
{
	int i=21,t=0;

	while(i>=2 && i<=21 && t<5)
	{
		printf("\nenter the number of matchsticks you want to collect.(not more than 4)\n");
		scanf("%d",&t);
		i=i-t;
		if(i==20)
		{

			printf("\ncomputer has collected ,therefore %d matchsticks are remaining",i-4);
		i=i-4;}
		else if(i==19)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining",i-3);
		i=i-3;}
	    else if(i==18)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining",i-2);
		i=i-2;}
		else if(i==17)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining",i-1);
		i=i-1;}
		else if(i==15)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining",i-4);
		i=i-4;}
		else if(i==14)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining",i-3);
		i=i-3;}
	    else if(i==13)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining",i-2);
		i=i-2;}
		else if(i==12)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining",i-1);
		i=i-1;}
		else if(i==10)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining",i-4);
		i=i-4;}
		else if(i==9)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining",i-3);
		i=i-3;}
	    else if(i==8)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining",i-2);
		i=i-2;}
		else if(i==7)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining",i-1);
		i=i-1;}
		else if(i==5)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining and you lose",i-4);
		i=i-4;}
		else if(i==4)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining and you lose",i-3);
		i=i-3;}
		else if(i==3)
		{

			printf("\ncomputer has collected  ,therefore %d matchsticks are remaining and you lose",i-2);
		i=i-2;}
		else if(i==2)
		{

			printf("\ncomputer has collected ,therefore %d matchsticks are remaining and you lose",i-1);
		i=i-1;
		}

	}
}
