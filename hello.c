#include <stdio.h>


void catalog(char* name)
{
    printf("%d\n", name);
    name = "Hello";
    printf("%s\n", name);
        
}
int main()
{
    char* mainName = "Snappy";
    catalog(mainName);
    printf("%s\n",mainName)
}

#include <stdio.h>


void func(int a, int b) {
    int a = 3;
    a* = 3;
    b /= 3;
    printf("%d,%d\n", a, b);
}

    

int main() {
    int a = 3, b = 12;
    func(a, b);
    printf("%d, %d\n", a, b);
}

#include <stdio.h>


void func(int* i, int* j) {
    *i *= 3;
    *j /= 3;   
    printf("%d,%d\n", *i, *j);
}

    

main() {
    int a = 3, b = 12;
    func(&a, &b);
    printf("%d, %d\n", a, b);
}


package ncs;

public class AnimalCall {
	private Animal animal;

	public void setAnimal(Animal animal) {
		this,animal = animal;
		
		
	}

	public void callName() {
		//Dog d = new Dog();
		d.printNaem("");
		//Cat c = new Cat();
		c.printName();
		
		
	}

}


//Linked List: Inserting a node at beginning
#include<stdlib.j>
#include<stdlib.j>
struct Node {
    int data;
	struct Node* next;
};
struct Node* head;
int main() {
    head = NULL; //empty list
}


