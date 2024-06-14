#include "Dubait_parser.h"

using namespace std;
void Dubait_parser(){
    vector<long long> F(MAX_SUM + 1, 0);
    for (int i = 0; i < BASE * BASE * BASE * BASE * BASE * BASE; ++i) {
        int t = i;
        int sum = 0;
        

        for (int j = 0; j < HALF; ++j) {
            sum += t % BASE;
            t /= BASE;
        }
        F[sum]++;
    }

    long long count = 0;
    for (int i = 0; i <= MAX_SUM; ++i) {
        count += F[i] * F[i];
    }
    count *= BASE;
    cout <<"Количество красивых чисел : "<< count << endl;
}
int main() {
    Dubait_parser();
    return 0;
}
