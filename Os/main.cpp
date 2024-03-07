#include<bits/stdc++.h>
using namespace std;
class process
{
    public: int Process_number ;
    public: int  Running_time;
    public: int  wateing_time;
    public: int  Turn_Around_Time;
};
int main()
{
    cout<<"***************************************** First Come First Service (FCFS)**********************************************"<<endl<<endl;
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
    //fcfs
    queue<process>service;
    service=q;
    float wating=0.0 ;
    int start=0;
    float Turn_Around_Time=0.0;
    cout<<"Pnumber "<<"|Running time| "<<"|waiting time| "<<"|Turn Around Time|"<<endl<<endl;
    while(!service.empty())
    {
        service.front().wateing_time=start;
        service.front().Turn_Around_Time=service.front().Running_time+service.front().wateing_time;
        cout <<"  P" <<service.front().Process_number<<"          "<<service.front().Running_time<<"              "<<service.front().wateing_time<<"               "<<service.front().Turn_Around_Time<<endl;
        start+=service.front().Running_time;
         wating+=service.front().wateing_time;
         Turn_Around_Time+=service.front().Turn_Around_Time;
         service.pop();
    }
    cout<<"Average waiting Time is -> "<<wating/n<<endl;
    cout<<" Turn Around Time is -> "<<Turn_Around_Time/n<<endl<<endl;
    return 0;
}
