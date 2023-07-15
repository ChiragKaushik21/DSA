#include<bits/stdc++.h>
using namespace std;
bool isCb(long long int s)
{  if(s==0 ||s==1)
    return false;
   int cb[]={2,3,5,7,11,13,17,19,23,29};
   for(int i=0;i<10;i++)
   {
       if(s==cb[i])
       {
           return true;
       }
   }
    for(int i=0;i<10;i++)
   {
       if(s%cb[i]==0)
       {
           return false;
       }
   }
return true;
}
bool isvalid(int *visited,string str,int start,int end)
{
    for(int i=start;i<end;i++)
    {
        if(visited[i]==1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int visited[s.length()];
    for(int i=0;i<s.length();i++)
    {
        visited[i]=0;
    }
    int cnt=0;
    for(int i=1;i<=s.length();i++)
    {
        for(int j=0;j+i-1<s.length();j++)
        {
                string str=s.substr(j,i);
			
                if(isCb(stoll(str)) and isvalid(visited,str,j,j+i))
                {
                    cnt++;
                    for(int k=j;k<j+i;k++)
                    {
                        visited[k]=1;
                    }
                }
    
        }
    }
    cout<<cnt;
    return 0;
}