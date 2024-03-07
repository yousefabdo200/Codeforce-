#include<iostream>
#include <queue>
#include <stack>
using namespace std;
class process
{
public: int Process_number;
public: int Arrival_time;
public: int  Running_time;
};
int main()
{
    srand(time(0));
    int n;
    cin >> n;
    process p;
    queue<process>q1;
    queue<process>q2;
    stack<process>s1;
    queue<process>q3;
    stack<process>s2;
    queue<process>q4;
    for (int i = 1; i <= n; i++)
    {
        p.Process_number = i;
        p.Arrival_time = 1 + (rand() % 20);
        p.Running_time = 1 + (rand() % 60);
        q1.push(p);
    }
    while (!q1.empty())
    {
        int r = 1 + (rand() % 4);
        p.Process_number = q1.front().Process_number;
        p.Arrival_time = q1.front().Arrival_time;
        p.Running_time = q1.front().Running_time;
        q1.pop();
        if (r == 1)
        {
            q2.push(p);
        }
        else if (r == 2)
        {
            s1.push(p);
        }
        else if (r == 3)
        {
            q3.push(p);
        }
        else
        {
            s2.push(p);
        }
    }
    queue<process>q2c;
    stack<process>s1c;
    queue<process>q3c;
    stack<process>s2c;
    q2c = q2;
    s1c = s1;
    q3c = q3;
    s2c = s2;
    int i = 1;
    cout << "Queue q2" << endl << "  " << "Process number " << "Arrival time " << "Running time " << endl << endl;
    while (!q2c.empty())
    {
        cout << i << "         " << q2c.front().Process_number << "         " << q2c.front().Arrival_time << "          " << q2c.front().Running_time << endl;
        q2c.pop();
        i++;

    }
    i = 1;
    cout << "stack s1" << endl << "  " << "Process number " << "Arrival time " << "Running time " << endl << endl;
    while (!s1c.empty())
    {
        cout << i << "         " << s1c.top().Process_number << "         " << s1c.top().Arrival_time << "          " << s1c.top().Running_time << endl;
        s1c.pop();
        i++;

    }
    cout << "queue q3" << endl << "  " << "Process number " << "Arrival time " << "Running time " << endl << endl;
    i = 1;
    while (!q3c.empty())
    {
        cout << i << "         " << q3c.front().Process_number << "         " << q3c.front().Arrival_time << "          " << q3c.front().Running_time << endl;
        q3c.pop();
        i++;

    }
    i = 1;
    cout << "stack s2" << endl << "  " << "Process number " << "Arrival time " << "Running time " << endl << endl;
    while (!s2c.empty())
    {
        cout << i << "         " << s2c.top().Process_number << "         " << s2c.top().Arrival_time << "          " << s2c.top().Running_time << endl;
        s2c.pop();
        i++;
    }
    while (!q2.empty() || !s1.empty() || !q3.empty() || !s2.empty())
    {
        int r = 1 + (rand() % 4);
        if (r == 1 && !q2.empty())
        {
            p.Process_number = q2.front().Process_number;
            p.Arrival_time = 1 + (rand() % 20);
            p.Running_time = 1 + (rand() % 60);
            q2.pop();
            q4.push(p);
        }
        else if (r == 2 && !s1.empty())
        {
            p.Process_number = s1.top().Process_number;
            p.Arrival_time = 1 + (rand() % 20);
            p.Running_time = 1 + (rand() % 60);
            s1.pop();
            q4.push(p);
        }
        else if (r == 3 && !q3.empty())
        {
            p.Process_number = q3.front().Process_number;
            p.Arrival_time = 1 + (rand() % 20);
            p.Running_time = 1 + (rand() % 60);
            q3.pop();
            q4.push(p);
        }
        else if (r == 4 && !s2.empty())
        {
            p.Process_number = s2.top().Process_number;
            p.Arrival_time = 1 + (rand() % 20);
            p.Running_time = 1 + (rand() % 60);
            s2.pop();
            q4.push(p);
        }
    }

    i = 1;
    cout << "Queue q4" << endl << "  " << "Process number " << "Arrival time " << "Running time " << endl << endl;
    while (!q4.empty())
    {
        cout << i << "         " << q4.front().Process_number << "         " << q4.front().Arrival_time << "          " << q4.front().Running_time << endl;
        q4.pop();
        i++;
    }
    return 0;
}
