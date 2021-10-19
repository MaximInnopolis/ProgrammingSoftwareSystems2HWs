package numbers.Maxim_Latypov;

import numbers.do_not_change.NumberCreator;

import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.List;
import java.util.Scanner;
import java.util.ArrayList;
public class MyNumberCreator extends NumberCreator {
    /**
     * This is enum called Type. It shows all
     * possible types of values.
     */
    protected static enum Type{
        BYTE,
        BIGDECIMAL,
        BIGINTEGER,
        DOUBLE,
        FLOAT,
        INTEGER,
        LONG,
        SHORT
    }

    /**
     *  This method is used to allow user to insert the number
     *  of elements in the list to be processed.
     *
     * @return int number_quantity This is number of elements that user inserted
     */
    @Override
    public int validateAndSetNumberQuantity() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int number_quantity = 0;
        Boolean flag = true;
        while (flag) {
            try {
                if (scanner.hasNextLine()) {
                    number_quantity = Integer.parseInt(scanner.nextLine());
                }
                flag = false;
            } catch (Exception e) {
                flag = true;
                System.out.println("Error, you did not enter a number");
            }
        }
        if (number_quantity < MIN_NUMBER_QUANTITY){
            System.out.println("The quantity of numbers is less than minimum. It is increased to minimum which is " + MIN_NUMBER_QUANTITY);
            number_quantity = MIN_NUMBER_QUANTITY;
        }
        if (number_quantity > MAX_NUMBER_QUANTITY){
            System.out.println("The quantity of numbers is greater than maximum. It is decreased to maximum which is " + MAX_NUMBER_QUANTITY);
            number_quantity = MAX_NUMBER_QUANTITY;
        }
        return number_quantity;
    }

    /**
     * This method is used to generate the list
     * of random numbers in the list to be processed.
     *
     * @param numberQuantity the quantity of numbers in the list. The quantity has int type.
     * @return list This is a list of numbers that has been generated randomly.
     */
    @Override
    public List<Number> generateNumbers(int numberQuantity) {
        List<Number> list = new ArrayList<>();
        for(int i = 0; i < numberQuantity;i++){
            if (numberQuantity < MIN_NUMBER_QUANTITY){
                System.out.println("The quantity of numbers is less than minimum. It is increased to minimum which is " + MIN_NUMBER_QUANTITY);
                numberQuantity = MIN_NUMBER_QUANTITY;
            }
            if (numberQuantity > MAX_NUMBER_QUANTITY){
                System.out.println("The quantity of numbers is greater than maximum. It is decreased to maximum which is " + MAX_NUMBER_QUANTITY);
                numberQuantity = MAX_NUMBER_QUANTITY;
            }
            Number random_number = Math.random()*(NUMBER_UPPER_BOUNDARY-NUMBER_LOWER_BOUNDARY) + NUMBER_LOWER_BOUNDARY;
            switch (Type.values()[(int) (Math.random()*Type.values().length)]){
                case BIGDECIMAL: random_number = BigDecimal.valueOf(random_number.doubleValue());
                    break;
                case BYTE: random_number = (byte) random_number.doubleValue();
                    break;
                case BIGINTEGER: random_number = BigDecimal.valueOf(random_number.doubleValue()).toBigInteger();
                    break;
                case LONG: random_number = (long) random_number.doubleValue();
                    break;
                case FLOAT: random_number = (float) random_number.doubleValue();
                    break;
                case SHORT: random_number = (short) random_number.doubleValue();
                    break;
                case INTEGER: random_number = (int) random_number.doubleValue();
                    break;
                case DOUBLE: random_number = random_number.doubleValue();
                    break;
                default:
                    break;
            }
            list.add(random_number);
        }
        return list;
    }

    /**
     * This method is used to allow user to insert the elements
     * which type was generated randomly in the list of numbers.
     *
     * @param numberQuantity the quantity of numbers in the list. The quantity has int type.
     * @return list This is a list of numbers that has been made by user.
     */
    @Override
    public List<Number> insertNumbers(int numberQuantity) {

        List<Number> list = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);
        for(int i = 0; i < numberQuantity;i++){
            if (numberQuantity < MIN_NUMBER_QUANTITY){
                System.out.println("The quantity of numbers is less than minimum. It is increased to minimum which is " + MIN_NUMBER_QUANTITY);
                numberQuantity = MIN_NUMBER_QUANTITY;
            }
            if (numberQuantity > MAX_NUMBER_QUANTITY){
                System.out.println("The quantity of numbers is greater than maximum. It is decreased to maximum which is " + MAX_NUMBER_QUANTITY);
                numberQuantity = MAX_NUMBER_QUANTITY;
            }
            Type type = Type.values()[(int) (Math.random()*Type.values().length)];
            System.out.println("Enter a number of type "+  type.toString()+":");
            Number number = 0;
            String n = null;
            Boolean flag = true;
            while (flag) {
                try {
                    flag = false;
                    if (scanner.hasNext()) {
                        n = scanner.nextLine();
                    }
                    switch (type) {
                        case BIGDECIMAL:
                            number = new BigDecimal(n);
                            break;
                        case BYTE:
                            number = Byte.parseByte(n);
                            break;
                        case LONG:
                            number = Long.parseLong(n);
                            break;
                        case FLOAT:
                            number = Float.parseFloat(n);
                            break;
                        case SHORT:
                            number = Short.parseShort(n);
                            break;
                        case DOUBLE:
                            number = Double.parseDouble(n);
                            break;
                        case INTEGER:
                            number = Integer.parseInt(n);
                            break;
                        case BIGINTEGER:
                            number = new BigInteger(n);
                            break;
                    }
                } catch (Exception a) {
                    flag = true;
                    System.out.println("The type of number is incorrect, try again:");
                }
                if(number.doubleValue() > NUMBER_UPPER_BOUNDARY){
                    System.out.println("The value you entered is bigger than maximum which is " + NUMBER_UPPER_BOUNDARY);
                    flag = true;
                    continue;
                }
                if(number.doubleValue() < NUMBER_LOWER_BOUNDARY){
                    System.out.println("The value you entered is less than minimum which is " + NUMBER_LOWER_BOUNDARY);
                    flag = true;
                    continue;
                }
            }
            list.add(number);
        }
        return list;
    }
}