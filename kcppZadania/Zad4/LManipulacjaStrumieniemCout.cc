#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
     float a = 2.73f;
     float b = 3.1415f;
     float T = 1.4f;

     float out = pow(a, b);
     float out1 = a + b;
     float out2 = b - a;
     float average = (out + out1 + out2) / 3.0f;
     float T_average = T * 12.3456f;

     cout << fixed << setprecision(5);

     cout << "Wynika naszego działania: " << b << " jest niepoprawny ale:\n";

     cout << "    " << left << setw(8) << "output:"
          << right << setw(8) << setprecision(3) << out
          << "    T:  "
          << setw(6) << setprecision(3) << T << "\n";

     cout << "    " << left << setw(8) << "output1:"
          << right << setw(8) << setprecision(4) << out1
          << "    T:  "
          << setw(8) << setprecision(5) << T * 20 << "\n";

     cout << "    " << left << setw(8) << "output2:"
          << right << setw(8) << setprecision(4) << out2
          << "    T:  "
          << setw(9) << setprecision(6) << T * 30 << "\n";

     cout << "    " << "---------------------------------\n";

     cout << "    " << left << setw(8) << "average:"
          << right << setw(8) << setprecision(4) << average
          << "   T:  "
          << setw(9) << setprecision(6) << T_average << "\n";
}
