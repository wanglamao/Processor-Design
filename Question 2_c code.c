int func(char* a0){

	if(a0==0) return -1;
	char a1=*a0;
	if(a1==0) return 0;
	int v1=0;
	int counter=0;
	while(a1!=0){
		a0=a0+1;
		v1=a1^0b0000000000100000;
		a1=*a0;
		if(0<v1) v1=1; else v1=0;
		counter+=v1;
	}
	return counter;
}

