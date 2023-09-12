int fact(int n){
    int f=1;
    if (n==1) return 1;
    if (n==2) return 2;

    while(n){
        f = f*n;
        n--;
    }
    return f;
}

