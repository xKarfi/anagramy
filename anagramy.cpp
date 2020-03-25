#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class anagramy
{

       ifstream p1;
       ofstream p2;

  public:

void otworz()
{
    p1.open("wejscie.txt");
    p2.open("wyjscie.txt");
}





void anagram()
{

bool czy_anagram = true;
string s1,s2;
    p2<<"["<<endl;
     while(!p1.eof())
{

    p1>>s1>>s2;

    if(s1.length()!=s2.length())
       czy_anagram=false;



    for (int i=0; i<s1.length()-1; i++)
        for (int j=0; j<s1.length()-1; j++)
            if (s1[j]>s1[j+1])
                swap(s1[j], s1[j+1]);

                 for (int i=0; i<s2.length()-1; i++)
        for (int j=0; j<s2.length()-1; j++)
            if (s2[j]>s2[j+1])
                swap(s2[j], s2[j+1]);

for (int i=0; i<s1.length(); i++)
 {
     if (s1[i] != s2[i])
        czy_anagram = false;
    else
        czy_anagram = true;
}


}
if (czy_anagram == true)
p2<<"{\"slowo1\": "<<s1<<", slowo2\": "<<s2<<", \"anagram\":\""<<" TAK"<<"}"<<endl;
else
p2<<"{\"slowo1\": "<<s1<<", slowo2\": "<<s2<<", \"anagram\":\""<<" NIE"<<"}"<<endl;
p2<<"]"<<endl;
}




void zamknij()
{
    p1.close();
    p2.close();
}

};
int main()
{
anagramy a1;
a1.otworz();
a1.anagram();
a1.zamknij();

    return 0;
}
