namespace squares {

    unsigned long long int square_of_sum(const int n)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
            sum += i;

        return sum*sum;
    }

    unsigned long long int sum_of_squares(const int n)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
            sum += i*i;

        return sum;
    }

    unsigned long long int difference(const int n)
    {
        return square_of_sum(n) - sum_of_squares(n);
    }

}