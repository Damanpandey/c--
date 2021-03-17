 #include<iostream>
 #include<string>
 using namespace std;
int rec(int a){
    int c;
    if(a>1)
    
    {
         c= a*rec(a-1);
         return c;
    }
    else{
         c= 1;
         return c;
    }
     
}
int main(){
    int a,result;
    cout<<"enter the positive number";
    cin>> a;
    rec(a);
    result = rec(a);
    cout<<"your fact"<<result;

    return 0;
}