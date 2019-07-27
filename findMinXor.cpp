#MIN XOR VAL

int Solution::findMinXor(vector<int> &numbers) {
    sort(numbers.begin(), numbers.end());
    int smallestXor = numbers[0] ^ numbers[1];
    for (int i = 2; i < numbers.size(); i++) {
        smallestXor = min(smallestXor, numbers[i - 1] ^ numbers[i]);
    }
    return smallestXor;
}
