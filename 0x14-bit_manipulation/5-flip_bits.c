unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num, countNum = 0;
	unsigned long int currentNum;
	unsigned long int exNum = n ^ m;

	for (num = 63; num >= 0; num--)
	{
		currentNum = exNum >> num;
		if (currentNum & 1)
			countNum++;
	}

	return (countNum);
}
