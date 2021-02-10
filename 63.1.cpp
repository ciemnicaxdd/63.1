#include <iostream>
#include <fstream>

using namespace std;

class klasa{
    public:
ifstream plik1;
klasa();



};
klasa::klasa(){
plik1.open("ciagi.txt");
}

class klasa2{

public:

    bool siema(string x){
        string a,b;

        if(x.length()%2==1){
            return false;
        }
        for(int i=0;i<x.length()/2;i++){
            a = a + x[i];
        }
       for(int i=x.length()/2;i<x.length();i++)
       {

           b = b+ x[i];
       }
       for(int i=0;i<x.length()/2;i++){
        if(a[i] != b[i]){
            return false;
        }
       }
    return true;
    }

};




int main()
{


   string s;
   klasa y;
   klasa2 z;

   while(!y.plik1.eof()){
    y.plik1>>s;

    if(z.siema(s)){
        cout<<s<<endl;
    }
   }







    return 0;
}
