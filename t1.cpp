// #include<iostream>
// using namespace std;

// class Complex{
//     private:
//     int a,b;
//     public:
//     Complex(){

//     }
//     Complex(int i,int j){
//         a=i;
//         b=j;
//     }
//     void fun(int a,double b){
//         cout<<(a+b)<<endl;
//     }
//     void fun(double a,int b){
//         cout<<(a+b);
//     }

//     Complex operator+(Complex a){
//         Complex c3(0,0);
//         c3.a=this->a+a.a;
//         c3.b=this->b+a.b;
//         return c3;
//     }

//     Complex operator-(Complex a){
//         Complex c3(0,0);
//         c3.a=this->a-a.a;
//         c3.b=this->b-a.b;
//     }

//     void display(){
//         cout<<a<<" "<<endl<<b<<endl;
//     }
// };

// int main(){
//     Complex a1(1,2),a2(3,4);
//     Complex c1=a1+a2;
//     Complex c2=a1-a2;
//     c1.display();
//     c2.display();

// }

// #include<iostream>
// using namespace std;

// class stu{
//     int x,y;
//     public:
//     stu(int i=0,int j=0){
//        x=i;
//        y=j;
//     }
//     operator float(){
//         return float(x)/float(y);
//     }
// };

// int main(){
//     stu s1(2,5);
//     float f=s1;
//     cout<<f;
// }

// #include <iostream>
// using namespace std;

// class stu
// {
//     int x, y;

// public:
//     stu()
//     {
//         x = 2;
//         y = 3;
//     }

//     bool operator>(stu s){
//         if(this->x>s.x&&this->y>s.y){
//             return true;
//         }

//         return false;
//     }

//     friend ostream& operator<<(ostream& out, stu& s)
//     {
//         out << "The value of a:" << s.x;
        
//         out << "The value of b:" << s.y;
//         return out;
//     }

//     friend istream& operator>>(istream& in,stu& s){
//         in>>s.x;
//         in>>s.y;
//         return in;
//     }
// };

// int main()
// {
//     stu s,s2;
//     cin>>s>>s2;
    

//     if(s>s2){
//          cout<<"Yes this is true"<<endl;
//          cout<<s<<"  >   "<<s2;
//     }else{
//         cout<<"bhak bhosrike";
//     }
    
// }


