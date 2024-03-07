#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
   int t;
   cin>>t;
   while(t!=0)
   {
       long long int a,b,n;
       cin>>a>>b>>n;
       vector<pair<long long int ,long long int>>v(n);
       for(int i=0;i<n;i++)
       {
           cin>>v[i].first;
       }
       for(int i=0;i<n;i++)
       {
           cin>>v[i].second;
       }

       sort(v.begin(),v.end());
       string r="YES";
       for(int i=0;i<n;i++)
       {
           if(b<=0)
           {
               r="NO";
               break;
           }
           long long int  k1=v[i].second/a;
           long long int k2=v[i].second%a;
           long long int k3=b/v[i].first;
           long long int k4=b%v[i].first;
           if(k2)
                k1++;
           if(k4)
                k3++;
            k1=min(k1,k3);
            b-=k1*v[i].first;
            v[i].second-=k1*a;
       }
       if(v[n-1].second>0)
       {
           r="NO";
       }
       cout<<r<<endl;
       t--;
   }
    return 0;
}
/*
    void solve (){
        ll A,B,n;
        cin>>A>>B>>n;
        vector<pair<ll,ll>>a(n);
        for(int i=0;i<n;i++) cin>>a[i].first;
        for(int i=0;i<n;i++) cin>>a[i].second;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(B<=0) {
                cout<<"NO"<<"\n";
                return;
            }
            ll k1=a[i].second/A;
            ll k2=a[i].second%A;
            ll k3=B/a[i].first;
            ll k4=B%a[i].first;
            if(k4) k3++;
            if(k2) k1++;
            k1=min(k1,k3);
            B-=k1*a[i].first;
            a[i].second-=k1*A;
            // cout<<"in "<<b[i]<<"\n";
        }
        if(a[n-1].second>0) cout<<"NO"<<"\n";
        // if(B<0) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);
        int t=1;
        cin>>t;
        for(int i=1;i<=t;i++){
        //    cout<<"Case #"<<i<<": ";
            solve();
        }
        return 0;
    }
    */
