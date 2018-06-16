/*
Java Program to understand Stack data structure using util.Stack
Time Complexity(Worst Case, with LinkedList implementation):
1. Stack Insertion: O(1)
2. Stack Deletion: O(1)
3. Stack Search: O(n)
4. Stack element access: O(n)

Following code creates a Stack of Strings and most important operations are illustrated.
 */

package com.company;
import java.util.Stack;

public class Main {

    public static void main(String[] args) {
        Stack<String> stack = new Stack<String>();

        stack.push("ABC");
        stack.push("DEF");
        stack.push("GHI");

        System.out.println(stack);

        stack.pop();
        System.out.println("After Stack pop() operation: ");
        System.out.println(stack);

        boolean isEmpty= stack.isEmpty();
        if(isEmpty)
            System.out.println("Stack is empty");
        else
            System.out.println("Stack is not empty");
        
        int stackSearch= stack.search("DEF");
        System.out.println("DEF search: "+stackSearch);

        System.out.println(stack);
        System.out.println("Stack peek(): "+stack.peek());

        System.out.println("Current size of Stack: "+ stack.size());



    }
}
