long double power(double base, int exponent){
	if(exponent==0 && base!=0) return 1;
	else{
		int n = exponent-1;
		long double result = base;
		for(int i=0; i<n; i++){
			result *= base;
		}
		return result;
	}
}
long long factorial(int num){
	long long fact = num;
	if(num==0) return 1;
	else {
		for(int i=num-1; i>1; i--){
			fact *= i;
		}
		return fact;
	}
}
long double root(double base, double exponent){
	long double x = base -1;
	long double n = 1/exponent;
	long double out = 1;
	for(int i=1; i<20; i++){
		out += n*power(x, i)/factorial(i);
		n *= n-1;
	}
	return out;
}
