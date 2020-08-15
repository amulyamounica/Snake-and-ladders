#include<iostream>
#include<stdio.h>
using namespace std;
int a[10][10];
int p=0,q=0;
void createboard(){
int l=1;
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
a[i][j]=l;
l++;
}
}
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
cout<<a[i][j]<<" ";
if(i==0){
    cout<<" ";
}
}
cout<<endl;
}
}
int gl=0,h;
char p1;
void changeboard(int k,char c){
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
    if(gl!=0 && k==h &&a[i][j]==k){
        
       
        if(i==0)
        cout<<"T"<<" ";
        else{
            cout<<" T"<<" ";
        }
        
    }
    else if(a[i][j]==k){
        if(i==0)
        cout<<c<<" ";
        else
        cout<<" "<<c<<" ";
    }
    else if(gl!=0 && a[i][j]==h ){
        if(i==0)
        cout<<p1<<" ";
        else
        cout<<" "<<p1<<" ";
    }
    else{
        cout<<a[i][j]<<" ";
    }
    if(i==0){
        cout<<" ";
    }
}
cout<<endl;
}
if(p1!=c){
h=k;
gl++;
p1=c;
}
}

void jump(int &p){
if(p==4){
        cout<<"you met a ladder"<<endl;
    p=p+10;
}
if(p==9){
        cout<<"you met a ladder"<<endl;

    p=p+22;
}
if(p==21){
        cout<<"you met a ladder"<<endl;
    p=p+21;
}
if(p==28){
        cout<<"you met a ladder"<<endl;
    p=p+56;
}
if(p==36){
        cout<<"you met a ladder"<<endl;
    p=p+8;
}
if(p==51){
        cout<<"you met a ladder"<<endl;
    p=p+16;
}
if(p==71){
        cout<<"you met a ladder"<<endl;
    p=p+20;
}
if(p==80){
        cout<<"you met a ladder"<<endl;
    p=p+20;
}
}
void drop(int &p){
if(p==16){
        cout<<"you met a snake"<<endl;
    p=6;
}
if(p==47){
        cout<<"you met a snake"<<endl;
    p=26;
}
if(p==49){
        cout<<"you met a snake"<<endl;
    p=11;
}
if(p==64){
        cout<<"you met a snake"<<endl;
    p=60;
}
if(p==56){
        cout<<"you met a snake"<<endl;
    p=53;
}
if(p==87){
        cout<<"you met a snake"<<endl;
    p=24;
}
if(p==93){
        cout<<"you met a snake"<<endl;
    p=73;
}
if(p==95){
        cout<<"you met a snake"<<endl;
    p=75;
}
if(p==98){
        cout<<"you met a snake"<<endl;
    p=78;}
}
int main(){
createboard();
int k;
char s,c;
cout<<"enter name as char of player1"<<endl;
cin>>s;
cout<<"enter name as char of player2"<<endl;
cin>>c;
cout<<"game started"<<endl;
while(1){
        int h;
        y:cout<<"player1"<<endl;
        cout<<"enter 1"<<endl;
        cin>>h;
        if(h==1){
            int l=rand();
            while(l==0){
                l=rand();
            }
        k=((rand()%l)%6)+1;
        cout<<"your number is "<<k<<endl;
        }
        else{
            cout<<"Invalid number! Try again"<<endl;
            goto y;
        }
        p=p+k;
        jump(p);
        drop(p);
        if(p>100){
            p=p-k;

        //cout<<k<<endl;
        }
        changeboard(p,s);
        cout<<"now you on number : "<<p<<endl;
        if(p==100){
            cout<<"congratulations!player1 wins the game"<<endl;
            cout<<"winner is "<<s<<endl;
            break;
        }
        if(k==6){
                cout<<"one more chance"<<endl;
            goto y;
        }
        o:cout<<"player2"<<endl;
        cout<<"enter 2"<<endl;
        cin>>h;
        if(h==2){
            int l=rand();
            while(l==0){
                l=rand();
            }
        k=((rand()%l)%6)+1;
         cout<<"your number is "<<k<<endl;
        }
        else{
        cout<<"Invalid number! Try again"<<endl;
            goto o;
        }
        q=q+k;
        jump(q);
        drop(q);
        if(q>100){
            q=q-k;
        }
        changeboard(q,c);
	cout<<"now you on number : "<<q<<endl;
        if(q==100){
            cout<<"congratulations! player2 wins the game"<<endl;
            cout<<"winner is "<<c<<endl;
            break;
        }
        if(k==6){
            cout<<"one more chance"<<endl;
            goto o;
        }
}
}
