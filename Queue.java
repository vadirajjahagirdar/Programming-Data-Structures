/*
Java Program to understand Queue data structure using util.LinkedList and util.Queue
Time Complexity(Worst Case):
1. Queue Insertion: O(n)
2. Queue Deletion: O(1)
3. Queue Search: O(n)

Following code creates a queue of Strings and most important Queue operations are illustrated.
 */

package com.company;
import java.util.LinkedList;
import java.util.Queue;

public class Main {

    public static void main(String[] args) {
        Queue<String> queue = new LinkedList<>();
        queue.add("Vadiraj");
        queue.add("Nitya");
        queue.add("Tejas");
        System.out.println(queue);

        boolean containsName= queue.contains("Vadiraj");
        if(containsName)
            System.out.println("Vadiraj Found");
        else
            System.out.println("Vadiraj Not Found");

        String checkPeek= queue.peek();
        System.out.println("Peek: "+checkPeek);

        boolean checkIsEmpty= queue.isEmpty();
        if(checkIsEmpty)
            System.out.println("Queue Empty");
        else
            System.out.println("Queue Not Empty");

        String queuePoll=queue.poll();
        System.out.println("Queue Poll: "+queuePoll);

        System.out.println(queue);

        String queueRemove= queue.remove();
        System.out.println("After Queue remove: "+queue);

        int queueSize=queue.size();
        System.out.println("Present Queue size: "+queueSize);
    }
}
