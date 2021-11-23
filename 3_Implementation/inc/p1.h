#ifndef _SYSTEM_H
#define _SYSTEM_H
#include<stdio.h>
#include<stdlib.h>
char name[30];
int userScore=0,countQ=0;
void calculateScore()
{
    if (userScore >= 80&&userScore <= 100)
    {
	printf("\nCongrats! %s You are win the quiz.\n",name);
	printf("you got %d numbers.\n",userScore);
	printf("your %d Question in correct.\n",countQ);
    }
 else if(userScore >= 60&&userScore < 80)
    {
	printf("Congrats! %s You are win the quiz.\n",name);
	printf("you got %d numbers.\n",userScore);
	printf("your %d Question in correct.\n",countQ);
    }
    else if(userScore >= 40&&userScore < 60)
    {
	printf("Congrats! %s You are win the quiz.\n",name);
	printf("you got %d numbers.\n",userScore);
	printf("your %d Question in correct.\n",countQ);
    }
    else if(userScore >= 10&&userScore < 40)
    {
	printf("Sorry! %s You are loose the quiz.\n",name);
	printf("you got %d numbers.\n",userScore);
	printf("your %d Question in correct.\n",countQ);
	printf("*******Better luck lext time*********\n"); 
    }
    exit(0);
}
char result(char choose,char correct)
{
    char next;
    if (choose==correct)
    {
	countQ++;
	userScore=userScore+10;
	printf("Answer is correct!\n");
	printf("Press (Y) to continue Quiz ");
	printf("If you want to end this Quiz then press (N)\n");
	fflush(stdin);
	scanf("%c",&next);
	return(next);
    }else
    {
	printf("Sorry Answer is wrong!\n");
	printf("Press (Y) to continue Quiz ");
	printf("If you want to end this Quiz then press (N)\n");
	fflush(stdin);
	scanf("%c",&next);
	return(next);
    }
}
void question()
{
    char choose,correct;
    printf("1.Q-what is capital of japan?\n");
    printf("\t(A).Delhi\t(B).Seoul\n");
    printf("\t(C).Tokyo\t(D).Beijing\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='c';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("2.Q-What is the largest crop produced in India??\n");
    printf("\t(A).Rice\t(B).Wheat\n");
    printf("\t(C).Maize\t(D).Corn\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='a';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("3.Q-What is National Game of India??\n");
    printf("\t(A).Cricket\t(B).Hockey\n");
    printf("\t(C).Foot ball\t(D).Basket ball\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='b';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("4.Q-who is known as Iron Man of  India??\n");
    printf("\t(A).Nehru\t(B).Gandhi\n");
    printf("\t(C).Rabindranath Tagore\t(D).Vallabhai patel\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='d';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("5.Q-Who wrotw National Anthem of India?\n");
    printf("\t(A).Akbar\t(B). Gandhi\n");
    printf("\t(C).Rabindranath Tagore\t(D).Sachin Tendulkar\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='c';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("6.Q-Where is Hawa Mahal located?\n");
    printf("\t(A).Jaipur\t(B).Hyderabad\n");
    printf("\t(C).Mysore\t(D).Chennai\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='a';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("7.Q-Where is charminar located?\n");
    printf("\t(A).Delhi\t(B).Hyderabad\n");
    printf("\t(C).Amaravati\t(D).Mumbai\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='b';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("8.Q-Who was the first women president of India?\n");
    printf("\t(A).JK Rowling\t(B).Prathiba Patil\n");
    printf("\t(C).Sabitha Indra\t(D).Indira Gandhi\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='b';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("9.Q-where is sun temple located?\n");
    printf("\t(A).Tamil Nadu\t(B).Kerala\n");
    printf("\t(C).Orissa\t(D).Maharashtra\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='c';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("10.Q-How many states are there in India?\n");
    printf("\t(A).30\t(B).26\n");
    printf("\t(C).28\t(D).29\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='d';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    calculateScore();
}
void menu()
{
    char ch;
    printf("\nHello! Mister %s\n",name);
    printf("Here are some rules of this Game.\n");
    printf("1. You can choose any option.\n");
    printf("2. You need to answer 10 question\n");
    printf("3. Every question is 10 number\n");
    printf("4.Total number is 100\n");
    printf("5. We decide you win the quiz or not\n");
    printf("Press (Y) for start quiz otherwise press (N)\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
	question();
	calculateScore();
    }else
    {
	exit(0);
    }
}
#endif