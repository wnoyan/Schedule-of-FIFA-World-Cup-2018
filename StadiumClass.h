#include <bits/stdc++.h>

using namespace std;

class Stadium1
{
protected:

    char m_Stadium1Name[12][50];
    char m_Stadium1Location[12][50];
    int m_Stadium1Capacity[12];

public:

    Stadium1();
    void ShowStadium1();
};

Stadium1::Stadium1()
{
    ifstream file;
    file.open("StadiumName.txt");

    if(!file.is_open()){
        cout<<"\t\tStadium1 Name File Opening Failure!"<<endl;
    }
    else{
        int i = 0;

        char name[50];

        while(file.good()){
            ///getline(file, name);
            file>>name;
            strcpy(m_Stadium1Name[i], name);
            i ++;
        }
    }

    file.close();

    file.open("StadiumLocation.txt");

    if(!file.is_open()){
        cout<<"\t\tStadium1 Location File Opening Failure!"<<endl;
    }
    else{
        int i = 0;

        char name[50];

        while(file.good()){
            ///getline(file, name);
            file>>name;
            strcpy(m_Stadium1Location[i], name);
            i ++;
        }
    }

    file.close();

    file.open("StadiumCapacity.txt");

    if(!file.is_open()){
        cout<<"\t\tStadium1 Capacity File Opening Failure!"<<endl;
    }
    else{
        int i = 0;

        int name;

        while(file.good()){
            ///getline(file, name);
            file>>name;
            m_Stadium1Capacity[i] = name;
            i ++;
        }
    }

    file.close();
}

void Stadium1::ShowStadium1()
{
    cout<<"\t\tStadium1 Details!"<<endl;
    cout<<"\t\t----------------"<<endl<<endl;

    for(int i=0;i<12;i++){
        cout<<"\t\tStadium1 Number "<<i+1<<" : "<<m_Stadium1Name[i]<<"(Capacity : ";
        cout<<m_Stadium1Capacity[i]<<") , ";
        cout<<m_Stadium1Location[i]<<endl;
    }
}


