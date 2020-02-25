#include <iostream>
#include "predikat.h"
using namespace std;

//aku


char predikat(char a[],int k){
    int i = 0;
    char q0=' ';

   q0 = q1(a,i);
    if(q0=='P'){
    cout<<q0;
   }
}


char q1(char a[],int i){
    if(a[i]=='c'){
        i++;
        return q2(a,i);
    }else

    if(a[i]=='m'){
        i++;
        return q2a(a,i);
    } else

    if(a[i]=='b'){
        i++;
        return q2b(a,i);
    }
}

char q2(char a[],int i){
    if(a[i]=='a'){
        i++;
        return q3(a,i);
    }
}
char q2a(char a[],int i){
    if(a[i]=='a'){
        i++;
        return q3a(a,i);
    }
}
char q2b(char a[],int i){
    if(a[i]=='e'){
        i++;
        return q3b(a,i);
    }
}

char q3(char a[],int i){
    if(a[i]=='r'){
        i++;
        return q4(a,i);
    }
}
char q3a(char a[],int i){
    if(a[i]=='k'){
        i++;
        return q4a(a,i);
    }else if(a[i]=='s'){
        i++;
        return q4a(a,i);
    } else if(a[i]=='i'){
        i++;
        return q4b(a,i);
    }
}
char q3b(char a[],int i){
    if(a[i]=='l'){
        i++;
        return q4c(a,i);
    }
}

char q4(char a[],int i){
    if(a[i]=='i'){
        return 'P';
    }
}

char q4a(char a[],int i){
    if(a[i]=='a'){
        i++;
        return q5(a,i);
        return q5a(a,i);
    }
}

char q4b(char a[],int i){
    if(a[i]=='n'){
        return 'P';
    }
}

char q4c(char a[],int i){
    if(a[i]=='i'){
        return 'P';
    }
}
char q5(char a[],int i){
    if(a[i]=='n'){
        return 'P';
    }
} //ACEPTED STATE
char q5a(char a[],int i){
    if(a[i]=='k'){
        return 'P';
    }
    //ACPETED STATEs
}
