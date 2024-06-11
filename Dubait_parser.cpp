#include "Dubait_parser.h"



int part_sum(const vector<int> &num, int begin, int length){
int sum = 0;

for(int i = begin;i<length+begin;i++){
    sum+=num[i];
}
return sum;
}

int main(){




    return 0;
}