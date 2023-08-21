#include "iostream"
#include "random"
using namespace std;
int main()
{
    cout<<"Correct = +3500 " << "Incorrect = -2000 "<<endl;
    cout<<"Enter Money: Rs ";
    int money;cin>>money;


    random_device rd;
    mt19937 gen(rd());
    int lower=0;
    int upper=9;
    uniform_int_distribution<int> distribution(lower,upper);


    bool flag=false;
    if(money>=2000) {

        while (money > 0) {
            int random = distribution(gen);

            cout << "Guess: ";
            int guess;
            cin >> guess;
            if (guess == random) {
                cout << "Matched" << endl;
                money += 3000;
            } else {
                cout << "Not Matched" << endl;
                if(money<2000)
                    money = 0;
                else
                    money -= 2000;
            }

            if (money == 0)
                flag = true;

        }
        if (flag)cout << "0 Money...Recharge to play Again" << endl;
    }
    else
        cout <<"Need Minimum -- 2000  to Play" << endl;
}