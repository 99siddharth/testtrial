#include <iostream>
#include<string>
using namespace std;
int main() 
{
   
    int i,strlen1,flag=1,count=0,size;
    cin>>size;
    label:
    char str[100]="NULL";
    cin>>str;
	flag=1;
    //strlen1=str.length();
    for(i=0;i<100;i++)
    {
      if(str[0]=='a')
      {
        if(str[i]=='a')
        {
            if(str[i+1]=='a'||str[i+1]=='b')
            {
                continue;
            }
            else
            {
                flag=0;
                break;
            }
        }
        else if(str[i]=='b')
        {
            if(str[i+1]=='b')
            {
                continue;
            }
            else if(str[i+1]=='a'||str[i+1]=='c'||str[i+1]=='d'||str[i+1]=='e'||str[i+1]=='f'||str[i+1]=='g'||str[i+1]=='h'||str[i+1]=='i'||str[i+1]=='j'||str[i+1]=='k'||str[i+1]=='l'||str[i+1]=='m'||str[i+1]=='n'||str[i+1]=='o'||str[i+1]=='t'||str[i+1]=='p'||str[i+1]=='q'||str[i+1]=='r'||str[i+1]=='s'||str[i+1]=='t'||str[i+1]=='u'||str[i+1]=='v'||str[i+1]=='w'||str[i+1]=='x'||str[i+1]=='y'||str[i+1]=='z')
            {
                flag=0;
                break;
            }
            else
                continue;
        }
        else
            continue;
       }
    }

    if(flag==1)
    {
        //cout<<"\nYes";
        count=count+1;
    }
    else if(flag==0)
    {
	//cout<<"\nNo";
        count=count+0;
    }
	else
	{
	}
    
	size=size-1;
    
	if(size>0)
	        goto label;
	    else
	        cout<<count;
       
    return 0;
}
