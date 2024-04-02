#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere8.in");
ofstream fout("numere8.out");

int fr[10],i, x;

int main() {
    
    while (f>>x)
        fr[x]++;
    
    for (i=9999; i>=1; i--) 
     if(fr[i]==0)
        
        g << i << " ";
        if (i%10 == 0)
        g<<endl;
        
        return 0;

}