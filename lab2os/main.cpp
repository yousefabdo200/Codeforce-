#include<bits/stdc++.h>
using namespace std;
class process
{
    public: int Process_number ;
    public: int Arrival_time;
    public: int  Running_time;
    public: int  wateing_time;
    bool operator <(const process & obj) const
    {
        return Running_time<obj.Running_time ;
    }

};
int main()
{
    srand(time(0));
    int n;
    cin>>n;
    process p;
    queue<process>q;
    int s=0;
    for(int i=1 ;i<=n ;i++)
    {
        p.Process_number=i;
        p.Arrival_time=s;
        p.Running_time=1+(rand()%60);
        q.push(p);
        s=(1+(rand()%5))+p.Arrival_time;
    }
    //fcfs
    queue<process>service;
    service=q;
    int start=service.front().Arrival_time;
    float wating=0.0 ;
    cout<<"FCFS "<<endl<<"Pnumber "<<"Arrival time "<<"Running time "<<"waiting time"<<endl<<endl;
    while(!service.empty())
    {
        service.front().wateing_time=start-service.front().Arrival_time;
        cout <<"P" <<service.front().Process_number<<"         "<<service.front().Arrival_time<<"          "<<service.front().Running_time<<"          "<<service.front().wateing_time<<endl;
        start+=service.front().Running_time;
         wating+=service.front().wateing_time;
         service.pop();
    }
    cout<<"Average waiting Time is -> "<<wating/n<<endl;
    //Shortest Job First(preemetive)
    queue<process>sjfq;
    sjfq=q;
    list<process>sjf;
    while(!sjfq.empty())
    {
        p=sjfq.front();
        sjf.push_back(p);
        sjf.pop();
    }
    cout<<"Shortest Job First"<<endl<<"Pnumber "<<"Arrival time "<<"Running time "<<"waiting time"<<endl<<endl;
    cout <<"P"<<sjf.front().Process_number  <<"           "<< sjf.front().Arrival_time <<"           "<<sjf.front().Running_time<<"           "<<sjf.front().wateing_time<<endl;
    wating =sjf.front().wateing_time;
    start =sjf.front().Running_time;
    sjf.pop_front();
    sjf.sort();
    for (process x : sjf) {
        x.wateing_time=start-x.Arrival_time;
        cout <<"P"<<x.Process_number  <<"           "<< x.Arrival_time <<"           "<<x.Running_time<<"           "<<x.wateing_time<<endl;
        start+=x.Running_time;
        wating+=x.wateing_time;
	}
    cout<<"Average waiting Time is -> "<<wating/n<<endl;
	sjf.clear();
    return 0;
}
