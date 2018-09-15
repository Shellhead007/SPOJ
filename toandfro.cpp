//revise it important
#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	
	std::ios::sync_with_stdio(false);
 int i,j,k,n;
 char s[205];
 while(1){
  scanf("%d",&n);
  if(n==0)
   break;
  scanf("%s",s);
  int l=strlen(s)/n;
  char a[l][n];
  k=0;
  for(j=0;j<l;j++)
  {
   if(j%2!=0){
    for(i=n-1;i>=0;i--)
    {
     a[j][i]=s[k++];
    }
   }
   else
   {
    for(i=0;i<n;i++)
    {
     a[j][i]=s[k++];
    }
   }
  }
  for(i=0;i<n;i++)
  {
   for(j=0;j<l;j++){
    printf("%c",a[j][i]);
   }
  }
  printf("\n");
 }
 return 0;
}

