#include <iostream>
#include "objek.h"
using namespace std;

char objek(char a[],int k){
int i = 0;
    char q0=' ';

   q0 = Oq1(a,i);
  if(q0=='O'){
    cout<<q0;
   }
}


char Oq1(char a[],int i){
     if(a[i]=='s'){
        i++;
        return Oq2(a,i);
    }
}
char Oq1a(char a[],int i){
     if(a[i]=='b'){
        i++;
        return Oq2a(a,i);
    }
}

char Oq2(char a[],int i){
     if(a[i]=='a'){
        i++;
        return Oq3(a,i);
    } else  if(a[i]=='e'){
        i++;
        return Oq3a(a,i);
    }
}
char Oq2a(char a[],int i){
     if(a[i]=='o'){
        i++;
        return Oq3b(a,i);
    }
}

char Oq3(char a[],int i){
     if(a[i]=='m'){
        i++;
        return Oq4(a,i);
    }else  if(a[i]=='y'){
        i++;
        return Oq4a(a,i);
    }
}
char Oq3a(char a[],int i){
     if(a[i]=='p'){
        i++;
        return Oq4b(a,i);
    }
}
char Oq3b(char a[],int i){
     if(a[i]=='n'){
            i++;
        return Oq4c(a,i);
    }else  if(a[i]=='l'){
        i++;
        return Oq4d(a,i);
    }
}

char Oq4(char a[],int i){
    if(a[i]=='p'){
        i++;
        return Oq5(a,i);
    }
}
char Oq4a(char a[],int i){
    if(a[i]=='u'){
        i++;
        return Oq5a(a,i);
    }
}
char Oq4b(char a[],int i){
    if(a[i]=='a'){
        i++;
        return Oq5b(a,i);
    }
}
char Oq4c(char a[],int i){
    if(a[i]=='e'){
            i++;
        return Oq5c(a,i);
    }
}
char Oq4d(char a[],int i){
    if(a[i]=='a'){
        return 'O';
    }
}

char Oq5(char a[],int i){
         if(a[i]=='o'){
        return 'O';
    }
}//ACCEPTED STATE
char Oq5a(char a[],int i){
     if(a[i]=='r'){
        return 'O';
    }
    }//ACCEPTED STATE
char Oq5b(char a[],int i){
     if(a[i]=='t'){
        i++;
        return Oq6(a,i);
    }
}
char Oq5c(char a[],int i){
     if(a[i]=='k'){
        i++;
        return Oq6a(a,i);
    }
}

char Oq6(char a[],int i){
     if(a[i]=='u'){
        return 'O';
    }
}

char Oq6a(char a[],int i){
     if(a[i]=='a'){
        return 'O';
    }
}
