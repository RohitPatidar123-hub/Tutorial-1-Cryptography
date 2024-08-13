#include <bits/stdc++.h>
using namespace std;
void pri2(string str)
{
   cout<<str<<endl;  
    for(int i=0;i<str.size();i++)
        {
           if(str[i]=='u')
           cout<<'r';
            else if(str[i]=='y')
            cout<<'t';
            else if(str[i]=='k')
            cout<<'a';
            else if(str[i]=='r')
            cout<<'i';
            else if(str[i]=='g')
            cout<<'e';
            else if(str[i]=='w')
            cout<<'n';
            else if(str[i]=='x')
            cout<<'c';
            else if(str[i]=='j')
            cout<<'h';                                          
            else if(str[i]=='a')
            cout<<'p';
            else if(str[i]=='z')
            cout<<'y';
            else if(str[i]=='f')
            cout<<'d';
        else if(str[i]=='z')
        cout<<'y';
        else if(str[i]=='s')
        cout<<'g';
        else if(str[i]=='v')
        cout<<'o';
        else if (str[i]=='h')   
        cout<<'m';
        else if(str[i]=='m')
        cout<<'u'; 
        else if(str[i]=='f')
        cout<<'d';
        else if(str[i]=='b')
        cout<<'f';
        else if(str[i]=='r')
        cout<<'i';
            else cout<<'-';
        }
        cout<<endl<<endl;
}
int main()
{
    string str="xuzayvsukajzauvygxyofkykizxvwpguyrwsryrwyvkogxmugxvfggwxuzayrvwhgyjvfokwfogxmugcgzokugxumxrklbvuyjroauvxgoougsmlkumafkygokwfkmfryojglahkrwykrwxuzayvsukajrxogxmuryzxuzayvsukajzrogoogwyrklbvuhkrwykrwrwsyjgaurpkxzkwfogxmuryzvbfrsryklrwbvuhkyrvw";
    pri2(str);
    return 0;
    

}
