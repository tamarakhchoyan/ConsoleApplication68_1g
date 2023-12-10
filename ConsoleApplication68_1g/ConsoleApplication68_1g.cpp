#include <iostream>
int main()
{
	const int n = 7;
	int i, a[n], sum = 0;
	for (i = 0; i < n; ++i)
		std::cin >> a[i];
	for(i=0;i<n;++i)
		if(a[i]>5 && a[i]%2==0)
		{
			sum += a[i];
		}
				std::cout <<sum << std::endl;

	return 0;
}
