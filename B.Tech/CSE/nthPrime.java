class nthPrime{
	static int isPrime(int c){
		if(c==1)
			return 2;
		else if(c == 2)
			return 3;
		int n = 2;
		//for(int k=3;k<=c;k++){
			for (int i=5;i<99999 ;i+= 2 ) {
				boolean b=true;
				for(int j=2;j<=Math.sqrt(i);j++){
					if(i%j == 0){
						b=false;
						break;
					}
				}
				if(b && c!=n)
					n++;
				if(c== n)
					return i;
			}
		//}
			return  -1;

	}
	public static void main(String[] args) {
		int n =3;
		System.out.println(isPrime(n++));System.out.println(isPrime(n++));System.out.println(isPrime(n++));
	}
}