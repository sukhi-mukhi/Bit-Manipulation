//logic GFG - Number of 1 Bits 

int setBits(int n) {
    
    int binaryNum[32];
    int i = 0;
    int cnt=0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--){
        if(binaryNum[j]==1)cnt++;
    }
    
    return cnt; 
    }
