#include <iostream>
#include "subjek.h"
using namespace std;

//aku


char Subjek(char a[],int k){
    int i = 0;
    char q0=' ';

   q0 = Sq1(a,i);

  if(q0=='S'){
    cout<<q0;
   }

}

char Sq1(char a[],int i){
    if(a[i]=='a'){
        i++;
        return Sq2(a,i);
    }else if(a[i]=='i'){
        i++;
        return Sq2a(a,i);
    }
}

char Sq2(char a[],int i){
    if(a[i]=='k'){
        i++;
        return Sq3(a,i);
    }else if (a[i]=='n'){
        i++;
        return Sq3a(a,i);
    }else if (a[i]=='y'){
        i++;
        return Sq4(a,i);
    }else if (a[i]=='d'){
        i++;
        return Sq4a(a,i);
    }
}

char Sq2a(char a[],int i){
    if(a[i]=='b'){
        i++;
        return Sq3(a,i);
    }
}

char Sq3(char a[],int i){ //ACEPTED STATE
    if(a[i]=='u'){

        return 'S';
    }
}

char Sq3a(char a[],int i){ //ACEPTED STATE
    if(a[i]=='i'){

        return 'S';
    }
}

char Sq4(char a[],int i){
    if(a[i]=='a'){
        i++;
        return Sq5(a,i);
    }
}
char Sq4a(char a[],int i){
    if(a[i]=='i'){
        i++;
        return Sq5a(a,i);
    }
}

char Sq5(char a[],int i){
if(a[i]=='h'){
        return 'S';
    }
} //ACEPTED STATE
char Sq5a(char a[],int i){
    if(a[i]=='k'){
        return 'S';
    }

}//ACEPTED STATE


/*
    FINAL STATE
*/

