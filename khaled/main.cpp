#include <bits/stdc++.h>
using namespace std;
//structure for every process
struct Process {
    int process_id; // Process ID
    int brust_time; // Burst Time
    int arrival_time; // Arrival Time
};
void findTurnAroundTime(Process proc[], int n, int wt[], int tat[]) {
    for (int i = 0; i < n; i++) {
        tat[i] = proc[i].brust_time + wt[i];
    }
}
//waiting time of all process
void findWaitingTime(Process proc[], int n, int wt[]) {
    int rt[n];
    for (int i = 0; i < n; i++) {
        rt[i] = proc[i].brust_time;
    }
    int complete = 0, t = 0, minm = INT_MAX;
    int shortest = 0, finish_time;
    bool check = false;
    while (complete != n) {
        for (int j = 0; j < n; j++) {
            if ((proc[j].arrival_time <= t) && (rt[j] < minm) && rt[j] > 0) {
                minm = rt[j];
                shortest = j;
                check = true;
            }
        }
        if (!check) {
            t++;
            continue;
        }
        // decrementing the remaining time
        rt[shortest]--;
        minm = rt[shortest];
        if (minm == 0)
            minm = INT_MAX;
        // If a process gets completely

        // executed
        if (rt[shortest] == 0) {
            complete++;
            check = false;
            finish_time = t + 1;
            // Calculate waiting time
            wt[shortest] = finish_time -
                           proc[shortest].brust_time -
                           proc[shortest].arrival_time;
            if (wt[shortest] < 0)
                wt[shortest] = 0;
        }
        // Increment time
        t++;
    }
}
// Function to calculate average time
void findavgTime(Process proc[], int n) {
    int wt[n], tat[n], total_wt = 0,
            total_tat = 0;
    findWaitingTime(proc, n, wt);
    findTurnAroundTime(proc, n, wt, tat);
    cout << "Processes " << " Burst time " << " Waiting time " << " Turn around time\n";
    for (int i = 0; i < n; i++) {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << " " << proc[i].process_id << "\t\t" << proc[i].brust_time << "\t\t " << wt[i] << "\t\t " << tat[i] << endl;
    }
    cout << "\nAverage waiting time = " << (double)total_wt / (double)n; cout << "\nAverage turn around time = " << (double)total_tat / (double)n;
}
// main function
int main() {
    srand(time(0));
    int n;  cin>>n;
    Process proc [n];
    for(int i=0;i<n;i++) {
        proc[i].process_id=i+1;
        proc[i].arrival_time=1+rand()%10;
        proc[i].brust_time=1+rand()%10;
    }
    /*  Process proc[] = { { 1, 5, 1 }, { 2, 3, 1 }, { 3, 6, 2 }, { 4, 5, 3 } };
      int n = sizeof(proc) / sizeof(proc[0]);*/
    findavgTime(proc, n);
    return 0;
}
