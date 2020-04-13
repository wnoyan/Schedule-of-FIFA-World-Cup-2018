#include <bits/stdc++.h>

using namespace std;

class Stadium
{
protected:

    char m_stadiumName[12][50];
    char m_stadiumLocation[12][50];
    int m_stadiumCapacity[12];

public:

    Stadium();
    void ShowStadium();
};

Stadium::Stadium()
{
    ifstream file;
    file.open("stadiumName.txt");

    if(!file.is_open()){
        cout<<"\t\tStadium Name File Opening Failure!"<<endl;
    }
    else{
        int i = 0;

        char name[50];

        while(file.good()){
            ///getline(file, name);
            file>>name;
            strcpy(m_stadiumName[i], name);
            i ++;
        }
    }

    file.close();

    file.open("stadiumLocation.txt");

    if(!file.is_open()){
        cout<<"\t\tStadium Location File Opening Failure!"<<endl;
    }
    else{
        int i = 0;

        char name[50];

        while(file.good()){
            ///getline(file, name);
            file>>name;
            strcpy(m_stadiumLocation[i], name);
            i ++;
        }
    }

    file.close();

    file.open("stadiumCapacity.txt");

    if(!file.is_open()){
        cout<<"\t\tStadium Capacity File Opening Failure!"<<endl;
    }
    else{
        int i = 0;

        int name;

        while(file.good()){
            ///getline(file, name);
            file>>name;
            m_stadiumCapacity[i] = name;
            i ++;
        }
    }

    file.close();
}

void Stadium::ShowStadium()
{
    cout<<"\t\tStadium Details!"<<endl;
    cout<<"\t\t----------------"<<endl<<endl;

    for(int i=0;i<12;i++){
        cout<<"\t\tStadium Number "<<i+1<<" : "<<m_stadiumName[i]<<"(Capacity : ";
        cout<<m_stadiumCapacity[i]<<") , ";
        cout<<m_stadiumLocation[i]<<endl;
    }
}

