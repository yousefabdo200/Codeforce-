#include <bits/stdc++.h>
using namespace std;

class Process{
public:
    int number;
    int arrivalTime;
    int runningTime;

};

int main()
{
    srand(time(0));
    // Number of processes
    int pNum;

    // Start Queue
    queue <Process> q1;

    // Ready Queues
    queue <Process> q2;
    queue <Process> q3;

    // Ready Stacks
    stack <Process> s1;
    stack <Process> s2;

    // Running Queue
    queue <Process> q4;

    // COPY
    queue <Process> copyQ2;
    queue <Process> copyQ3;

    stack <Process> copyS1;
    stack <Process> copyS2;

    cout <<"enter process number \n";
    cin >> pNum;
    for(int i =1; i <= pNum;i++){
        Process p[i];
        p[i].number = i;
        p[i].arrivalTime =  1 + (rand() % 20);
        p[i].runningTime = 1 + (rand() % 100);

        q1.push(p[i]);
    }

    for(int i = 0; i< pNum;i++){
        int n = 1 + (rand() % 4);;
        Process object = q1.front();
        if(n == 1){
            q2.push(object);
            copyQ2.push(object);
        }else if(n == 2){
            s1.push(object);
            copyS1.push(object);
        }else if(n == 3){
            q3.push(object);
            copyQ3.push(object);
        }else if(n == 4){
            s2.push(object);
            copyS2.push(object);
        }
        q1.pop();
    }

    cout << "First Ready Queue" << endl;
    cout << "Process Number" << "|    |" << "Arrival Time" << "|    |" << "Running Time" << endl;
    while(!q2.empty()){
        cout << q2.front().number << "|                      |" << q2.front().arrivalTime << "|              |" << q2.front().runningTime << endl;
        q2.pop();
    }

    cout << endl;

    cout << "First Ready Stack" << endl;
    cout << "Process Number" << "|    |" << "Arrival Time" << "|    |" << "Running Time" << endl;
    while(!s1.empty()){
        cout << s1.top().number << "|                      |" << s1.top().arrivalTime << "|              |" << s1.top().runningTime << endl;
        s1.pop();
    }

    cout << endl;

    cout << "Second Ready Queue" << endl;
    cout << "Process Number" << "|    |" << "Arrival Time" << "|    |" << "Running Time" << endl;
    while(!q3.empty()){
        cout << q3.front().number << "|                      |" << q3.front().arrivalTime << "|              |" << q3.front().runningTime << endl;
        q3.pop();
    }

    cout << endl;

    cout << "Second Ready Stack" << endl;
    cout << "Process Number" << "|    |" << "Arrival Time" << "|    |" << "Running Time" << endl;
    while(!s2.empty()){
        cout << s2.top().number << "|                      |" << s2.top().arrivalTime << "|              |" << s2.top().runningTime << endl;
        s2.pop();
    }


    while(!copyQ2.empty() || !copyQ3.empty() || !copyS1.empty() || !copyS2.empty()){
        int n = 1 + (rand() % 4);
        Process object = object;
        if(n == 1 && !copyQ2.empty()){
            object = copyQ2.front();
            copyQ2.pop();
        }else if(n == 2 && !copyS1.empty()){
            object = copyS1.top();
            copyS1.pop();
        }else if(n == 3 && !copyQ3.empty()){
            object = copyQ3.front();
            copyQ3.pop();
        }else if(n == 4 && !copyS2.empty()){
            object = copyS2.top();
            copyS2.pop();
        }else{
            continue;
        }
        q4.push(object);
    }

    cout << endl;
    cout << "Running queue" << endl;
    cout << "Process Number" << "    " << "Arrival Time" << "    " << "Running Time" << endl;
    while(!q4.empty()){
        cout << q4.front().number << "                      " << q4.front().arrivalTime << "                      " << q4.front().runningTime << endl;
        q4.pop();
    }

    return 0;
}
