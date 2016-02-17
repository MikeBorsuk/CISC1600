#include <iostream>
#include <string>
using namespace std;

int main()
{
        cout << "Please enter 3 numbers with each followed by the enter key." <<endl;
        int i = 0;
        double sum;

        while(i<3)
        {
            double a;
        cin >> a;
        sum += a;
        i++;

        }


        cout << "The sum of the three numbers you entered is " << sum << ".";

return 0;

}
