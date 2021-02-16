#include <bits/stdc++.h>
using namespace std;

void minimize(string str,int k ,string &result)
{
	if(k==0)
	{
		result.append(str);
		return;
	}	
	if(k>=str.length())
		return;

	int minimum=0;
	for(int i=0;i<=k;i++)
	{
		if(str[i]<str[minimum])
		minimum=i;
	}

	result.push_back(str[minimum]);
	cout<<minimum<<" "<<result<<" ";
	string new_str=str.substr(minimum+1,str.length()-minimum-1);
	cout<<new_str<<endl;
	minimize(new_str,k-minimum,result);

}

int main()
{
	string str = "1001";
	int k = 2;
	string res="";
	minimize(str,k,res);
	cout<<res;	
}
