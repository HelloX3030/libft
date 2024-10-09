
int ft_atoi(const char* str)
{
    int num;
    int sign;

    num = 0;
    while (*str == ' ')
        str++;
    sign = 1;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str && *str >= '0' && *str <= '9')
    {
        num *= 10;
        num += *str - '0';
        str++;
    }
    return (num * sign);
}
