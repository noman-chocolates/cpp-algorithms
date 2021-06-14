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
