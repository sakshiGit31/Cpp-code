#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int A[2][3]={ {2,5,9},{7,3,6}};
    int B[2][3]={ {6,3,4},{9,5,2}};
    int c[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=A[i][j]+B[i][j];
        }
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
            {
        cout<<c[i][j];
        cout<<endl;

            }
        }
        
    }
}


