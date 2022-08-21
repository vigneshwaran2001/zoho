#include<stdio.h>
int main(){
int n;
char ch;
while(scanf("%c%n",ch,n)==2)
{
while(n--){
printf("%c",ch);
}
}

}
