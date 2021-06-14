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
