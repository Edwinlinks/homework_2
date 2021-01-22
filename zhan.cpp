#include<iostream>
using namespace std;
#define MAXSIZE 100
typedef struct{
int data[MAXSIZE];
int top;

}sqstack;

bool Empty_Stack(sqstack &S);
bool PushStack(sqstack &S,int a);
bool IsNull(sqstack S);
bool PushStack(sqstack &S,int a);
int Top_element(sqstack S);
bool PopStack(sqstack &S);
bool show(sqstack S);




int main(){
 sqstack S;
 Empty_Stack(S); 
 int a[10]={0,1,2,3,4,5,6,7,8,9};
 for(int i=0;i<9;i++)
{
 PushStack(S,a[i]); 

}

 show(S);



}
bool Empty_Stack(sqstack &S)
{
 S.top = -1;
 return true;
}
 
bool IsNull(sqstack S)
{
 if (S.top >= 0)
 {
  return true;
 }
 return false;
}
 
//进栈
bool PushStack(sqstack &S,int a)
{
 if (S.top >= MAXSIZE-1) //溢出检查
 {
  cout<<"栈溢出"<<endl;
  return false;
 }
 S.data[S.top+1] = a;
 S.top += 1;//指向下一个
 return true;
}
 
//出栈
bool PopStack(sqstack &S)
{
 if (S.top <= 0)
 {
  cout<<"越界"<<endl;
  return false;
 }
 S.top -= 1;
 return true;
}
 
//取栈顶元素，不改变栈本身
int Top_element(sqstack S)
{
 if (IsNull(S))
 {
  return S.data[S.top];
 }
 else
 {
  cout<<"空栈";
  return 0;
 }
  
}
//显示整个栈
bool show(sqstack S)
{
 
 if (IsNull(S))
 {
  for (int i = 0;i <= S.top;++i)
  {
   cout<<S.data[i]<<" ";
  }
  return true;
 }
 else
 {
  cout<<"empty";
  return false;
 }
}









