#include <iostream>
#include <vector>

/*
    A = [1, 2, 3, 4] -> A + 1
    BIT = [0, 0, 0, 0, 0]
        update(x(1), a[0])
            BIT[x]+=a[0]
            x+= (x & -x) -> take the least significant bit
            x(1) = 0001
            -x(1) = 1111 &
            -------------
                    0001 -> least significant 1
            update(x(2), a[0])
                BIT[x]+=a[0]
                x+= (x & -x) -> take the least significant bit
                x(2) = 0010
                -x(2) = 1110 &
                -------------
                        0010 -> least significant 2
            update(x(4), a[0])
                BIT[x]+=a[0]
                x+= (x & -x) -> take the least significant bit
                x(4) = 0100
                -x(4) = 1100
                -------------
                        0100 -> least significant 4
                        (x(8)) -> out of range -> break;
    BIT = [0, 1, 1, 0, 1]
    A = [1, 2, 3, 4]
        continue calling function update
        same process as above
        >> update(x(2), a[1]) 0010 + 0010 = 0100
        >> update(x(4), a[1]) 0100 + 0100 = 1000
        >> update(x(8), a[1]) out of range (break)
    BIT = [0, 1, 3, 0, 3]
    A = [1, 2, 3, 4]
        >> update(x(3), a[2]) 0011 + 0001 = 0100
        >> update(x(4), a[2]) 0100 + 0100 = 1000
        >> update(x(8), a[2]) out of range (break)
    BIT = [0, 1, 3, 3, 6]
    A = [1, 2, 3, 4]
        >> update(x(4), a[3]) 0100 + 0100 = 1000
        >> update(x(8), a[3]) out of range (break)
    BIT = [0, 1, 3, 3, 10]
    A = [1, 2, 3, 4]
    Query a sum:
        range(2, 4) -> need to take the sum from 4 to 1 and then subtract from 2 - 1 index
                    -> since it stores the sum of index bellow this range
            starts from x(4) -> 10
                from x(0) -> return 10
            starts from x(2 - 1) -> 1
                from x(0) -> return 1
            result is 10 - 1 = 9 >> correct
        range(1, 3)
            starts from x(3) -> 3
                from x(2) -> return 3
                from x(0) -> return 6 -> 0 is not part of the operation
            starts from x(1 - 1) -> 0
            result is 6 - 0 = 6 >> correct
        range(2, 3)
            starts from x(3) -> 3
                from x(2) -> return 3
                from x(0) -> return 6 -> 0 is not part of the operation
            starts from x(2 - 1) -> 1
            result is 6 - 1 = 5 >> correct

*/

using namespace std;

vector<int>bit, v;

int sum(int i) {

    int s = 0;

    while(i > 0) {
        s+=bit[i];
        i-=i&(-i);
    }

    return s;
}

void update(int i, int v) {
    for (; i<(int)bit.size(); i+=(i&-i))
        bit[i]+=v;
}

int main() {

    /*
        Inversion Count for an array indicates -
        how far (or close) the array is from being sorted.
        If array is already sorted then inversion count is 0.
        If array is sorted
        in reverse order that inversion count is the maximum.


        Approach using BIT to solve the problem of inversions:
            iterate from back to from of the array and count how many are less
            than a[i]
    */

    int n, t, mm;
    while(cin >> n && n) {
        t = mm = 0;
        v.assign(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] > mm)
                mm = v[i];
        }
        // get maximum number of array
        bit.assign(mm+1, 0);
        // run through each element backwards and count how many are less than v[i]
        for (int i = n - 1; i >= 0; i--) {
            t+=sum(v[i] - 1);
            update(v[i], 1);
        }

        // if number of inversion is even or odd, even the second players win
        if ((t & 1) == 0) {
            // even
            cout << "Carlos\n";
        } else {
            cout << "Marcelo\n";
        }
    }
    return 0;
}
