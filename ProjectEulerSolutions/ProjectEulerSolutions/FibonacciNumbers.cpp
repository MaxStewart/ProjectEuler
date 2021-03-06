/*
	Each new term in the Fibonacci sequence is generated by adding 
	the previous two terms. By starting with 1 and 2, the first 10 
	terms will be:
					1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
	By considering the terms in the Fibonacci sequence whose values 
	do not exceed four million, find the sum of the even-valued terms.
*/

int FindFibonacciSequence(int max)
{
	int t1 = 0, t2 = 1, nextTerm = 0;

	std::cout << "Fibonacci Series: ";

	for (int i = 1; i <= max; ++i)
	{
		// Prints the first two terms.
		if (i == 1)
		{
			std::cout << " " << t1;
			continue;
		}
		if (i == 2)
		{
			std::cout << t2 << " ";
			continue;
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		std::cout << nextTerm << " ";
	}
	return 0;
}