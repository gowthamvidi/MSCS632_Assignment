class Box {
    int value;
    Box(int v) { value = v; }
}

public class MemoryTest
    static void square(Box b) {
        b.value = b.value * b.value; // object modified via reference
    }

    public static void main(String[] args) {
        Box num = new Box(5);
        square(num);
        System.out.println("Squared = " + num.value); // 25
    }
}