#include <bits/stdc++.h>

using namespace std;

class Schedule
{
protected:

public:

    virtual void show();
};

void Schedule::show()
{
    cout<<"\n\t\tThis is the 'show' function of base class!"<<endl;
}

class TeamWiseSchedule : public Schedule
{
protected:

    multimap < string, string > team;

public:

    TeamWiseSchedule();

    ///void showMatchTeam(string);
    void show(string);
};

class DateWiseSchedule : public Schedule
{
protected:

    multimap < int, string > date;
    multimap < int, string > julyDate;

public:

    DateWiseSchedule();

    ///void showMatchDate(int, string);
    void show(int , string);
};

class MatchWiseSchedule : public Schedule
{
protected:

    multimap < int, string > match;

public:

    MatchWiseSchedule();

    ///void showMatchNumber(int);
    void show(int);
};

TeamWiseSchedule::TeamWiseSchedule()
{
    team.insert(make_pair("Germany", "\t\tFirst Match : 17 June, 9 PM BDT\n\t\tSecond Match : 23 June, 12 AM BDT\n\t\tThird Match : 27 June, 8 PM BDT"));
    team.insert(make_pair("Argentina", "\t\tFirst Match : 16 June, 7 PM BDT\n\t\tSecond Match : 21 June, 12 AM BDT\n\t\tThird Match : 26 June, 12 PM BDT"));
    team.insert(make_pair("Brazil", "\t\tFirst Match : 17 June, 12 AM BDT\n\t\tSecond Match : 22 June, 6 PM BDT\n\t\tThird Match : 27 June, 12 AM BDT"));
    team.insert(make_pair("Russia", "\t\tFirst Match : 14 June, 9 PM BDT\n\t\tSecond Match : 19 June, 12 AM BDT\n\t\tThird Match : 25 June, 8 PM BDT"));
    team.insert(make_pair("Spain", "\t\tFirst Match : 15 June, 12 AM BDT\n\t\tSecond Match : 20 June, 12 AM BDT\n\t\tThird Match : 25 June, 12 AM BDT"));
    team.insert(make_pair("Portugal", "\t\tFirst Match : 15 June, 12 AM BDT\n\t\tSecond Match : 20 June, 6 PM BDT\n\t\tThird Match : 25 June, 12 AM BDT"));
    team.insert(make_pair("France", "\t\tFirst Match : 16 June, 4 PM BDT\n\t\tSecond Match : 21 June, 6 PM BDT\n\t\tThird Match : 26 June, 8 PM BDT"));
    team.insert(make_pair("Belgium", "\t\tFirst Match : 18 June, 9 PM BDT\n\t\tSecond Match : 23 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Switzerland", "\t\tFirst Match : 17 June, 12 AM BDT\n\t\tSecond Match : 22 June, 12 AM BDT\n\t\tThird Match : 27 June, 12 AM BDT"));
    team.insert(make_pair("Sweden", "\t\tFirst Match : 18 June, 6 PM BDT\n\t\tSecond Match : 29 June, 9 PM BDT\n\t\tThird Match : 27 June, 8 PM BDT"));
    team.insert(make_pair("England", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Uruguay", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Costa Rica", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Denmark", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Iran", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Japan", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Mexico", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("South Korea", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Saudi Arabia", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Nigeria", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Poland", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Egypt", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Iceland", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Serbia", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Colombia", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Panama", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Senegal", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Morocco", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Tunisia", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Croatia", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Peru", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
    team.insert(make_pair("Australia", "\t\tFirst Match : 18 June, 12 AM BDT\n\t\tSecond Match : 24 June, 6 PM BDT\n\t\tThird Match : 28 June, 12 AM BDT"));
}

void TeamWiseSchedule::show(string teaam)
{
    multimap < string, string > :: iterator tit;

    for(tit = team.begin(); tit != team.end(); tit ++)
    {
        if(tit->first == teaam)
        {
            cout<<"\n\t\tMatch Schedule for "<<teaam<<" : "<<endl;
            cout<<"\t\t----------------------------"<<endl<<endl;

            cout<<tit->second<<endl;
        }
    }
}

DateWiseSchedule::DateWiseSchedule()
{
    date.insert(make_pair(14, "\t\tRussia VS Saudi Arabia\n\t\tMatch Number : 1\n\t\tTime : 9 PM BDT\n\t\tVenue : Moscow\n"));
    date.insert(make_pair(15, "\t\tEgypt VS Uruguay\n\t\tMatch Number : 2\n\t\tTime : 6 PM BDT\n\t\tVenue : Ekaterinburg\n"));
    date.insert(make_pair(15, "\t\tMorocco VS Iran\n\t\tMatch Number : 3\n\t\tTime : 9 PM BDT\n\t\tVenue : Stern Pittsburgh\n"));
    date.insert(make_pair(15, "\t\tPortugal VS Spain\n\t\tMatch Number : 4\n\t\tTime : 12 AM BDT\n\t\tVenue : Sochi\n"));
    date.insert(make_pair(16, "\t\tFrance VS Australia\n\t\tMatch Number : 5\n\t\tTime : 4 PM BDT\n\t\tVenue : Kazan\n"));
    date.insert(make_pair(16, "\t\tArgentina VS Iceland\n\t\tMatch Number : 6\n\t\tTime : 7 PM BDT\n\t\tVenue : Moscow\n"));
    date.insert(make_pair(16, "\t\tPeru VS Denmark\n\t\tMatch Number : 7\n\t\tTime : 10 PM BDT\n\t\tVenue : Saransk\n"));
    date.insert(make_pair(16, "\t\tCroatia VS Nigeria\n\t\tMatch Number : 8\n\t\tTime : 1 AM BDT\n\t\tVenue : Kaliningard\n"));
    date.insert(make_pair(17, "\t\tCosta Rica VS Serbia\n\t\tMatch Number : 9\n\t\tTime : 6 PM BDT\n\t\tVenue : Samara\n"));
    date.insert(make_pair(17, "\t\tGermany VS Mexico\n\t\tMatch Number : 10\n\t\tTime : 9 PM BDT\n\t\tVenue : Moscow\n"));
    date.insert(make_pair(17, "\t\tBrazil VS Switzerland\n\t\tMatch Number : 11\n\t\tTime : 12 AM BDT\n\t\tVenue : Rostov\n"));
    date.insert(make_pair(18, "\t\tSweden VS South Korea\n\t\tMatch Number : 12\n\t\tTime : 6 PM BDT\n\t\tVenue : Novgorod\n"));
    date.insert(make_pair(18, "\t\tBelgium VS Panama\n\t\tMatch Number : 13\n\t\tTime : 9 PM BDT\n\t\tVenue : Sochi\n"));
    date.insert(make_pair(18, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(19, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(19, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(19, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(20, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(20, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(20, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(21, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(21, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(21, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(22, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(22, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(22, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(23, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(23, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(23, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(24, "\t\tEngland VS Panama\n\t\tMatch Number : 30\n\t\tTime : 6 PM BDT\n\t\tVenue : Novgorod\n"));
    date.insert(make_pair(24, "\t\tJapan VS Senegal\n\t\tMatch Number : 31\n\t\tTime : 9 PM BDT\n\t\tVenue : Ekaterinburg\n"));
    date.insert(make_pair(24, "\t\tPoland VS Colombia\n\t\tMatch Number : 32\n\t\tTime : 12 AM BDT\n\t\tVenue : Kazan\n"));
    date.insert(make_pair(25, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(25, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(25, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(26, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(26, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(26, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(26, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(27, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(27, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(27, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(27, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(28, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(28, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(28, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(28, "\t\tTunisia VS England\n\t\tMatch Number : 14\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod\n"));
    date.insert(make_pair(30, "\t\t1A VS 2B\n\t\tMatch Number : 49\n\t\tTime : 12 AM BDT\n\t\tVenue : Kazan\n"));
    date.insert(make_pair(30, "\t\t1C VS 2D\n\t\tMatch Number : 50\n\t\tTime : 9 PM BDT\n\t\tVenue : Sochi\n"));

    julyDate.insert(make_pair(1, "\t\t1B VS 2A\n\t\tMatch Number : 51\n\t\tTime : 9 PM BDT\n\t\tVenue : Moscow\n"));
    julyDate.insert(make_pair(1, "\t\t1D VS 2C\n\t\tMatch Number : 52\n\t\tTime : 12 AM BDT\n\t\tVenue : Novgorod\n"));
    julyDate.insert(make_pair(2, "\t\t1E VS 2F\n\t\tMatch Number : 53\n\t\tTime : 9 PM BDT\n\t\tVenue : Samara\n"));
    julyDate.insert(make_pair(2, "\t\t1G VS 2H\n\t\tMatch Number : 54\n\t\tTime : 12 AM BDT\n\t\tVenue : Rostov\n"));
    julyDate.insert(make_pair(3, "\t\t1F VS 2E\n\t\tMatch Number : 55\n\t\tTime : 9 PM BDT\n\t\tVenue : Saint Petersburg\n"));
    julyDate.insert(make_pair(3, "\t\t1H VS 2G\n\t\tMatch Number : 56\n\t\tTime : 12 AM BDT\n\t\tVenue : Moscow\n"));
    julyDate.insert(make_pair(6, "\t\tWinner 49 VS Winner 50\n\t\tMatch Number : 57\n\t\tTime : 9 PM BDT\n\t\tVenue : Nizhny Novgorod\n"));
    julyDate.insert(make_pair(6, "\t\tWinner 53 VS Winner 54\n\t\tMatch Number : 58\n\t\tTime : 12 AM BDT\n\t\tVenue : Kazan\n"));
    julyDate.insert(make_pair(7, "\t\tWinner 51 VS Winner 52\n\t\tMatch Number : 59\n\t\tTime : 12 AM BDT\n\t\tVenue : Sochi\n"));
    julyDate.insert(make_pair(7, "\t\tWinner 55 VS Winner 55\n\t\tMatch Number : 60\n\t\tTime : 9 PM BDT\n\t\tVenue : Samara\n"));
    julyDate.insert(make_pair(10, "\t\tWinner 57 VS Winner 58\n\t\tMatch Number : 61\n\t\tTime : 12 AM BDT\n\t\tVenue : Saint Petersburg\n"));
    julyDate.insert(make_pair(11, "\t\tWinner 59 VS Winner 60\n\t\tMatch Number : 62\n\t\tTime : 8 PM BDT\n\t\tVenue : Moscow\n"));
}

void DateWiseSchedule::show(int dat, string month)
{
    multimap < int, string > :: iterator dit;

    int flag = 0;

    cout<<"\n\t\tMatch Schedule for Match(es) on - "<<dat<<", "<<month<<" 2018"<<endl;
    cout<<"\t\t-----------------------------------------------"<<endl<<endl;

    if(month == "June")
    {
        for(dit = date.begin(); dit != date.end(); dit++)
        {
            if(dit->first == dat){
                cout<< dit->second <<endl;
                flag = 1;
            }
        }
    }

    else if(month == "July"){
        for(dit = julyDate.begin(); dit != julyDate.end(); dit++)
        {
            if(dit->first == dat){
                cout<< dit->second <<endl;
                flag = 1;
            }
        }
    }

    if(flag != 1)
    {
        cout<<"\n\t\tAlas! No Match Today!"<<endl;
    }
}

MatchWiseSchedule::MatchWiseSchedule()
{
    match.insert(make_pair(1, "\t\tRussia VS Saudi Arabia\n\t\tDate : 14 June\n\t\tTime : 9 PM BDT\n\t\tVenue : Moscow"));
    match.insert(make_pair(2, "\t\tEgypt VS Uruguay\n\t\tDate : 15 June\n\t\tTime : 6 PM BDT\n\t\tVenue : Ekaterinburg"));
    match.insert(make_pair(3, "\t\tMorocco VS Iran\n\t\tDate : 15 June\n\t\tTime : 9 PM BDT\n\t\tVenue : Stern Pittsburgh"));
    match.insert(make_pair(4, "\t\tPortugal VS Spain\n\t\tDate : 15 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Sochi"));
    match.insert(make_pair(5, "\t\tFrance VS Australia\n\t\tDate : 16 June\n\t\tTime : 4 PM BDT\n\t\tVenue : Kazan"));
    match.insert(make_pair(6, "\t\tArgentina VS Iceland\n\t\tDate : 16 June\n\t\tTime : 7 PM BDT\n\t\tVenue : Moscow"));
    match.insert(make_pair(7, "\t\tPeru VS Denmark\n\t\tDate : 16 June\n\t\tTime : 10 PM BDT\n\t\tVenue : Saransk"));
    match.insert(make_pair(8, "\t\tCroatia VS Nigeria\n\t\tDate : 16 June\n\t\tTime : 1 AM BDT\n\t\tVenue : Kaliningard"));
    match.insert(make_pair(9, "\t\tCosta Rica VS Serbia\n\t\tDate : 17 June\n\t\tTime : 6 PM BDT\n\t\tVenue : Samara"));
    match.insert(make_pair(10, "\t\tGermany VS Mexico\n\t\tDate : 17 June\n\t\tTime : 9 PM BDT\n\t\tVenue : Moscow"));
    match.insert(make_pair(11, "\t\tBrazil VS Switzerland\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Rostov"));
    match.insert(make_pair(12, "\t\tSweden VS South Korea\n\t\tDate : 17 June\n\t\tTime : 6 PM BDT\n\t\tVenue : Novgorod"));
    match.insert(make_pair(13, "\t\tBelgium VS Panama\n\t\tDate : 17 June\n\t\tTime : 9 PM BDT\n\t\tVenue : Sochi"));
    match.insert(make_pair(14, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(15, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(16, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(17, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(18, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(19, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(20, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(21, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(22, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(23, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(24, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(25, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(26, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(27, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(28, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(29, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(30, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(31, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(32, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(33, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(34, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(35, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(36, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(37, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(38, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(39, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(40, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(41, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(42, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(43, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(44, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(45, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(46, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(47, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(48, "\t\tTunisia VS England\n\t\tDate : 17 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Volgorod"));
    match.insert(make_pair(49, "\t\t1A VS 2B\n\t\tDate : 30 June\n\t\tTime : 12 AM BDT\n\t\tVenue : Kazan"));
    match.insert(make_pair(50, "\t\t1C VS 2D\n\t\tDate : 30 June\n\t\tTime : 9 PM BDT\n\t\tVenue : Sochi"));
    match.insert(make_pair(51, "\t\t1B VS 2A\n\t\tDate : 1 July\n\t\tTime : 9 PM BDT\n\t\tVenue : Moscow"));
    match.insert(make_pair(52, "\t\t1D VS 2C\n\t\tDate : 1 July\n\t\tTime : 12 AM BDT\n\t\tVenue : Novgorod"));
    match.insert(make_pair(53, "\t\t1E VS 2F\n\t\tDate : 2 July\n\t\tTime : 9 PM BDT\n\t\tVenue : Samara"));
    match.insert(make_pair(54, "\t\t1G VS 2H\n\t\tDate : 2 July\n\t\tTime : 12 AM BDT\n\t\tVenue : Rostov"));
    match.insert(make_pair(55, "\t\t1F VS 2E\n\t\tDate : 3 July\n\t\tTime : 9 PM BDT\n\t\tVenue : Saint Petersburg"));
    match.insert(make_pair(56, "\t\t1H VS 2G\n\t\tDate : 3 July\n\t\tTime : 12 AM BDT\n\t\tVenue : Moscow"));
    match.insert(make_pair(57, "\t\tWinner 49 VS Winner 50\n\t\tDate : 6 July\n\t\tTime : 9 PM BDT\n\t\tVenue : Nizhny Novgorod"));
    match.insert(make_pair(58, "\t\tWinner 53 VS Winner 54\n\t\tDate : 6 July\n\t\tTime : 12 AM BDT\n\t\tVenue : Kazan"));
    match.insert(make_pair(59, "\t\tWinner 51 VS Winner 52\n\t\tDate : 7 July\n\t\tTime : 12 AM BDT\n\t\tVenue : Sochi"));
    match.insert(make_pair(60, "\t\tWinner 55 VS Winner 55\n\t\tDate : 7 July\n\t\tTime : 9 PM BDT\n\t\tVenue : Samara"));
    match.insert(make_pair(61, "\t\tWinner 57 VS Winner 58\n\t\tDate : 10 July\n\t\tTime : 12 AM BDT\n\t\tVenue : Saint Petersburg"));
    match.insert(make_pair(62, "\t\tWinner 59 VS Winner 60\n\t\tDate : 11 July\n\t\tTime : 8 PM BDT\n\t\tVenue : Moscow"));
    match.insert(make_pair(63, "\t\tLosers of Two Semi-Finals\n\t\Date : 14 July\n\t\tTime : 8 PM BDT\n\t\tVenue : Moscow"));
    match.insert(make_pair(64, "\t\tWorld Cup Final\n\t\tDate : 15 July\n\t\tTime : 9 PM BDT\n\t\tVenue : Moscow"));
}

void MatchWiseSchedule::show(int matchNumber)
{
    multimap < int, string > :: iterator nit;

    int m = 0;

    for(nit = match.begin(); nit != match.end(); nit ++)
    {
        m ++;

        if(m == matchNumber)
        {
            cout<<"\n\t\tMatch Schedule for Match Number : "<<matchNumber<<endl;
            cout<<"\t\t------------------------------------"<<endl<<endl;

            cout<<nit->second<<endl;
        }
    }
}


