#include<iostream>
#include<cstdio>
 
using namespace std;
 
int main()
{
char str[100];
int i,count=1;
cout<<"Enter a string:";
gets(str);
for(i=0;str[i]!='\0';++i)
{
if(str[i]==' ')
count++;
}
cout<<"\nThere are "<<count<<" words in the given string";
 
return 0;
}