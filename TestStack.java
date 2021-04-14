import java.util.ArrayList;

public class TestStack {

    public static void main(String[] args) {

	Stack stack = new Stack();
	ArrayList<Integer> reverse = new ArrayList<>();

	System.out.println(stack.is_empty());
	stack.push(1);
	System.out.println(stack.is_empty());
	System.out.println(stack.size());
	System.out.println(stack.stack);
	
	for (int i = 0; i < 11; i++) {
	    stack.push(i);
	}

	for (int j = 0; j < stack.size(); j++) {
	    System.out.println(stack.get(j));
	}

	for (int k = 0; k < stack.size(); k++) {
	    reverse.add(stack.peek());
	    stack.pop();
	}

	for (int l = 0; l < reverse.size(); l++) {
	    System.out.println(reverse.get(l));
	}


    }
}