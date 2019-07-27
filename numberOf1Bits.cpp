int Solution::numSetBits(unsigned int n) {

    if(n==0) return 0;
    else
    return (n&1)+numSetBits(n>>1);  
    
    //here n&1 acts as a counter followed by right shift addition
    //if nth bit is 1 ...so 1&1 =1 therefore counter will increment
}
