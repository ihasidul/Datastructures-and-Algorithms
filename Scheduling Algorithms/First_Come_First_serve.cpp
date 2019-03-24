#include <iostream>
#include <bits/stdc++.h>

using namespace std;

float getAvgTime(int brustTime[], int numberOfProcesses);
int getWaitingTime(int brustTime[], int i);
int getTurnAroundTime(int brustTime[], int i);
// This code is the FCFS algorithm with no arival time
int main()
{

    int processes[] = {1, 2, 3};

    int numberOfProcesses = sizeof processes / sizeof processes[0];
    int brustTime[] = {10, 6, 10};

    cout << "Average time of the process : " << getAvgTime(brustTime, numberOfProcesses) << " ms" << endl;

    cout << "Processes"
         << "  "
         << "Brust_time"
         << "  "
         << "Waiting_time"
         << "  "
         << "Turn_around_time" << endl;
    for (int i = 0; i < numberOfProcesses; i++)
    {
        cout << processes[i]
             << "             "
             << brustTime[i]
             << "             "
             << getWaitingTime(brustTime, i)
             << "             "
             << getTurnAroundTime(brustTime, i) << endl;
    }
    return 0;
}

int getTurnAroundTime(int brustTime[], int i)
{
    //Turn around time = waitingtime of the process + brust time of the process
    int turnAroundTime = 0;
    turnAroundTime = brustTime[i] + getWaitingTime(brustTime, i);

    return turnAroundTime;
}

int getWaitingTime(int brustTime[], int i)
{ //This will send the waiting time for process
    int sum = 0;
    for (int j = 0; j < i; j++)
    {
        sum = sum + brustTime[j];
    }

    return sum;
}

float getAvgTime(int brustTime[], int numberOfProcesses)
{
    int total = 0;
    //This loop is getting the total of all the task time.
    for (int i = 0; i < numberOfProcesses; i++)
    {
        total = total + brustTime[i];
    }
    float avgTime = (float)total / (float)numberOfProcesses;

    return avgTime;
}
