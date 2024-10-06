#include <bits/stdc++.h>
using namespace std;

bool toss()
{
    int x = time(0);
    srand(x);
    bool userchoice;
    cout << "Choose even(0) or odd(1): ";
    cin >> userchoice;
    int useraction;
    cout << "Enter your number(1-10): ";
    cin >> useraction;
    int machineinput = (1 + rand() % (9 - 1 + 1));
    cout << "machineinput: " << machineinput << endl;
    int sum = useraction + machineinput;
    cout << "sum: " << sum << endl;
    bool win = sum % 2;
    cout << win << endl;
    if (win == 0 && win == userchoice)
    {

        return true;
    }
    else if (win != 0 && userchoice == 1)
    {

        return true;
    }
    return false;
}
int batting()
{
    int ue;
    int x = time(0);
    srand(x);
    int machineinput = 0;
    ue = 1;
    int sum = 0;
    while (ue != machineinput)
    {
        machineinput = (1 + rand() % (9 - 1 + 1));
        cout << "Your input: ";
        cin >> ue;
        cout << "Machine input: " << machineinput << endl;
        sum = sum + ue;
    }
    return sum;
}
int battingg(int score)
{
    int ue;
    int x = time(0);
    srand(x);
    int machineinput = 0;
    ue = 1;
    int sum = 0;
    while (ue != machineinput)
    {
        if (sum > score)
            break;
        else
        {
            machineinput = (1 + rand() % (9 - 1 + 1));
            cout << "Your input: ";
            cin >> ue;
            cout << "Machine input: " << machineinput << endl;

            sum = sum + ue;
        }
    }
    return sum;
}

int machinebattingg()
{
    int ue;
    int x = time(0);
    srand(x);
    int machineinput = 0;
    ue = 1;
    int sum = 0;
    while (ue != machineinput)
    {
        machineinput = (1 + rand() % (9 - 1 + 1));
        cout << "Your input: ";
        cin >> ue;
        cout << "Machine input: " << machineinput << endl;

        sum = sum + machineinput;
    }
    return sum;
}

int machinebatting(int score)
{
    int ue;
    int x = time(0);
    srand(x);
    int machineinput = 0;
    ue = 1;
    int sum = 0;
    while (ue != machineinput)
    {
        if (sum > score)
        {
            break;
        }
        else
        {
            machineinput = (1 + rand() % (9 - 1 + 1));
            cout << "Your input: ";
            cin >> ue;
            cout << "Machine input: " << machineinput << endl;
            sum = sum + machineinput;
        }
    }
    return sum;
}
int main()
{
    int flag = 0;
    if (toss())
    {
        cout << "you won the toss\n";
        cout<<"You are batting\n";
        flag = 1;
    }
    else
    {
        cout << "you lost the toss\n";
        cout<<"Machine choose to bat\n";
    }
    // if you win and your batting
    if (flag == 1)
    {
        int score = batting();
        cout << "\nyour score: <<" << score<<">>"<<endl;
        int mSum = machinebatting(score);
        if (score > mSum)
        {
            cout << "*You win*" << endl
                 << "Your Score: <<" << score<<">>"<<endl;
            ;
        }
        else
        {
            cout << "*You lose*" << endl;
                cout << "Your Score: <<" << score<<endl;
            
        }
    }
    // if you loose your bowling
    else
    {
        // int score=batting();
        cout << "\n <<You are bowling>>\n";
        int score1 = machinebattingg();
        cout << "Machine score: <<" << score1<<">>"<<endl;
        cout<<"<<Your batting\n>>";
        int score = battingg(score1);

        if (score1 < score)
        {
            cout << "*You win*" << endl;
                  cout << "Your Score: <<" << score<<">>"<<endl;
                  cout << "Machine score: <<" << score1<<">>"<<endl;
        }
        else
        {
            cout << "*You lose*" << endl;
               cout << "Your Score: <<" << score<<">>"<<endl;
                cout << "Machine score: <<" << score1<<">>"<<endl;
        }
    }
}