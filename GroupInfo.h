#include <bits/stdc++.h>

using namespace std;

class GroupsInfo
{
protected:

    vector <string> Group;

public:

    virtual void show();
};

void GroupsInfo::show()
{
    cout<<"\n\t\tThis is the 'show' function of base class!"<<endl;
}

class GroupA : public GroupsInfo
{
protected:

public:

    GroupA();
    void show();
};

GroupA::GroupA()
{
    Group.push_back("Russia");
    Group.push_back("Saudi-Arabia");
    Group.push_back("Egypt");
    Group.push_back("Uruguay");
}

void GroupA::show()
{
    vector <string> :: iterator it;

    cout<<"\t\tGroup-A Details!"<<endl;
    cout<<"\t\t----------------"<<endl;

    for(it = Group.begin(); it != Group.end(); it++)
        cout<<"\t\t"<<*it<<endl;

    cout<<endl<<endl;
}

class GroupB : public GroupsInfo
{
protected:

public:

    GroupB();
    void show();
};

GroupB::GroupB()
{
    Group.push_back("Portugal");
    Group.push_back("Spain");
    Group.push_back("Morocco");
    Group.push_back("Iran");
}

void GroupB::show()
{
    vector <string> :: iterator it;

    cout<<"\t\tGroup-B Details!"<<endl;
    cout<<"\t\t----------------"<<endl;

    for(it = Group.begin(); it != Group.end(); it++)
        cout<<"\t\t"<<*it<<endl;

    cout<<endl<<endl;
}

class GroupC : public GroupsInfo
{
protected:

public:

    GroupC();
    void show();
};

GroupC::GroupC()
{
    Group.push_back("France");
    Group.push_back("Australia");
    Group.push_back("Peru");
    Group.push_back("Denmark");
}

void GroupC::show()
{
    vector <string> :: iterator it;

    cout<<"\t\tGroup-C Details!"<<endl;
    cout<<"\t\t----------------"<<endl;

    for(it = Group.begin(); it != Group.end(); it++)
        cout<<"\t\t"<<*it<<endl;

    cout<<endl<<endl;
}

class GroupD : public GroupsInfo
{
protected:

public:

    GroupD();
    void show();
};

GroupD::GroupD()
{
    Group.push_back("Argentina");
    Group.push_back("Iceland");
    Group.push_back("Croatia");
    Group.push_back("Nigeria");
}

void GroupD::show()
{
    vector <string> :: iterator it;

    cout<<"\t\tGroup-D Details!"<<endl;
    cout<<"\t\t----------------"<<endl;

    for(it = Group.begin(); it != Group.end(); it++)
        cout<<"\t\t"<<*it<<endl;

    cout<<endl<<endl;
}

class GroupE : public GroupsInfo
{
protected:

public:

    GroupE();
    void show();
};

GroupE::GroupE()
{
    Group.push_back("Brazil");
    Group.push_back("Costa Rica");
    Group.push_back("Serbia");
    Group.push_back("Switzerland");
}

void GroupE::show()
{
    vector <string> :: iterator it;

    cout<<"\t\tGroup-E Details!"<<endl;
    cout<<"\t\t----------------"<<endl;

    for(it = Group.begin(); it != Group.end(); it++)
        cout<<"\t\t"<<*it<<endl;

    cout<<endl<<endl;
}

class GroupF : public GroupsInfo
{
protected:

public:

    GroupF();
    void show();
};

GroupF::GroupF()
{
    Group.push_back("Germany");
    Group.push_back("Mexico");
    Group.push_back("Sweden");
    Group.push_back("South Korea");
}

void GroupF::show()
{
    vector <string> :: iterator it;

    cout<<"\t\tGroup-F Details!"<<endl;
    cout<<"\t\t----------------"<<endl;

    for(it = Group.begin(); it != Group.end(); it++)
        cout<<"\t\t"<<*it<<endl;

    cout<<endl<<endl;
}

class GroupG : public GroupsInfo
{
protected:

public:

    GroupG();
    void show();
};

GroupG::GroupG()
{
    Group.push_back("Belgium");
    Group.push_back("Panama");
    Group.push_back("Tunisia");
    Group.push_back("England");
}

void GroupG::show()
{
    vector <string> :: iterator it;

    cout<<"\t\tGroup-G Details!"<<endl;
    cout<<"\t\t----------------"<<endl;

    for(it = Group.begin(); it != Group.end(); it++)
        cout<<"\t\t"<<*it<<endl;

    cout<<endl<<endl;
}

class GroupH : public GroupsInfo
{
protected:

public:

    GroupH();
    void show();
};

GroupH::GroupH()
{
    Group.push_back("Poland");
    Group.push_back("Senegal");
    Group.push_back("Colombia");
    Group.push_back("Japan");
}

void GroupH::show()
{
    vector <string> :: iterator it;

    cout<<"\t\tGroup-H Details!"<<endl;
    cout<<"\t\t----------------"<<endl;

    for(it = Group.begin(); it != Group.end(); it++)
        cout<<"\t\t"<<*it<<endl;

    cout<<endl<<endl;
}


