class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class LinkedList {

    public static Node create(int data) {
        return new Node(data);
    }

    public static Node insertAtFirst(Node head, int data) {
        Node newNode = new Node(data);
        newNode.next = head;
        return newNode;
    }

    public static void display(Node head) {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + "->");
            temp = temp.next;
        }
        System.out.println("NULL");
    }

    public static void main(String[] args) {
        Node head = create(10);
        head = insertAtFirst(head, 20);
        head = insertAtFirst(head, 30);
        display(head);
    }
}
