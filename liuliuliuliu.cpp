#include<iostream>
#include<string>
using namespace std;
class calculator{
public:
bool equal(){}
bool equal(int m,int n){
if(m==n)
return true;
else
return false;
}
void add(int a,int c){
cout<<a+c<<endl;
}
void add(string a,string c){
cout<<a+c<<endl;
}
void minus(int a,int c){
cout<<a-c<<endl;
}
void minus(string a,string c){
	string::size_type t=-1;
	string b="";
	t=a.find(c);
	if(t!=-1)
	{
		for(int i=0;i<t;i++)
			b+=a[i];
		for(int i=t+c.length();i<a.length();i++)
			b+=a[i];
	}
	cout<<b<<endl;

}
int mul(int a,int c){
return a*c;
}
int div(int a,int c){
return a/c;
}
};
void input(int &a,int &c){
cout<<"��������������"<<endl;
cin>>a>>c;
}
void instr(string &a,string &c){
cout<<"��������������"<<endl;
cin>>a>>c;
}
void main()
{
	calculator ca;
int a;
int b;
int c;
string a_;
string c_;
while(1){
cout<<"��ѡ�����:"<<endl;
cout<<"1�ӷ�����"<<endl;
cout<<"2��������:"<<endl;
cout<<"3�˷�����:"<<endl;
cout<<"4��������:"<<endl;
cin>>b;
if(b==1)
{cout<<"��ѡ�����:"<<endl;
cout<<"1��������"<<endl;
cout<<"2�ַ�������:"<<endl;
cin>>b;
if(b==1)
{input(a,c);
ca.add(a,c);}
if(b==2)
{instr(a_,c_);
ca.add(a_,c_);}
}
if(b==2)
{cout<<"��ѡ�����:"<<endl;
cout<<"1��������"<<endl;
cout<<"2�ַ�������:"<<endl;
cin>>b;
if(b==1)
{input(a,c);
ca.minus(a,c);}
if(b==2)
{instr(a_,c_);
ca.minus(a_,c_);}
}
if(b==3)
{input(a,c);
cout<<ca.mul(a,c)<<endl;}
if(b==4)
{input(a,c);
cout<<ca.div(a,c)<<endl;}
}}
