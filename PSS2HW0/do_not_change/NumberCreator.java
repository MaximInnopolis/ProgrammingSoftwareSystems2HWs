package numbers.do_not_change;

import java.util.List;

public abstract class NumberCreator {

    protected static final int MIN_NUMBER_QUANTITY = 5;
    protected static final int MAX_NUMBER_QUANTITY = 20;
    protected static final int NUMBER_LOWER_BOUNDARY = -100;
    protected static final int NUMBER_UPPER_BOUNDARY = 100;

    /**
     * This method allows to choose the size of list
     * with numbers
     *
     * @return the quantity of numbers in the list
     */
    public abstract int validateAndSetNumberQuantity();

    /**
     * This method allows generating the list of numbers
     * of different types
     *
     * @param numberQuantity the quantity of numbers in the list
     * @return the list of generated numbers
     */
    public abstract List<Number> generateNumbers(int numberQuantity);

    /**
     * This method allows to insert numbers into the list
     * of randomly chosen types. The user has to print the
     * values via console. The incorrectly printed data has
     * to be handled
     *
     * @return the list of numbers inserted by user
     */
    public abstract List<Number> insertNumbers(int numberQuantity);
}
