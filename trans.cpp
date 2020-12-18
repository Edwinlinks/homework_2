#include<iostream>

int main()
{
    using namespace std;

    int a[9],num;

    cout<<"input 0-255""<<endl;

    while(cin>>num)
    {
        if(0<=num&&255>=num)

        {

            for(int i = 7; i >= 0; i--)

            {
                a[i]=(num>>i&1);
            }

            if(a[7]==0&&num<128)
            {
                cout<<"boy"<<endl;

                cout<<"the student number:"<<num<<endl;

                cout<<"the binary code is:";

                for(int i = 7; i >=0; i--)

                {
                    cout<<a[i];
                }

                cout<<endl;
            }

            else

            {
                cout<<"girl"<<endl;

                cout<<"the student number:"<<num-128<<endl;

                cout<<"the binary code is:";

                for(int i = 7; i >=0; i--)

                {
                    cout<<a[i];
                }

                cout<<endl;
            }
        }
       else

        {
            cout<<"error"<<endl;
        }

      cout<<endl<<"input 0-255"<<endl;

        }
    return 0;
}
