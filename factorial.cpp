long long factorial(int num){
	long long fact = num;
	for(int i=num-1; i>1; i--){
		fact *= i;
	}
	return fact;
}
