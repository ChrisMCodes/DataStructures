/*
 * This program allows you to create a stack of integers
 * 
 * I'll implement for other data types in later iterations
 */

import java.util.ArrayList;

class Stack {

    ArrayList<Integer> stack = new ArrayList<>();

    public Stack() {
	this.stack = stack;
    }

    public boolean is_empty() {
	return this.size() == 0;
    }

    public ArrayList<Integer> clear() {
    	this.stack.clear();
	return this.stack;
    }

    public void push(int item) {
	this.stack.add(item);
    }

    public void pop() {
	this.stack.remove(this.stack.size() - 1);
    }

    public int peek() {
	int last = this.size() - 1;
	return this.stack.get(last);
    }

    public int size() {
	return this.stack.size();
    }

    public int get(int i) {
	return this.stack.get(i);
    }
}