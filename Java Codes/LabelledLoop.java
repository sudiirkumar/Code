public class LabelledLoop {
    public static void main(String[] args) {
        outer: for(int i=0;i<5;i++){
            System.out.println(i);
            for(int j=1;j<3;j++){
                System.out.println(j);
                if(i==j)
                    continue outer;
            }
        }
    }
}
