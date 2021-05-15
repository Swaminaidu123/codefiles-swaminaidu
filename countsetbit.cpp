 int setBits(int N)
    {
        int ct = 0;
        while(N)
        {
            ct = ct + (N&1);
            N >>= 1;
        }
        return ct;
    }