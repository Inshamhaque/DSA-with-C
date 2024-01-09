#include<iostream>
#include<stack>
using namespace std;
int isoperator(char ptr){
    if(ptr=='*'||ptr=='+'||ptr=='-'||ptr=='/'){
        return 1;
    }
    return 0;
}
int precedence(char ptr){
    if(ptr == '/'||ptr=='*'){
        return 2;
    }
    else{
        return 1;
    }
}
string intopo(string infix){
    string  postfix;
    stack <char> s;
    int i = 0 , j= 0;
    while(infix[i]!='\0'){
        if(isoperator(infix[i])!=1)
        {
            postfix[j] = infix[i];
            i++;
            j++; 
        }
        else if(isoperator(infix[i])&&(s.empty()||precedence(infix[i])>s.top())){
            s.push(infix[i]);
            i++;
        }
        else{
            while(s.empty()!=1 && precedence(infix[i])<precedence(s.top())){
                postfix[j] = s.top();
                j++;
                s.pop();
            }
            s.push(infix[i]);
            i++;
        }
    }
    return postfix;
}
int main()
{
    string infix = "a+b/c*d";
    cout<<intopo(infix);
    return 0;
}