#include<bits/stdc++.h>
using namespace std;
class process
{
    public: int Process_number ;
    public: int Arrival_time;
    public: int  Running_time;
};
void display_q(queue<process>q,string name )
{

    int i=1;
    queue<process>copy;
    copy=q;
    cout<<name<<endl<<"  "<<"Process number "<<"Arrival time "<<"Running time "<<endl<<endl;
    while(!copy.empty())
    {
        cout<< i <<"         " <<copy.front().Process_number<<"         "<<copy.front().Arrival_time<<"          "<<copy.front().Running_time<<endl;
        copy.pop();
        i++;

    }
}
void display_s(stack<process>s,string name )
{

    int i=1;
    stack<process> copy;
    copy=s;
    cout<<name<<endl<<"  "<<"Process number "<<"Arrival time "<<"Running time "<<endl<<endl;
    while(!copy.empty())
    {
        cout<< i <<"         " <<copy.top().Process_number<<"         "<<copy.top().Arrival_time<<"          "<<copy.top().Running_time<<endl;
        copy.pop();
        i++;
    }
}
int main()
{
    srand(time(0));
    int n;
    cin>>n;
    process p;
    queue<process>q1;
    queue<process>q2;
    stack<process>s1;
    queue<process>q3;
    stack<process>s2;
    queue<process>q4;
    int s=0;
    for(int i=1 ;i<=n ;i++)
    {
        p.Process_number=i;
        p.Arrival_time=s;
        p.Running_time=1+(rand()%60);
        q1.push(p);
    }
    while(!q1.empty())
        {
            int r=1+(rand()%4);
            p.Process_number=q1.front().Process_number;
            p.Arrival_time=q1.front().Arrival_time;
            p.Running_time=q1.front().Running_time;
            q1.pop();
            if(r==1)
            {
                q2.push(p);
            }
            else if(r==2)
            {
                s1.push(p);
            }
            else if(r==3)
            {
                q3.push(p);
            }
            else
            {
                s2.push(p);
            }
        }
    display_q(q2,"queue2");
    display_s(s1,"stack1");
    display_q(q3,"queue3");
    display_s(s2,"stack2");
while(!q2.empty()||!s1.empty()||!q3.empty()||!s2.empty())
{
    int r=1+(rand()%4);
    if(r==1&&!q2.empty())
        {
            p.Process_number=q2.front().Process_number;
            p.Arrival_time=1+(rand()%20);
            p.Running_time=q2.front().Running_time;
            q2.pop();
            q4.push(p);
        }
    else if(r==2&&!s1.empty())
        {
            p.Process_number=s1.top().Process_number;
            p.Arrival_time=1+(rand()%20);
           p.Running_time=s1.top().Running_time;
            s1.pop();
            q4.push(p);
        }
    else if(r==3&&!q3.empty())
        {
            p.Process_number=q3.front().Process_number;
           p.Arrival_time=1+(rand()%20);
            p.Running_time=q3.front().Running_time;
            q3.pop();
            q4.push(p);
        }
    else if(r==4&&!s2.empty())
        {
            p.Process_number=s2.top().Process_number;
            p.Arrival_time=1+(rand()%20);
            p.Running_time=s2.top().Running_time;
            s2.pop();
            q4.push(p);
        }
        }
      display_q(q4,"queue4");
    return 0;
}
