#include <bits/stdc++.h>
#include "subjek.h"
#include "objek.h"
#include "predikat.h"

using namespace std;
const int N = 4;



// driver code
int main()
{
    // assigning value to string s
    int j =0;
    cout<<"Masukan kalimat :";
    string apa [N] ={};
    while(j<=N){
        cin>>apa[j];
        if(apa[j]!="."){
            j++;
        }else{
            break;
        }

    }

    int i=0;
    int n=0;
    char char_array[n];
    char s,p,o,k;


    while(i<N-1){
        n = apa[i].length();
        char_array[n+1];
        strcpy(char_array, apa[i].c_str());

        s = Subjek(char_array,n);
        p = predikat(char_array,n);
        o = objek(char_array,n);
       /* for (int k=0; k<n; k++){
        cout <<"The char :"<< char_array[k]<<" ";//ini nanti di hapus terus ganti sama stack pengatur SPOK nya //

        }*/


    i=i+1;
    }




    return 0;
}
