class HCF{
    public static int hcf(int a,int b){
        if(b%a==0){
            return a;
        }
        int ans = hcf(b%a,a);
        return ans;
    }
    public static void main(String[] args) {
        System.out.println(hcf(107,13));
    }
}