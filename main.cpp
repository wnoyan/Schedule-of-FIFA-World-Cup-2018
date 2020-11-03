#include <iostream>
#include "header.h"
#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout<<"\n\t\tEnter 1 For Match Schedule"<<endl;
    cout<<"\t\tEnter 2 For Team Information"<<endl;
    cout<<"\t\tEnter 3 For Group Information"<<endl;
    cout<<"\t\tEnter 4 For Stadium Information"<<endl;
    cout<<"\t\tEnter 5 For Prize Information"<<endl;

    int a;
    cout<<"\n\n\t\tEnter a value for corresponding information!"<<endl;
    cout<<"\t\t";
    cin>>a; system("cls");

    if(a == 1){
        cout<<"\n\t\tYou can see match schedule in 3 ways"<<endl;

        cout<<"\n\t\tEnter 1 to see the nth number match"<<endl;
        cout<<"\t\tEnter 2 to see datewise matches"<<endl;
        cout<<"\t\tEnter 3 to see teamwise matches"<<endl;

        int b;
        cout<<"\n\n\t\tEnter a value for corresponding information!"<<endl;
        cout<<"\t\t";
        cin>>b; system("cls");

        if(b == 1){
            MatchWiseSchedule mschedule;

            int match_number;
            cout<<"\n\n\t\tEnter the match number you want to see!"<<endl;
            cout<<"\t\t";
            cin>>match_number; system("cls");

            mschedule.show(match_number);
        }

        else if(b == 2){
            DateWiseSchedule dschedule;

            int ndate;
            string nmonth;

            cout<<"\n\t\tEnter the month name of the schedule"<<endl;
            cout<<"\t\t";
            cin>>nmonth;

            cout<<"\n\t\tEnter the date of the schedule"<<endl;
            cout<<"\t\t";
            cin>>ndate; system("cls");

            dschedule.show(ndate, nmonth);
        }

        else if(b == 3){
            TeamWiseSchedule tschedule;

            string nteam;

            cout<<"\n\t\tEnter the team name to see the schedule"<<endl;
            cout<<"\t\t";
            cin>>nteam; system("cls");

            tschedule.show(nteam);
        }

        else
            cout<<"\n\t\tWrong Input! Please, Enter correct one!"<<endl;
    }

    else if(a == 2){
        string nteam;

        cout<<"\n\t\tEnter the team name you want to know details!"<<endl;
        cout<<"\t\t";
        cin>>nteam; system("cls");

        TeamsInfo teamsinfo(nteam);
        ///teamsinfo.showTeams();
    }

    else if(a == 3){
        ///GroupH groupinfo;
        ///groupinfo.show();

        string ngroup;

        cout<<"\n\t\tEnter the group name you want to know details!"<<endl;
        cout<<"\t\t";
        cin>>ngroup; system("cls");

        if(ngroup == "A"){
            GroupA groupinfo;
            groupinfo.show();
        }

        else if(ngroup == "B"){
            GroupB groupinfo;
            groupinfo.show();
        }

        else if(ngroup == "C"){
            GroupC groupinfo;
            groupinfo.show();
        }

        else if(ngroup == "D"){
            GroupD groupinfo;
            groupinfo.show();
        }

        else if(ngroup == "E"){
            GroupE groupinfo;
            groupinfo.show();
        }

        else if(ngroup == "F"){
            GroupF groupinfo;
            groupinfo.show();
        }

        else if(ngroup == "G"){
            GroupG groupinfo;
            groupinfo.show();
        }

        else if(ngroup == "H"){
            GroupH groupinfo;
            groupinfo.show();
        }

        else
            cout<<"\n\t\tWrong Input! Please, Enter correct one!"<<endl;
    }

    else if(a == 4){
        Stadium1 stadium1;
        stadium1.ShowStadium1();
    }

    else if(a == 5){
        PrizeInfo prizeinfo;
        prizeinfo.showPrize();
    }

    return 0;
}
