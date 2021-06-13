int power(double base, int exponent){
	int n = exponent-1;
	int result = base;
	for(int i=0; i<n; i++){
		result *= base;
	}
	return result;
}
