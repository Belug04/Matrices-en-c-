#include <iostream>

using namespace std;

int main()
{
    /*int tamanio=5;

    for(int i=0;i<tamanio;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<"*";
        {
            cout<<endl;
        }
    }*/

    int matriz[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int numbuscado=10;
    bool encontrado=false;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            if(matriz[i][j] == numbuscado)
            {
                encontrado=true;
                cout
                <<"El elemento "<<numbuscado
                <<" fue encontrado"
                <<endl;
                break;
            }
        }
        if(!encontrado)
        {
            cout
            <<"El elemento "<<numbuscado
            <<" no fue encontrado"
            <<endl;
            break;
        }
    }






    return 0;
}
