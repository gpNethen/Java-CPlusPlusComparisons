public class BigBoss {
    public void cqcFunction() { System.out.println("BigBoss"); }
}

public class Pliskin extends BigBoss {
    public void cqcFunction(int a) { System.out.println("Pliskin"); }
}

public class Main {
    public static void main(String[] args) {
        Pliskin childClass = new Pliskin();
        // The following prints "BigBoss"
        childClass.cqcFunction();
    }
}
