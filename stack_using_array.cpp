#include<bits/stdc++.h>

#define vi vector<int>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define ll long long int
using namespace std;

#define MAX 1000

class Stack {
    int top;

public:
    int a[MAX];
    Stack() {top=-1;}
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if(top >= MAX-1){
        cout<<"Stack Overflow";
        return false;
    }
    else{
        a[++top] = x;
        cout<<x<<" Pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if(top<0){
        cout<<"Stack Overflow";
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}

int Stack::peek()
{
    if(top<0){
        cout<<"Stack Overflow";
        return 0;
    }
    else{
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return(top<0);
}

int main()
{
    optimize();

    Stack s;
    s.push(5);
    s.push(10);
    s.push(45);
    s.push(11);

    while(!s.isEmpty()){
        cout<<s.peek()<<endl;
        s.pop();
    }

    return 0;
}