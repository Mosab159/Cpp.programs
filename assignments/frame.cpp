#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    char cycle1;

    do
    {
        float prog_num;
        cout << "☆▪︎☆▪︎☆full version☆▪︎☆▪︎☆\n\n\n";
        cout << "even and odd number checker [1]\n";
        cout << "factorial calculator        [2]\n";
        cout << "multiplication table        [3]\n";
        cout << "squire root                 [4]\n";
        cout << "simple calculator           [5]\n";
        cout << "measures converter          [6]\n";
        cout << "arrays multiplication       [7]\n";
        cout << "avaerege marks              [8]\n";
        cout << "circumistance calculator    [9]\n";
        cout << "guess the number game      [10]\n\n";

        cout << "entre programm number: ";
        cin >> prog_num;

        switch (int(prog_num))
        {
        case 1:
        {
            int x, y;
            cout << "●●●●Even And Odd Number Checker●●●●\n\n";
            cout << "entre a value: ";
            cin >> x;
            y = x % 2;
            if (y == 0)
                cout << "the num is even\n";
            else
                cout << "the num is odd\n";
            break;
        }

        case 2:
        {
            int n, k = 1;
            cout << "●●●●Factorial Calculator●●●●\n\n";
            cout << "entre a  positive value: ";
            cin >> n;
            if (n < 0)
            {
                cout << "the the num is out of the domain!\n";
            }
            else
            {
                for (int i = n; i > 0; i--)
                {
                    k *= i;
                }
                cout << "factorial is: " << k << endl;
            }
            break;
        }
        case 3:
        {
            int n, k = 1;
            cout << "●●●multiply table●●●\n";
            cout << "Entre a number from 1-12: ";
            cin >> n;
            if (n < 1 || n > 12)
                cout << "\nyou are out of the range!\n";
            else
            {
                int i;
                for (i = 1; i <= 12; i++)
                {
                    k = n * i;
                    cout << n << "*" << i << "=" << k << endl;
                }
            }
            break;
        }
        case 4:
        {
            int n;
            double k;
            cout << "●●●squire root calculator●●●\n";
            cout << "Entre a positive number: ";
            cin >> n;
            if (n < 0)
            {
                cout << "\nyou are out of the domain!\n";
            }
            else
            {
                k = pow(n, 0.5);
                cout << "sqire root of " << n << " = " << k << endl;
            }
            break;
        }
        case 5:
        {
            int opreation;
            double a, b;
            cout << "●●●calculator●●●\n";
            cout << "entre the first number: ";
            cin >> a;
            cout << "entre the second number: ";
            cin >> b;
            cout << "SUM[1]\nSUB[2]\nPROD[3]\nDIV[4]\n";
            cout << "entre the number of the opreation: ";
            cin >> opreation;
            switch (opreation)
            {
            case 1:
            {
                int sum = a + b;
                cout << a << " + " << b << " = " << sum << endl;
                break;
            }

            case 2:
            {

                cout << a << " - " << b << " = " << a - b << endl;
                break;
            }

            case 3:
            {
                cout << a << " * " << b << " = " << a * b << endl;
                break;
            }

            case 4:
            {

                if (b == 0)
                    cout << "can not divide by zero!\n";
                else
                    cout << a << " / " << b << " = " << a / b << endl;
                break;
            }
            default:
            {
                cout << "\nwrong opreator number!\n";
                break;
            }

            break;
            }
        }
        break;

        case 6:
        {
            float x;
            int w;
            cout << "●●●●measures converter●●●●\n\n";
            cout << "entre a value: ";
            cin >> x;
            cout << "\nconvert from metre to centmetre[1]\n";
            cout << "\nconvert from centmetre to metre[2]\n";
            cout << "\nconvert from kilogram to gram[3]\n";
            cout << "\nconvert from gram to kilogram[4]\n";
            cin >> w;
            switch (w)
            {
            case 1:
                cout << x << "m= " << (x * 100) << " cm\n";
                break;
            case 2:
                cout << x << "cm= " << (x / 100) << " m\n";
                break;

            case 3:
                cout << x << "kg= " << (x * 1000) << " g\n";
                break;
            case 4:
                cout << x << "g= " << (x / 1000) << " kg\n";
                break;

            default:
                cout << "\nwrong opreator number!\n";
                break;
            }
            break;
        }
        case 7:
        {
            cout << "●●●●multiplication of arrays●●●●\n\n";

            int m, n, p;

            cout << "entre the rows of the first array: ";

            cin >> m;

            cout << "entre the colmuns of the first array: ";

            cin >> n;

            cout << "entre the columns of the second array: ";

            cin >> p;

            int A[m][n];

            int B[n][p];

            int C[m][p];

            // input the first array

            for (int i = 0; i < m; i++)

            {

                for (int j = 0; j < n; j++)

                {

                    cout << "\nentre a value: ";

                    cin >> A[i][j];
                }
            }

            // output of the first array

            cout << "\nthe first array: \n";

            for (int i = 0; i < m; i++)

            {

                for (int j = 0; j < n; j++)

                {

                    cout << A[i][j] << "\t";
                }

                cout << endl;
            }

            // input of the second array

            for (int i = 0; i < n; i++)

            {

                for (int j = 0; j < p; j++)

                {

                    cout << "\nentre a value: ";

                    cin >> B[i][j];
                }
            }

            // output of the second array

            cout << "\nthe second array: \n";

            for (int i = 0; i < n; i++)

            {

                for (int j = 0; j < p; j++)

                {

                    cout << B[i][j] << "\t";
                }

                cout << endl;
            }

            // multiplication process

            for (int i = 0; i < m; i++)

            {

                for (int j = 0; j < p; j++)

                {

                    C[i][j] = 0;

                    for (int k = 0; k < n; k++)

                    {

                        C[i][j] += (A[i][k] * B[k][j]);
                    }
                }
            }

            // output of the product

            cout << "\nthe product of the two arrays: \n";

            for (int i = 0; i < m; i++)

            {

                for (int j = 0; j < p; j++)

                {

                    cout << C[i][j] << "\t";
                }

                cout << endl;
            }
            break;
        }
        case 8:
        {
            cout << "\n●●●●Averege Marks●●●●\n\n";
            int n;

            float score, avg, sum = 0;

            cout << "\nentre the subjects number: ";

            cin >> n;

            for (int i = 1; i <= n; i++)

            {

                cout << "\nentre the degree of subject number " << i << " : ";

                cin >> score;

                if (score < 0 || score > 100)

                {

                    cout << "\nunvalid degree\n";

                    score = 0;
                }

                else

                {

                    if (score >= 50 && score < 60)

                        cout << "\nyou get 《C》\n";

                    else if (score >= 60 && score < 70)

                        cout << "\nyou get 《B》\n";

                    else if (score >= 70 && score < 80)

                        cout << "\nyou get 《B+》\n";

                    else if (score >= 80 && score < 90)

                        cout << "\nyou get 《A》\n";

                    else if (score >= 90 && score < 100)

                        cout << "\nyou get 《A+》\n";

                    else if (score < 50)

                        cout << "\nyou get 《F》\n";
                }

                sum += score;
            }

            avg = (sum / n);

            cout << "the averge = " << avg;

            if (avg >= 50 && avg < 60)

                cout << "\nyou get 《C》\n";

            else if (avg >= 60 && avg < 70)

                cout << "\nyou get 《B》\n";

            else if (avg >= 70 && avg < 80)

                cout << "\nyou get 《B+》\n";

            else if (avg >= 80 && avg < 90)

                cout << "\nyou get 《A》\n";

            else if (avg >= 90 && avg < 100)

                cout << "\nyou get 《A+》\n";

            else if (avg < 50)

                cout << "\nyou get 《F》\n";
            break;
        }
        case 9:
        {
            int op;

            float x;

            cout << "\n●●●●circumistance calculator●●●●\n\n";

            cout << "squire    [1]\nrectangle [2]\ncircle    [3]\ntriangle  [4]\n";

            cout << "entre opreator number: ";

            cin >> op;

            switch (op)

            {

            case 1:

            {

                cout << "entre the side length of the sqire: ";

                cin >> x;

                cout << "circumistance =" << (x * 4) << endl;

                break;
            }

            case 2:

            {

                float w;

                cout << "entre the side length of the rectangle: ";

                cin >> x;

                cout << "entre the width of the rectangle: ";

                cin >> w;

                cout << "the circumistance = " << (2 * x + 2 * w) << endl;

                break;
            }

            case 3:

            {

                double const pi = 3.14159265358979;

                cout << "entre the radius of the circle: ";

                cin >> x;

                cout << "circumistance = " << (2 * pi * x) << endl;

                break;
            }

            case 4:

            {

                cout << "entre the side length of the triangle: ";

                cin >> x;

                cout << "circumistance = " << (3 * x) << endl;

                break;
            }

            default:

                cout << "wrong opreator number!<<" << endl;

                break;
            }
            break;
        }
        case 10:
        {
            cout << "\n●●●●Guess the number game●●●●\n\n";
            int x, y, i = 0;
            srand((time(0))); // to make the seed the current second num from the begining of c language
            // the seed is the base number that the function opreates equations on
            x = rand() % 10 + 1; // to start the range from 0 to 10
            // cout << x;
            cout << "\nentre a value: ";

            do
            {
                cin >> y;
                i++; // will count the right guess also
                if (y == int(x))
                {
                    cout << "yahh you did it!\n\nthe number is " << x;
                    cout << "\nyou tried " << i << " times";
                    break;
                }
                else
                {
                    if (y > x)
                    {
                        cout << "ops wrong number!\n\nthe right number is smaller\n\ntry again...\n";
                    }
                    else if (y < x)
                    {
                        cout << "ops wrong number!\n\nthe right number is greater\n\ntry again...\n";
                    }
                }

            } while (y != x);
            break;
        }
        default:
        {
            cout << "wrong programm number !...\n";
            break;
        }
        }
        cout << "\ndo you want to return back to main the menu?\n\n";
        cout << "Yes[y]\nNo[any charecter]\n";
        cin >> cycle1;
    }

    while (cycle1 == 'y' || cycle1 == 'Y');
    cout << "bye bye...♧\n";

    return 0;
}
