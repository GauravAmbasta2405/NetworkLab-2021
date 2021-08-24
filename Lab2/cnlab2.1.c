#include<stdio.h>
#include <string.h>
struct pkt{
char ch1;
char ch2[2];
char ch3;
};
struct pkt i;
void aggregate();
void display(char n[4])
{
    i.ch1=n[0];
    //n=n/10;
    i.ch2[0]=n[1];
    //n=n/10;
    i.ch2[1]=n[2];
    //n=n/10;
    i.ch3=n[3];
    printf("Digits-%c %c %c %c\n",i.ch1,i.ch2[0],i.ch2[1],i.ch3);
    aggregate();
}
void aggregate()  // for printing the original number
{
    char s[4];
    s[0]=i.ch1;
    s[1]=i.ch2[0];
    s[2]=i.ch2[1];
    s[3]=i.ch3;
    printf("%s",s);

}
void main()
{
    
    char n[4];
    printf("Enter a  four digit number\n");  
    scanf("%s",&n);
    display(n);        //function call
    
}
