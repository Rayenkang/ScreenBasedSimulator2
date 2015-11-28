package CH3;

import java.util.LinkedList;

public class Solution06 {
	LinkedList<DogID> dog = new LinkedList<DogID>();
	LinkedList<CatID> cat = new LinkedList<CatID>();
	int order;
	
	
	public void enqueue(Animal a){
		if(a instanceof Dog){
			
			dog.add(new DogID(order));
			
		}
		if(a instanceof Cat)cat.add(new CatID(order));
		
		order++;
	}
	
	public Dog dequeueDog(){
		return (Dog) dog.pollFirst();
		
	}
	
	public Cat dequeueCat(){
		return (Cat) cat.pollFirst();
		
	
	}
	
	public Animal dequeueAny(){
		return dog.peekFirst().order>cat.peekFirst().order? dog.pollFirst():cat.pollFirst();
		
	}
	
	
	class Animal{}
	class Dog extends Animal{}
	class Cat extends Animal{}
	
	
	class AnimalID extends Animal{
		int order;
		
		AnimalID(int o){
			super();
			order = o;
		}
		
	}
	class DogID extends Dog{
		int order;
		
		DogID(int o){
			super();
			order = o;
		}
	}
	class CatID extends Cat{
		int order;
		
		CatID(int o){
			super();
			order = o;
		}
	}
}
