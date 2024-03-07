#include<bits/stdc++.h>
using namespace std;
class process
{
    public: int Process_number ;
    public: int  Running_time;
    public: int  wateing_time;
    public: int  time=0;
};
int main()
{
        cout<<"****************************************Round Robin **********************************************"<<endl;

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
    int i=0;
	int quant;
	float ave=0;
	int endtime;
	cout<<"enter Quantum : ";
	cin>>quant;
	queue<process>rrq;
	rrq=q;
	int waiting =0;
	int turn=0;
    cout<<"Pnumber "<<"|Running time| "<<"|waiting time| "<<endl<<endl;
	while(!rrq.empty())
    {

        endtime=rrq.front().time;
        rrq.front().wateing_time=waiting;
        cout<<" p"<<rrq.front().Process_number<<"\t\t"<<rrq.front().Running_time<<"\t\t"<<rrq.front().wateing_time<<endl;
        if(rrq.front().Running_time>quant)
        {
            p.Process_number=rrq.front().Process_number;
            p.Running_time=rrq.front().Running_time-quant;
            p.time=waiting+rrq.front().Running_time;
            rrq.push(p);
            ave+=waiting-p.time;
            waiting+=quant;
            rrq.pop();
        }
        else if(rrq.front().Running_time<=quant)
        {
            ave+=waiting;
            waiting+=rrq.front().Running_time;
            rrq.pop();
        }
        i++;
    }
     cout<<"Average waiting Time is -> "<<ave/n<<endl;
    return 0;
}
