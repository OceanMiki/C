long long fib(int k) {
	long long m;
	if(k==1)
		m=1;
	else if(k==2)
		m=1;
	else
		m=fib(k-2)+fib(k-1);
	return m;
}