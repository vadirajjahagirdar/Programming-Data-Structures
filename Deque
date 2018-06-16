/*
Java Program to understand Deque data structure using util.LinkedList and util.deque
Time Complexity(Worst Case, with LinkedList implementation):
1. Deque Insertion: O(1)
2. Deque Deletion: O(1)
3. Deque Search: O(n)
4. Deque element access: O(n)

Following code creates a Deque of Integers and most important operations are illustrated.
 */

package com.company;
import java.util.Deque;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Stack;

public class Main {

    public static void main(String[] args) {
        Deque<Integer> deque = new LinkedList<Integer>();

        deque.addFirst(1);
        deque.addFirst(2);
        deque.addLast(3);
        System.out.println(deque);

        System.out.println("Deque Size: "+deque.size());
        System.out.println("Deque Search: "+deque.contains(5));
        System.out.println("Deque First Element: "+deque.getFirst());
        System.out.println("Deque Last Element: "+deque.getLast());

        System.out.println("Deque Peek: "+deque.peek());
        System.out.println("Deque PeekFirst: "+deque.peekFirst());
        System.out.println("Deque PeekLast: "+deque.peekLast());

        System.out.println("Deque RemoveFirst: "+deque.removeFirst());
        System.out.println(deque);

        System.out.println("Deque RemoveLast: "+deque.removeLast());
        System.out.println(deque);

        /*
        offer(element): Adds an element to the tail and returns a boolean to explain if the insertion was successful.
        offerFirst(element): Adds an element to the head and returns a boolean to explain if the insertion was successful.
        offerLast(element): Adds an element to the tail and returns a boolean to explain if the insertion was successful.
         */
        boolean dequeAddOffer= deque.offer(5);
        System.out.println("Deque offer: "+dequeAddOffer );

        boolean dequeAddOfferFirst= deque.offerFirst(10);
        System.out.println("Deque offerFirst: "+dequeAddOfferFirst);

        boolean dequeAddOfferLast= deque.offerLast(11);
        System.out.println("Deque offerLast: "+dequeAddOfferLast );

        System.out.println(deque);

        Iterator itr= deque.iterator();
        while (itr.hasNext())
            System.out.println(itr.next());

        Iterator itr_descending = deque.descendingIterator();
        while(itr_descending.hasNext())
            System.out.println(itr_descending.next());

    }
}
