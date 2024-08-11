#include <bits/stdc++.h>
using namespace std;
void pri(string str)
{   cout<<str<<endl;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='y')
           cout<<'e';
        else if(str[i]=='u')
             cout<<'t';
        else if(str[i]=='g')
            cout<<'a';
        else if(str[i]=='r')
            cout<<'r';
        else if(str[i]=='h')
            cout<<'v';
        else if(str[i]=='j')
              cout<<'n';
       else if(str[i]=='x')
          cout<<'o';
       else if(str[i]=='e')
            cout<<'i';
        else if(str[i]=='b')
            cout<<'d';
       else if(str[i]=='c')
           cout<<'l';
        else if(str[i]=='n')
            cout<<'m';
        else if(str[i]=='m')    
             cout<<'s';
        else if(str[i]=='l')
             cout<<'f';
        else if(str[i]=='q')
             cout<<'u';
        else if(str[i]=='v')
             cout<<'w';
       else if(str[i]=='t')
             cout<<'c';
        else if(str[i]=='p')
             cout<<'p';
        else if(str[i]=='a')
            cout<<'y';
        else if(str[i]=='o')
             cout<<'k';
        else if(str[i]=='f')
             cout<<'g';
        else if(str[i]=='w')
             cout<<'b';
        else if(str[i]=='z')
              cout<<'h';
        else if(str[i]==' ')
                 cout<<' ';
                 else cout<<'-';

    }
    cout<<endl<<endl;
}
int main()
{
    string str="tawyrmytqreua em heugc jxv. eu prxuytum mamuynm jyuvxrom gjb bgug lrxn guugtom. gm uzrygum frxv murxjf nygmqrym gry jyybyb. yjtrapuexj qpbguym gjb ynpcxayy urgejejf rybqty remom. gvgryjymm em oya lxr gcc. ej g txjjytuyb vxrcb prxgtuehy yllxrum prxuytu ejlxrnguexj gjb ngejugej urqmu.";
    string str1="tawyrmytqreua em heugc jxv";
    string str2="eu prxuytum mamuynm jyuvxrom gjb bgug lrxn guugtom";
    string str3="gm uzrygum frxv murxjf nygmqrym gry jyybyb";
    string str4="yjtrapuexj qpbguym gjb ynpcxayy urgejejf rybqty remom";
    string str5="gvgryjymm em oya lxr gcc";
    string str6="ej g txjjytuyb vxrcb prxgtuehy yllxrum prxuytu ejlxrnguexj gjb ngejugej urqmu";
    pri(str1);
    pri(str2);
    pri(str3);
    pri(str4);
    pri(str5);
    pri(str6);
    return 0;
}
