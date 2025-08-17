// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the no : ";
//     cin>>n;

//     for(int i = 0; i < n; i++){        //Inner loop
//         char ch='A';
//         for(int j = 0; j < n; j++){     //Outer loop
//             cout<<ch;
//             ch=ch + 1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no : ";
    cin>>n;
    int num=1;
    for(int i = 0; i < n; i++){        //Inner loop
        
        for(int j = 0; j < n; j++){     //Outer loop
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}