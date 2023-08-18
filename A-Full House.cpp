#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cards[14] = {};  //initialize an array of size 14
    for(int i=0;i<5;i++)
    {
        int n;
        cin>>n;
        cards[n]++;  //is used to increment the count of occurrences for the card number n in the cards array. Each index of the array represents
      //a unique card number (from 1 to 13), and the value at each index stores the count of occurrences of that card number.
    }
    bool threenum = false;
    bool twonum = false;
    
    for(int i=0;i<=13;i++)
    {
        if(cards[i]==3) 
            threenum=true;
        else if(cards[i]==2)
            twonum=true;
    }
    if(threenum && twonum)  cout<<"Yes"<<endl;
    else  cout<<"No"<<endl;
    return 0;
}
