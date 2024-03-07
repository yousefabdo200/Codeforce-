#include <bits/stdc++.h>
using namespace std;
class process
{
    public:
     int Process_number ;
     int  Running_time;
     int  wateing_time;
     int  Arrival_time;
     bool operator <(const process & obj) const
    {
        return Running_time<=obj.Running_time ;
    }
};
int main()
{
    cout<<"****************************************Shortest Job First(preemptive) **********************************************"<<endl;
    list<process>srf;
    srand(time(0));
    int n;
    cout<<"enter process Number -> ";
    cin>>n;
    int t=1;
    int ave=0;
    process p;
    for(int i=1 ;i<=n ;i++)
    {
        p.Process_number=i;
        p.Running_time=1+(rand()%60);
        if(i==1)
            p.Arrival_time=0;
        else

            p.Arrival_time=srf.back().Arrival_time+i;

        srf.push_back(p);
    }
    list<process>::iterator it=srf.begin();
    list<process>::iterator next=srf.begin();
    //
    it=srf.begin();
    long int timer=0;
    int x= 0;
    cout<<"Pnumber "<<"|Running time| "<<"|Arriver time| "<<endl<<endl;

    for(it;it!=srf.end();it++)
    {
        cout<< it->Process_number<<"            " <<it->Running_time<<"           "<<it->Arrival_time<<endl;
    }
    it=srf.begin();
    next++;
    cout<<"Pnumber "<<"|Running time| "<<"|Arriver time| "<<"|waiting time| "<<endl<<endl;

    while(it!=srf.end())
    {
        it->wateing_time=timer;
        for(int i=timer; i<next->Arrival_time ;i++)
        {
            if(it->Running_time==0)
            {
                break;
            }
            it->Running_time--;
            timer++;
        }
        if(it->Running_time>0)
        {
            it++;
            if(next!=srf.end() )
                next++;
        }else if(it->Running_time==0)
        {
            cout<< it->Process_number<<"            " <<it->Running_time<<"           "<<it->Arrival_time<<"           "<<timer<<endl;
             srf.erase(it);
            break;
        }
        if(next->Arrival_time==0  )
        {
            cout<< it->Process_number<<"            " <<it->Running_time<<"           "<<it->Arrival_time<<"           "<<timer<<endl;
            timer+=it->Running_time;
            srf.erase(it);
            break;
        }
        x++;
    }
    srf.sort();
    it=srf.begin();

    for(it;it!=srf.end();it++)
    {
        it->wateing_time=timer;
        cout<< it->Process_number<<"            " <<it->Running_time<<"           "<<it->Arrival_time<<"           "<<it->wateing_time<<endl;
        timer+=it->Running_time;
        ave+=it->wateing_time;
        x++;
    }
    cout<<"Average waiting Time is -> "<<ave/n;

    return 0;
}
