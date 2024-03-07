#include<bits/stdc++.h>
using namespace std;
class process
{
    public: int Process_number ;
    public: int  Running_time;
    public: int  wateing_time;
    public: int  Turn_Around_Time;

    bool operator <(const process & obj) const
    {
        return Running_time<obj.Running_time ;
    }
};
int main()
{
    cout<<"****************************************Shortest Job First(Non-preemptive)**********************************************"<<endl;
    srand(time(0));
    int n;
    cout<<"enter process Number -> ";
    cin>>n;
    process p;
    queue<process>q;
    for(int i=1 ;i<=n ;i++)
    {
        p.Process_number=i;
        p.Running_time=1+(rand()%60);
        q.push(p);
    }
//Shortest Job First(Non-preemptive)
    queue<process>cq;
    list<process>sjf;
    cq=q;
    while(!cq.empty())
    {
        sjf.push_back(cq.front());
        cq.pop();
    }
    sjf.front().Turn_Around_Time=sjf.front().wateing_time+sjf.front().Running_time;
    cout<<endl<<"Pnumber "<<"|Running time| "<<"|waiting time| "<<"|Turn Around Time|"<<endl<<endl;
    cout <<"P"<<sjf.front().Process_number  <<"           "<<sjf.front().Running_time<<"           "<<sjf.front().wateing_time<<"           "<< sjf.front().Turn_Around_Time <<endl;
     int Turn_Around_Time=sjf.front().Turn_Around_Time;
     int start =Turn_Around_Time;
     int wating=0;
    sjf.pop_front();
    sjf.sort();
    for (process x : sjf) {
            x.wateing_time=start;
            x.Turn_Around_Time=x.wateing_time+x.Running_time;
            cout <<"P"<<x.Process_number  <<"           "<<x.Running_time<<"           "<<x.wateing_time<<"           "<< x.Turn_Around_Time <<endl;
            start+=x.Running_time;
            wating+=x.wateing_time;
            Turn_Around_Time+=x.Turn_Around_Time;
	}
    cout<<"Average waiting Time is -> "<<wating/n<<endl;
    cout<<" Turn Around Time is -> "<<Turn_Around_Time/n<<endl;
	sjf.clear();
    return 0;
}
