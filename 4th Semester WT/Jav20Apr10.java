//Write a java program to implement a stack class having methods push () and pop(). These methods must be designed to throw
//user defined exception when the stack is empty or full.

import java.util.*;

class StackEmptyException extends Exception
{
    StackEmptyException(String s)
    {
        super(s);
    }
}

class StackFullException extends Exception
{
    StackFullException(String s)
    {
        super(s);
    }
}

class Stack
{
    int top;
    int a[];
    Stack(int size)
    {
        top=-1;
        a=new int[size];
    }
    void push(int x) throws StackFullException
    {
        if(top==a.length-1)
        {
            throw new StackFullException("Stack is full");
        }
        else
        {
            a[++top]=x;
        }
    }
    int pop() throws StackEmptyException
    {
        if(top==-1)
        {
            throw new StackEmptyException("Stack is empty");
        }
        else
        {
            return a[top--];
        }
    }
}

class Jav20Apr10
{
    public static void main(String args[])
    {
        Stack s=new Stack(5);
        try
        {
            s.push(10);
            s.push(20);
            s.push(30);
            s.push(40);
            s.push(50);
            s.push(60);
        }
        catch(StackFullException e)
        {
            System.out.println(e);
        }
        try
        {
            System.out.println(s.pop());
            System.out.println(s.pop());
            System.out.println(s.pop());
            System.out.println(s.pop());
            System.out.println(s.pop());
            System.out.println(s.pop());
        }
        catch(StackEmptyException e)
        {
            System.out.println(e);
        }
    }
}