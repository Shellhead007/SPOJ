#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
   return b==0?a:GCD(b,a%b);
}

int main() 
{
   ios::sync_with_stdio(false);
   
   int t,num,den,gcd;
   char str[15];
   int counter=0;
   cin>>t;
   
   while(t--)
   {
      num=0;	
      counter=0;
      cin>>str;
      
      int len=strlen(str);
      
      /*Finding the number of 
      digits after decimal and
      at the same time converting 
      string to integer without
      decimal (numerator)*/
      for(int i=0;i<len;++i)
      {
         if(str[i]=='.')
            break;
         num	= num*10 + (str[i]-'0');
         counter++;	
      }
      
      /*completing the conversion to
      integer from string (numnerator)*/
      for(int i=counter+1;i<len;++i)
         num = num*10 + (str[i]-'0');
      
      den=pow(10,len-counter-1);
      
      if(counter==len)
         den=1;
      
      gcd=GCD(num,den);
      /*Final Answer*/
      cout<<den/gcd<<"\n";
      
   }	
   return 0;
}
