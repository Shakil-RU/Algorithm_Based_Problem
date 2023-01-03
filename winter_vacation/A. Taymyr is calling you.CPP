#include <iostream>  
using namespace std;  
int main()  
{  
    int m,n,z,a, max_num, flag = 1;  
    cin >> m >> n >> z;      
      
    max_num = (m > n) ? m : n;  
      
    while (flag)    
    {  
        if(max_num % m == 0 && max_num % n == 0)  
        {  
         a = max_num;  
            break;  
        }  
        ++max_num; 
    }
    cout<<z/a<<endl;
    return 0;  
}  
