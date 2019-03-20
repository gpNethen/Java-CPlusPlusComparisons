class increments{
	public static void main(String args[]){
	
		int count = 1;
		System.out.println("count is starting at: " + count);
		System.out.println("Incrementing with: count = count + 1");
		System.out.println("count is now: " + (count = count +1));
		System.out.println("Incrementing with: count += 1");
		System.out.println("count is now: " + (count+=1));
		System.out.println("Incrementing with: count++");
		System.out.println("count is now: " + count++);
		System.out.println("Incrementing with: ++count");
		System.out.println("count is now: " + ++count);		
	}
}


