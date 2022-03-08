int _atoi(char *s)
{
	int digits;
	int i = 0;
	int j = 0;
	int k = 0;
	int sign = 1;
	int acc = 0;
	int factor = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else if (isa_number(s[i]))
		{
			digits = count_digits(s, i);
			j = digits - 1;

			if (digits > 10)
			{
				break;
			}
			else
			{
				for (k = i; k < i + digits; k++)
				{
					factor = sign * (s[k] - '0') * power_int(10, j);
					if (!(sum_int_overflows(acc, factor)))
					{
						acc += factor;
						j--;
					}
					else
					{
						acc = 0;
						break;
					}
				}
			break;
			}
		}
		else
		{
			i++;
		}
	}

	return (acc);
}
