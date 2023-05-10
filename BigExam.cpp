#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<time.h>
#include<string>
using namespace std;

 vector <string> CardBox
{
    "2\x06", "3\x06", "4\x06", "5\x06", "6\x06", "7\x06", "8\x06", "9\x06", "10\x06", "J\x06", "Q\x06", "K\x06", "A\x06", "2\x03", "3\x03", "4\x03", "5\x03", "6\x03", "7\x03", "8\x03", "9\x03", "10\x03", "J\x03", "Q\x03", "K\x03", "A\x03",
    "2\x04", "3\x04", "4\x04", "5\x04", "6\x04", "7\x04", "8\x04", "9\x04", "10\x04", "J\x04", "Q\x04", "K\x04", "A\x04", "2\x05", "3\x05", "4\x05", "5\x05", "6\x05", "7\x05", "8\x05", "9\x05", "10\x05", "J\x05", "Q\x05", "K\x05", "A\x05",
};

string OpponentCard[100], OpponentSubCard1, OpponentSubCard2;
string YourCard[100], YourSubCard1, YourSubCard2;
string test;
int randomIndex[100];
int OpponentSum=0, YourSum=0;
int OpponentFakeSum=0;
int CardCount=51;
void RemoveCard()
{
        for(int i=0;i<CardBox.size();i++)
        {if(CardBox[i]==test)

        CardBox.erase(CardBox.begin()+i);

            }
                }


void Start()
{
cout << "ROUND 1 " << endl << endl;

    for (int i=1;i<=3;i++)
    {
        randomIndex[i] = rand() % CardCount;
        test=CardBox[randomIndex[i]];
        OpponentCard[i]=test;
        RemoveCard();
        CardCount --;
    }



    for (int j=4;j<=6;j++)
    {
        randomIndex[j] = rand() % CardCount;
        test=CardBox[randomIndex[j]];
        YourCard[j]=test;
        RemoveCard();
        CardCount --;
    }


}

char sub[100];
void CountOpponentSum()
{
    for (int k=1;k<=3;k++)
    {
    sub[k] = OpponentCard[k].front();
    if ('2'<=sub[k]&&sub[k]<='9')
    {
    OpponentSum= OpponentSum + (sub[k] -'0');
    }
    else OpponentSum = OpponentSum + 5;
    }


    if ('2'<=sub[1]&&sub[1]<='9')
    {
    OpponentFakeSum= OpponentFakeSum + (sub[1] -'0');
    }
    else OpponentFakeSum = OpponentFakeSum + 5;


    cout << "Opponent's card : " << OpponentCard[1] << " " << "?" << " " << "?" << " " "(" << OpponentFakeSum << ")" << endl;

}



void CountYourSum()
{
    for (int l=4;l<=6;l++)
    {
   sub[l] = YourCard[l].front();
    if ('2'<=sub[l]&&sub[l]<='9')
    {
    YourSum= YourSum + (sub[l] -'0');
    }
    else YourSum = YourSum + 5;
    }
    cout << "Your card : " << YourCard[4] << " " << YourCard[5] << " " << YourCard[6] << " " << "(" << YourSum << ")" << endl;
}





void GetMoreCard1()
{

randomIndex[7] = rand() % CardCount;
test=CardBox[randomIndex[7]];
OpponentSubCard1=test;
RemoveCard();
CardCount --;


randomIndex[8] = rand() % CardCount;
test=CardBox[randomIndex[8]];
YourSubCard1=test;
RemoveCard();
CardCount --;

}










void CountSumAfterFirstHit()
{
    sub[1] = OpponentSubCard1.front();
    if ('2'<=sub[1]&&sub[1]<='9')
    {
    OpponentSum= OpponentSum + (sub[1] -'0');
    }
    else OpponentSum = OpponentSum + 5;

    if ('2'<=sub[2]&&sub[2]<='9')
    {
    OpponentFakeSum= OpponentFakeSum + (sub[2] -'0');
    }
    else OpponentFakeSum = OpponentFakeSum + 5;


cout << "Opponent's card : " << OpponentCard[1] << " " << OpponentCard[2] << " " << "?" << " " << "?" << " " << "(" << OpponentFakeSum << ")" << endl;


    sub[2] = YourSubCard1.front();
    if ('2'<=sub[2]&&sub[2]<='9')
    {
    YourSum= YourSum + (sub[2] -'0');
    }
    else YourSum = YourSum + 5;

cout << "Your card : " << YourCard[4] << " " << YourCard[5] << " " << YourCard[6] << " " << YourSubCard1 << " " << "(" << YourSum << ")" <<  endl;

}







void GetMoreCard2()
{

randomIndex[9] = rand() % CardCount;
test=CardBox[randomIndex[9]];
OpponentSubCard2=test;
RemoveCard();
CardCount --;
cout << "Opponent's card : " << OpponentCard[1] << " " << OpponentCard[2] << " " << "?" << " " << "?" << " " << "?" << " " << endl;

randomIndex[10] = rand() % CardCount;
test=CardBox[randomIndex[10]];
YourSubCard2=test;
RemoveCard();
CardCount --;
cout << "Your card : " << YourCard[4] << " " << YourCard[5] << " " << YourCard[6] << " " << YourSubCard1 << " " << YourSubCard2 << endl;
}







void CountSumAfterSecondHit()
{
    char sub9 = OpponentSubCard2.front();
    if ('2'<=sub9&&sub9<='9')
    {
    OpponentSum= OpponentSum + (sub9 -'0');
    }
    else OpponentSum = OpponentSum + 5;

    char sub10 = YourSubCard2.front();
    if ('2'<=sub10&&sub10<='9')
    {
    YourSum= YourSum + (sub10 -'0');
    }
    else YourSum = YourSum + 5;
}







void Defeat()
{
    cout << "**********************************" << endl
         << "*                                *" << endl
         << "*             YOU LOSE           *" << endl
         << "*                                *" << endl
         << "*                                *" << endl
         << "**********************************" << endl << endl << endl;
    cout << "Opponent's card : " << OpponentCard[1] << " " << OpponentCard[2] << " " << OpponentCard[3] << " " << OpponentSubCard1 << " " << OpponentSubCard2 << " " << "(" << OpponentSum << ")" << endl;
    cout << "Your card : " << YourCard[4] << " " << YourCard[5] << " " << YourCard[6] << " " << YourSubCard1 << " " << YourSubCard2 << " " << "(" << YourSum << ")" << endl;
}







void Win()
{
    cout << "**********************************" << endl
         << "*                                *" << endl
         << "*             YOU WIN            *" << endl
         << "*                                *" << endl
         << "*                                *" << endl
         << "**********************************" << endl << endl << endl;
    cout << "Opponent's card : " << OpponentCard[1] << " " << OpponentCard[2] << " " << OpponentCard[3] << " " << OpponentSubCard1 << " " << OpponentSubCard2 << " " << "(" << OpponentSum << ")" << endl;
    cout << "Your card : " << YourCard[4] << " " << YourCard[5] << " " << YourCard[6] << " " << YourSubCard1 << " " << YourSubCard2 << " " << "(" << YourSum << ")" << endl;
}
void Draw()
{
    cout << "**********************************" << endl
         << "*                                *" << endl
         << "*               DRAW             *" << endl
         << "*                                *" << endl
         << "*                                *" << endl
         << "**********************************" << endl << endl << endl;
    cout << "Opponent's card : " << OpponentCard[1] << " " << OpponentCard[2] << " " << OpponentCard[3] << " " << OpponentSubCard1 << " " << OpponentSubCard2 << " " << "(" << OpponentSum << ")" << endl;
    cout << "Your card : " << YourCard[4] << " " << YourCard[5] << " " << YourCard[6] << " " << YourSubCard1 << " " << YourSubCard2 << " " << "(" << YourSum << ")" << endl;
}






void CheckStatus()
{
    if(YourSum>21)
        {
    Defeat();

        }
    else if (OpponentSum>21&&YourSum<=21)
        {
    Win();

        }
}




void Stay()
{
    if (YourSum>OpponentSum)
    {
    Win();
        }
    else if(YourSum<OpponentSum)
        {
    Defeat();
        }
    else if (YourSum==OpponentSum)
    {
        {
    Draw();
        }
    }
}


int main()
{
srand((int)time(0));
cout << "   ----------------------------------------Hello! Welcome to BLACKJACK 21!-----------------------------------------" << endl;
Start();
CountOpponentSum();
CountYourSum();
CheckStatus();
if (OpponentSum<=21&&YourSum<=21)
{
    cout << "Do you want to hit or stay ?" << endl;
    cout << "1. Hit" << endl;
    cout << "2. Stay" << endl;
    int YourChoice;
    cin >> YourChoice;
    if (YourChoice==1)
        {
        cout << "ROUND 2 " << endl << endl;
        GetMoreCard1();
        CountSumAfterFirstHit();
        CheckStatus();
    if (OpponentSum<=21&&YourSum<=21)
    {cout << "Do you want to hit or stay ?" << endl;
    cout << "1. Hit" << endl;
    cout << "2. Stay" << endl;
    int YourCHoice;
    cin >> YourChoice;
    if (YourChoice==1)
        {
        cout << "ROUND 3 " << endl << endl;
        GetMoreCard2();
        CountSumAfterSecondHit();
        CheckStatus();
        if (OpponentSum<=21&&YourSum<=21)
            Stay();
                    }
    else Stay();
                            }
                                    }
    else Stay();
                                                }
                                                    }

