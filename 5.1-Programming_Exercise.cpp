// 2

#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    int l = 1;
    int arr[] = {1,2,3,4,5};
    int rowLine = 0;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= rows-i; ++j)
        {
            cout <<" ";
        }

        for (int k = 0; k < l ; k++){
            cout <<arr[rowLine];
        }
    
        cout << endl;
        l+=2;
        rowLine++;
    }    
    return 0;
}

// 3 

#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    int l = 1;
    int arr[] = {1,2,3,4,5};
    int rowLine = 0;
    int iteration = 0;

    for(int i = 1; i <= rows; ++i){
        int forNumPatt = 0;
        
        for(int j = 1; j <= rows-i; ++j){
            cout <<" ";
        }

        for (int k = 0; k < l ; k++){
            cout << arr[rowLine + forNumPatt];
            
            if (rowLine <= iteration){
                forNumPatt++;
            } else {
                forNumPatt--;
            }
            
            iteration++;
        }
    
        cout << endl;
        l+=2;
        rowLine++;
        iteration=0;
    }    
    return 0;
}