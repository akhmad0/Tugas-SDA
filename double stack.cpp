#include<iostream>
#define maxi 10

using namespace std;

template<class T>
class dualstack{
    T a[maxi];
    int top1,top2;

    public:
        dualstack();

        // Front stack..
        void push1(T val);
        void pop1();
        T peep1();
        bool isempty1();
        void display1();

        // Back stack..
        void push2(T val);
        void pop2();
        T peep2();
        bool isempty2();
        void display2();
};

template<class T>
dualstack<T>::dualstack(){
    top1=-1;
    top2=maxi;
}

// Front stack functions...

template<class T>
void dualstack<T>::push1(T val){
    if(top1==top2-1){
        cout<<"\nThe Front Stack is already full...";
    }
    else{
        a[++top1]=val;
    }
}

template<class T>
void dualstack<T>::pop1(){
    if(top1!=-1){
        cout<<"\nThe popped element is "<<a[top1]<<endl;
        top1--;
    }
}

template<class T>
T dualstack<T>::peep1(){
    if(top1!=-1)
        return a[top1];
}

template<class T>
bool dualstack<T>::isempty1(){
    if(top1==-1)return true;
    else return false;
}

template<class T>
void dualstack<T>::display1(){
    if(top1!=-1){
        cout<<"\nThe Contents of the Front Stack is..";
        int x=top1;
        while(x!=-1){
            cout<<a[x]<<" ";
            x--;
        }
    }
}

// Back Stack functions...

template<class T>
void dualstack<T>::push2(T val){
    if(top2==top1+1){
        cout<<"\nThe Back Stack is already full...";
    }
    else{
        a[--top2]=val;
    }
}

template<class T>
void dualstack<T>::pop2(){
    if(top2!=maxi){
        cout<<"\nThe popped element is "<<a[top2]<<endl;
        top2++;
    }
}

template<class T>
T dualstack<T>::peep2(){
    if(top2!=maxi)
        return a[top2];
}

template<class T>
bool dualstack<T>::isempty2(){
    if(top2==maxi)return true;
    else return false;
}

template<class T>
void dualstack<T>::display2(){
    if(top2!=maxi){
        cout<<"\nThe Contents of the Back Stack is..";
        int x=top2;
        while(x!=maxi){
            cout<<a[x]<<" ";
            x++;
        }
    }
}

int main()
{
    dualstack<int>ds;
    cout<<"Choice :\n 1) Push to Front stack.\n 2) Pop from Front stack.\n 3) Peep from Front Stack.\n 4) Display from Front Stack.\n 5) Push to Back stack.\n 6) Pop from Back stack.\n 7) Peep from Back Stack.\n 8) Display from Back Stack.\n";
    int ch,t;
    while(1){
        cout<<"\nEnter your choice.";
        cin>>ch;
        if(ch==1){
            cout<<"Enter the element to insert in front stack.";
            cin>>t;
            ds.push1(t);
        }
        else if(ch==2){
            if(!ds.isempty1()){
                ds.pop1();
            }
        }
        else if(ch==3){
            if(!ds.isempty1()){
                cout<<"\nThe topmost element is ."<<ds.peep1();
            }
        }
        else if(ch==4){
            ds.display1();
        }
        else if(ch==5){
            cout<<"Enter the element to insert in front stack.";
            cin>>t;
            ds.push2(t);
        }
        else if(ch==6){
            if(!ds.isempty2()){
                ds.pop2();
            }
        }
        else if(ch==7){
            if(!ds.isempty2()){
                cout<<"\nThe topmost element is ."<<ds.peep2();
            }
        }
        else if(ch==8){
            ds.display2();
        }
        else{
            break;
        }
    }
    return 0;
}