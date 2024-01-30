#include<iostream>
using namespace std;
int main()
{
    int a, b,c,x,y,z;
    x=y=z=0;
    while(1)
    {
        cin >> a;
        cin >> b;
        cout << "Novo grenal (1-sim 2-nao)"<< endl;
        cin >> c;
        if(a>b)
            x++;
        else if(b>a)
            y++;
        else
            z++;
        if(c !=1)
        {
            cout<< x+y+z << " grenais"<<endl;
            cout<< "Inter:"<<x <<endl;
            cout<< "Gremio:"<<y <<endl;
            cout<< "Empates:"<<z <<endl;
            if(x>y)
                cout<< "Inter venceu mais"<<endl;
            else if(y>x)
                cout<< "Gremio venceu mais"<<endl;
            else
                cout<<"Não houve vencedor"<<endl;
            break;
        }





    }
    return 0;
}
