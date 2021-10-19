package numbers.do_not_change;

import java.util.List;

public abstract class Calculator {

    private List<Number> numbers;

    /**
     * This is the constructor of a Calculator
     *
     * @param numbers the list of numbers
     */
    public Calculator(List<Number> numbers) {
        this.numbers = numbers;
    }

    /**
     * This is a getter for the list of numbers
     *
     * @return the list of numbers
     */
    public List<Number> getNumbers() {
        return numbers;
    }

    /**
     * This is a setter for the list of numbers
     *
     * @param numbers the list of numbers
     */
    public void setNumbers(List<Number> numbers) {
        this.numbers = numbers;
    }

    /**
     * This method allows summarizing all elements of
     * the input list of numbers
     *
     * @return the double sum of all elements
     */
    public abstract double summarize();

    /**
     * This method allows multiplying all elements of
     * the input list of numbers
     *
     * @return the double result of all element
     *         multiplication
     */
    public abstract double multiply();

    /**
     * This method allows deleting all negative numbers
     * from the list
     */
    public abstract void deleteNegativeNumbers();

    /**
     * This method allows dividing each number of the
     * list by the divisor and rewrite the list values
     *
     * @param divisor the divisor
     */
    public abstract void divideBy(double divisor);

    /**
     * This method allows calculating square root
     * for each element of the array and updating the
     * list values
     */
    public abstract void getSquareRoot();
}
