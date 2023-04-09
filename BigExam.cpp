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

string OpponentCard1,OpponentCard2,OpponentCard3, OpponentSubCard1, OpponentSubCard2;
string YourCard1,YourCard2,YourCard3, YourSubCard1, YourSubCard2;
string test;
int OpponentSum=0, YourSum=0;;
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
srand((int)time(0));
int randomIndex1 = rand() % CardCount;
test=CardBox[randomIndex1];
OpponentCard1=test;
RemoveCard();
CardCount --;
int randomIndex2 = rand() % CardCount;
test=CardBox[randomIndex2];
OpponentCard2=test;
RemoveCard();
CardCount --;
int randomIndex3 = rand() % CardCount;
test=CardBox[randomIndex3];
OpponentCard3=test;
RemoveCard();
CardCount --;
cout << "Opponent's card : " << OpponentCard1 << " " << "?" << " " << "?" << " " << endl;
int randomIndex4 = rand() % CardCount;
test=CardBox[randomIndex4];
YourCard1=test;
RemoveCard();
CardCount --;
int randomIndex5 = rand() % CardCount;
test=CardBox[randomIndex5];
YourCard2=test;
RemoveCard();
CardCount --;
int randomIndex6 = rand() % CardCount;
test=CardBox[randomIndex6];
YourCard3=test;
RemoveCard();
CardCount --;
cout << "Your card : " << YourCard1 << " " << YourCard2 << " " << YourCard3 << " " << endl;
}



void CountOpponentSum()
{
    char sub1 = OpponentCard1.front();
    if ('2'<=sub1&&sub1<='9')
    {
    OpponentSum= OpponentSum + (sub1 -'0');
    }
    else OpponentSum = OpponentSum + 5;

    char sub2 = OpponentCard2.front();
    if ('2'<=sub2&&sub2<='9')
    {
    OpponentSum= OpponentSum + (sub2 -'0');
    }
    else OpponentSum = OpponentSum + 5;


    char sub3 = OpponentCard3.front();
    if ('2'<=sub3&&sub3<='9')
    {
    OpponentSum= OpponentSum + (sub3 -'0');
    }
    else OpponentSum = OpponentSum + 5;
}
void CountYourSum()
{
    char sub4 = YourCard1.front();
    if ('2'<=sub4&&sub4<='9')
    {
    YourSum= YourSum + (sub4 -'0');
    }
    else YourSum = YourSum + 5;

    char sub5 = YourCard2.front();
    if ('2'<=sub5&&sub5<='9')
    {
    YourSum= YourSum + (sub5 -'0');
    }
    else YourSum = YourSum + 5;

    char sub6 = YourCard3.front();
    if ('2'<=sub6&&sub6<='9')
    {
    YourSum= YourSum + (sub6 -'0');
    }
    else YourSum = YourSum + 5;
}





void GetMoreCard1()
{
srand((int)time(0));
int randomIndex7 = rand() % CardCount;
test=CardBox[randomIndex7];
OpponentSubCard1=test;
RemoveCard();
CardCount --;
cout << "Opponent's card : " << OpponentCard1 << " " << OpponentCard2 << " " << "?" << " " << "?" << " " << endl;

int randomIndex8 = rand() % CardCount;
test=CardBox[randomIndex8];
YourSubCard1=test;
RemoveCard();
CardCount --;
cout << "Your card : " << YourCard1 << " " << YourCard2 << " " << YourCard3 << " " << YourSubCard1 << endl;
}
void CountSumAfterFirstHit()
{
    char sub7 = OpponentSubCard1.front();
    if ('2'<=sub7&&sub7<='9')
    {
    OpponentSum= OpponentSum + (sub7 -'0');
    }
    else OpponentSum = OpponentSum + 5;

    char sub8 = YourSubCard1.front();
    if ('2'<=sub8&&sub8<='9')
    {
    YourSum= YourSum + (sub8 -'0');
    }
    else YourSum = YourSum + 5;
}



void GetMoreCard2()
{
srand((int)time(0));
int randomIndex9 = rand() % CardCount;
test=CardBox[randomIndex9];
OpponentSubCard2=test;
RemoveCard();
CardCount --;
cout << "Opponent's card : " << OpponentCard1 << " " << OpponentCard2 << " " << "?" << " " << "?" << " " << "?" << " " << endl;

int randomIndex10 = rand() % CardCount;
test=CardBox[randomIndex10];
YourSubCard2=test;
RemoveCard();
CardCount --;
cout << "Your card : " << YourCard1 << " " << YourCard2 << " " << YourCard3 << " " << YourSubCard1 << " " << YourSubCard2 << endl;
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

}
void Win()
{
    cout << "**********************************" << endl
         << "*                                *" << endl
         << "*             YOU WIN            *" << endl
         << "*                                *" << endl
         << "*                                *" << endl
         << "**********************************" << endl << endl << endl;
}
void Draw()
{
    cout << "**********************************" << endl
         << "*                                *" << endl
         << "*               DRAW             *" << endl
         << "*                                *" << endl
         << "*                                *" << endl
         << "**********************************" << endl << endl << endl;

}






void CheckStatus()
{
    if(YourSum>21)
        {
    Defeat();
    cout << "Opponent's card : " << OpponentCard1 << " " << OpponentCard2 << " " << OpponentCard3 << " " << OpponentSubCard1 << " " << OpponentSubCard2 << endl;
    cout << "Your card : " << YourCard1 << " " << YourCard2 << " " << YourCard3 << " " << YourSubCard1 << " " << YourSubCard2 << endl;
        }
    else if (OpponentSum>21&&YourSum<=21)
        {
    Win();
    cout << "Opponent's card : " << OpponentCard1 << " " << OpponentCard2 << " " << OpponentCard3 << " " << OpponentSubCard1 << " " << OpponentSubCard2 << endl;
    cout << "Your card : " << YourCard1 << " " << YourCard2 << " " << YourCard3 << " " << YourSubCard1 << " " << YourSubCard2 << endl;
        }
}




void Stay()
{
    if (YourSum>OpponentSum)
    {
    Win();
    cout << "Opponent's card : " << OpponentCard1 << " " << OpponentCard2 << " " << OpponentCard3 << " " << OpponentSubCard1 << " " << OpponentSubCard2 << endl;
    cout << "Your card : " << YourCard1 << " " << YourCard2 << " " << YourCard3 << " " << YourSubCard1 << " " << YourSubCard2 << endl;
        }
    else if(YourSum<OpponentSum)
        {
    Defeat();
    cout << "Opponent's card : " << OpponentCard1 << " " << OpponentCard2 << " " << OpponentCard3 << " " << OpponentSubCard1 << " " << OpponentSubCard2 << endl;
    cout << "Your card : " << YourCard1 << " " << YourCard2 << " " << YourCard3 << " " << YourSubCard1 << " " << YourSubCard2 << endl;
        }
    else if (YourSum==OpponentSum)
    {
        {
    Draw();
    cout << "Opponent's card : " << OpponentCard1 << " " << OpponentCard2 << " " << OpponentCard3 << " " << OpponentSubCard1 << " " << OpponentSubCard2 << endl;
    cout << "Your card : " << YourCard1 << " " << YourCard2 << " " << YourCard3 << " " << YourSubCard1 << " " << YourSubCard2 << endl;
        }
    }
}


int main()
{
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

