//A subclass exception must appear before super-class exception. Justify this with suitable Java programs.

class SuperClassException extends Exception {
    public SuperClassException(String message) {
        super(message);
    }
}

class SubClassException extends SuperClassException {
    public SubClassException(String message) {
        super(message);
    }
}

public class Jav20Apr6 {
    public static void main(String[] args) throws SuperClassException, SubClassException {
        try {
            // some code that can throw SuperClassException or SubClassException
            throw new SubClassException("SubClassException");
        } catch (SubClassException e) {
            System.out.println("Caught SubClassException: " + e.getMessage());
        }
    }
}
