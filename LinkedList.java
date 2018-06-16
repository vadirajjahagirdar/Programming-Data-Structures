
/*
Java Program to understand LinkedList using util.LinkedList
Time Complexity(Worst Case):
1. LinkedList Insertion: O(n)
2. LinkedList Deletion: O(n)
3. LinkedList Search: O(n)

Before code creates a students LinkedList and most important LinkedList operations are illustrated.
 */

package com.company;
import java.util.LinkedList;

public class Main {

    public static void main(String[] args) {

        // Create a Linked List
        LinkedList<String> students = new LinkedList<>();

        // Add students to Linked List
        students.add("Vadiraj");
        students.add("Nitya");
        students.add("Tejas");

        System.out.println(students);

        students.addFirst("Shashi");
        System.out.println(students);

        students.addLast("Shreya");
        System.out.println(students);

        String FirstName = students.getFirst();
        String LastName = students.getLast();
        System.out.println("FirstName: "+FirstName+ "\nLastName: "+ LastName);

        boolean findName=students.contains("Vadiraj");

        if(findName)
            System.out.println("Vadiraj Found");
        else
            System.out.println("Vadiraj Not Found");

        int indexOf=students.indexOf("Vadiraj");
        System.out.println("index of Vadiraj is: "+indexOf);

        students.remove("Shreya");
        System.out.println(students);

        students.remove(0);
        System.out.println(students);

    }
}
