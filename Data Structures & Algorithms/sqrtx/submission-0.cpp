class Solution {
    public:
    int mySqrt(int a)
    {
        if(a==0){
            return 0;
        }

        int result = 1;
        for(int i =1;i<=a;i++)
        {
            if((long long) i * i > a){
                return result;
            }
            result = i;
        }

        return result;
    }
};