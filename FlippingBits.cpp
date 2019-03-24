#include <bits/stdc++.h>
#include<math.h>
using namespace std;

// Complete the flippingBits function below.
long flippingBits(long n) 
{
    int j=31;
    int a[32];
    while(j>=0)
    {
        a[j] = 1 - (n%2);
          n/=2;
         j--;
    }
    j=0;
    long long int sum = 0;
    while(j<32)
     {
         sum = sum + a[31-j]*pow(2,j);
         j++;
     }
     return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long result = flippingBits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
