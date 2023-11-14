int decimal_to_binary(int num)
{
        int rem[10];
        int i = 0;

        for (i = 0; i <= 10; i++)
                rem[i] = 0;
        i = 0;
        while (num != 0)
        {
                num = num / 2;
                rem[i] = num % 2;
                i++;
        }
        for (i = i - 1; i >= 0; i--)
                _putchar(rem[i]);
        return (i);
}
