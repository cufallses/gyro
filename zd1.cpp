#include <iostream>

using namespace std;

#include <iostream> 
#include <string> 
 
int main() 
{ 
    std::string str;  
    std::string buffer="aeiouAEIOU";
    unsigned int count=0, count_g=0; 
    unsigned int x, j; 
    
    int a=0, e=0, i=0, o=0, u=0, A=0, E=0, I=0, O=0, U=0;
    
    std::getline(std::cin,str);
    
    for ( x=0; x<str.size(); x++) 
        if(isalpha(str[x])) 
            count++;
            
    for ( x=0; x<str.size(); x++) 
        for ( j=0; j<buffer.size(); j++)  
            if(str[x] == buffer[j]) 
            {
                count_g++; 
                if(str[x] == 'a') 
                    a++; 
                if(str[x] == 'u') 
                    u++; 
                if(str[x] == 'e') 
                    e++; 
                if(str[x] == 'i') 
                    i++; 
                if(str[x] == 'o') 
                    o++; 
                if(str[x] == 'A')
                    A++;
                if(str[x] == 'U')
                    U++;
                if(str[x] == 'E')
                    E++;
                if(str[x] == 'I')
                    I++;
                if(str[x] == 'O')
                    O++;
                continue;
            } 
            a=a+A;
            u=u+U;
            e=e+E;
            i=i+I;
            o=o+O;
            
            
           cout << "a=" << a;
           cout << " u=" << u;
           cout << " e=" << e;
           cout << " i=" << i;
           cout << " o=" << o;
    
}

