public class HitungBMI {
    public static void main(String[]args){
        double bmi, weight, height;
        
        //Menginput data
        System.out.println("Enter next person information : ");
        height = 62.5;
        System.out.println("Height (in inches) ? "+ height);
        weight = 130.5;
        System.out.println("Weight (in pounds) ? "+ weight);
        
        //Menghitung BMI
        bmi = (weight/(height*height) * 703);
        System.out.println("Person 1 BMI = "+ bmi);
        
        //Menentukan klasifikasi
        if(bmi < 18.5)
            System.out.println("Underweight");
        else if(bmi < 25.0)
            System.out.println("Normal");
        else if(bmi < 30.0)
            System.out.println("Overweight");
        else
            System.out.println("Obese");
    }
}
