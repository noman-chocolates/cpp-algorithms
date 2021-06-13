int factorial(int num){
	int fact = num;
	for(int i=num-1; i>1; i--){
		fact *= i;
	}
	return fact;
}
