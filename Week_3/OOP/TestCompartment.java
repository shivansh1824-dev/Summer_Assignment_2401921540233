abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "First Class Compartment";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies Compartment";
    }
}

class General extends Compartment {
    public String notice() {
        return "General Compartment";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage Compartment";
    }
}

import java.util.Random;

public class TestCompartment {
    public static void main(String[] args) {

        Compartment[] compartments = new Compartment[10];
        Random random = new Random();

        for (int i = 0; i < compartments.length; i++) {

            int num = random.nextInt(4) + 1; // 1 to 4

            switch (num) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;

                case 2:
                    compartments[i] = new Ladies();
                    break;

                case 3:
                    compartments[i] = new General();
                    break;

                case 4:
                    compartments[i] = new Luggage();
                    break;
            }
        }

        // Polymorphic behavior
        for (int i = 0; i < compartments.length; i++) {
            System.out.println("Compartment " + (i + 1) + ": "
                    + compartments[i].notice());
        }
    }
}