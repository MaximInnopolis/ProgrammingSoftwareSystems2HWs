package numbers.Maxim_Latypov;

import numbers.do_not_change.Calculator;

import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.List;

public class MyCalculator extends Calculator {
    /**
     * This is the constructor of a Calculator.
     *
     * @param numbers the list of numbers
     */
    public MyCalculator(List<Number> numbers) {
        super(numbers);
    }

    /**
     * This method is used to summarize all elements
     * in the input list of numbers.
     *
     * @return double Sum of elements
     */
    @Override
    public double summarize() {
        double sum = 0;
        for (Number number : getNumbers()) {
            sum += number.doubleValue();
        }
        return sum;
    }

    /**
     * This method is used to multiply all elements
     * in the input list of numbers.
     *
     * @return double Result of all elements multiplication
     */
    @Override
    public double multiply() {
        double mul = 1;
        for (Number number:getNumbers()) {
            mul = number.doubleValue() * mul;
        }
        return mul;
    }

    /**
     * This method is used to delete all elements that are
     * less than zero from input list of numbers and update
     * it to show the changes.
     *
     * @return Nothing.
     */
    @Override
    public void deleteNegativeNumbers() {
        getNumbers().removeIf(number -> number.doubleValue() < 0);
    }

    /**
     * This method is used to divide every element
     * of the input list of numbers by the divisor
     * and to update the list values saving the same types.
     *
     * @param divisor This is the divisor
     *
     * @return Nothing
     */
    @Override
    public void divideBy(double divisor) {
        List<Number> list = getNumbers();
        try {
            if (divisor == 0) {
                throw new ArithmeticException("It is forbidden to divide by zero ");
            }
            for (int i = 0; i < list.size(); i++) {
                double value = list.get(i).doubleValue() / divisor;
                if (list.get(i) instanceof BigDecimal) {
                    list.set(i, BigDecimal.valueOf(value));
                } else if (list.get(i) instanceof BigInteger) {
                    list.set(i, BigDecimal.valueOf(value).toBigInteger());
                } else if (list.get(i) instanceof Byte) {
                    list.set(i, (byte) value);
                } else if (list.get(i) instanceof Double) {
                    list.set(i, value);
                } else if (list.get(i) instanceof Float) {
                    list.set(i, (float) value);
                } else if (list.get(i) instanceof Integer) {
                    list.set(i, (int) value);
                } else if (list.get(i) instanceof Long) {
                    list.set(i, (long) value);
                } else if (list.get(i) instanceof Short) {
                    list.set(i, (short) value);
                }
            }
        }catch (ArithmeticException exc) {
                System.out.println("Error: "+ exc.getMessage());
            }
        catch(Exception e) {
            System.out.println("Error:unexpected "+ e.getMessage());
        }
    }

    /**
     * This method is used to calculate square root for every
     * element of the input list of numbers and to update
     * the list values saving the same types. There will be
     * written that all element less than zero will be skipped.
     *
     * @return Nothing
     */
    @Override
    public void getSquareRoot() {
        List<Number> list = getNumbers();
        System.out.println("All values that are less than zero will be skipped.");
        for (int i = 0; i < list.size(); i++) {
            try {
                if (list.get(i).doubleValue() < 0) {
                    throw new ArithmeticException();
                }
                double value = Math.sqrt(list.get(i).doubleValue());
                    if (list.get(i) instanceof BigDecimal) {
                        list.set(i,BigDecimal.valueOf(value));
                    } else if (list.get(i) instanceof BigInteger) {
                        list.set(i,BigDecimal.valueOf(value).toBigInteger());
                    } else if (list.get(i) instanceof Byte) {
                        list.set(i,(byte) value);
                    } else if (list.get(i) instanceof Double) {
                        list.set(i,value);
                    } else if (list.get(i) instanceof Float) {
                        list.set(i,(float) value);
                    } else if (list.get(i) instanceof Integer) {
                        list.set(i,(int) value);
                    } else if (list.get(i) instanceof Long) {
                        list.set(i,(long) value);
                    } else if (list.get(i) instanceof Short) {
                        list.set(i, (short) value);
                    }
            } catch (Exception e) {}
        }
    }
}