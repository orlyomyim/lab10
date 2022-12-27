#include<iostream>
using namespace std;

int printO(int N ,int M)
{
    if(N > 0 and M > 0)
    {
        for (int Y = N ; Y > 0 ; Y-- )
        {
            for(int Z = M ; Z > 0 ; Z-- )
            {
                cout << "O" ;
            }
            cout << "\n" ;
        }
    }
    else
    {
    cout << "Invalid input" ;
    }
return 0 ;
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
