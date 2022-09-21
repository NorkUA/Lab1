
#include <iostream>
#include <cmath>
using namespace std;

const int n = 10000;
int list[10]= {0,0,0,0,0,0,0,0,0,0};

int ForUser() {
    cout <<"Press from 1 to 10  to call  method1- method10"<<endl;
    cout<<"Please do not enter numbers or characters that are not in the range from 1 to 10" <<endl;
    string result;
    cin >> result;
    int res = atoi(result.c_str());
    while (res > 10 or res < 1){
        cout << "Please enter a number from 1 to 10 " << endl;
        cin >> result;
        res = atoi(result.c_str());
        }
        return res;
    }

void method1(){
    int  a = 34, c = 190, m = 9111;
    long long x0 = time(0);

    for (int i =0 ; i <= n ; i++) {
        x0 = (a * x0 + c) % m;
        float U = float(x0) / m;
        list[int(U*10)]++;
    }
}

void method2(){
    int a = 34;int c = 190;int d = 33;int m = 121;
    long  x0 = time(0);
    for (int i = 0 ; i <= n ; i ++) {
        x0 = (d * x0 * x0 + a * x0 + c) % m;
        double U = (double)x0/m;
        list[int(U*10)]++;
    }
}

void method3(){
    long x0 = time(0); int m = 9111;
    long x1=time(0)*2/3;
    for( int i = 0 ; i <= n ; i ++){
        x1=(x0+x1)%m;
        double U = (double)x1 / m;
        list[int(U*10)]++;
    }
    for (int i =0 ; i < 9 ; i++){

    }
}
int invertion(int x , int m ){
    int inv ;
    for( int i = 0 ; i <m ; i++ ){
        if ((x*i)%m == 1){
            inv = i ;
        }
    } return inv;
}

void method4(){
    int a = 37, c =15 ,m = 9791 ;
    long x0 = time(0);
    for( int i = 0 ; i <=n ; i++ ){
        x0 = (a* invertion(x0, m)+c) % m ;
        double U = double(x0)/ m;
        list[int(U*10)]++;
    }
}

void method5(){
    int  a=33, m = 9111, d=131, c=17;
    long long y0 = time(0)-10000;
    long long x0 = time(0);
    for (int i =  0; i <= n; i++) {
        x0 = (a * x0 + c) % m;
        y0 = (d * y0 * y0 + a * y0 + c) % m;
        long int z = (x0 - y0 + m) % m;
        float U = float(z) / m;
        list[int(U * 10)]++;
    }
}

void help_methods(float x){
    if (- 3.0 <=x && x<= -2.4 ){
        list[0]++;}
    if (-2.4<=x && x<= -1.8 ){
        list[1]++;}
    if (-1.8<=x && x<= -1.2 ){
        list[2]++;}
    if (-1.2<=x && x<= -0.6 ){
        list[3]++;}
    if (-0.6<=x && x<= 0.0 ){
        list[4]++;}
    if (0.0<=x && x<= 0.6 ){
        list[5]++;}
    if (0.6<=x && x<= 1.2 ){
        list[6]++;}
    if (1.2<=x && x<= 1.8){
        list[7]++;}
    if (1.8<=x && x<= 2.4 ){
        list[8]++;}
    if (2.4<=x && x<= 3.0 ){
        list[9]++;}
}
void method6(){
    int  a = 34, c = 190, m = 9791;
    long int x0=1;
    double sum = 0;
    for (int i =1 ; i <=n ; i++){
        for (int s= 0; s < 12 ;s ++){
            x0 = (a * x0 + c) % m;
            double U = (double) x0 / m;
            sum += U;
        }
        sum -= 6;
        help_methods(sum);
        sum = 0;
    }

}
void method7(){
    int x0 =0,y0=1, m=9791,  c = 37, a = 9, d = 131;
    for (int i = 0; i < n; i++) {
        x0 = ((a * x0 + c) % m);
        y0 = (d * y0 * y0 + a * y0 + c) % m;

        double u1 = double(x0) / m;
        double u2 = double(y0) / m;
        double(v1) = 2 * u1 - 1;
        double(v2) = 2 * u2 - 1;
        double(s) = v1 * v1 + v2 * v2;
        if (s<1) {
            float(x1) = v1 * sqrt(-2 * log(s) / s);
            float(x2) = v2 * sqrt(-2 * log(s) / s);
            help_methods(x1);
            help_methods(x2);
        }

    }
}


void method8(){
    int m=9791,  c = 27, a = 201, d = 171;
    long long x0= time(0);
    long long y0= time(0)-123456;
    for (int i = 0; i < n; i++) {
        x0 = ((a * x0 + c) % m);
        y0 = (d * y0 * y0 + a * y0 + c) % m;

        double U = double(x0) / m;
        double v = double(y0) / m;

        double (x) = sqrt(8 / M_E) * (v - 0.5) / U;
        if (x * x <= (-4 * log(U))) {
            help_methods(x);
        }
    }
}

void method9(){
    int  a = 34, c = 19, m = 9111,m1=21;//m1 ???
    long long x0 = time(0);
    double U ,f;
    for (int i =0; i <=n; i++){
        x0 = (a * x0 + c) % m;
        double U = double(x0) / m;
        f=-m1*log(U);
        if (f < 100) {
            list[int (f / 10)]++;
        }
    }
}
void method10(){
    int  a = 34,a0=31, c = 11, m = 4171;;
    long long x0= time(0);
    long long y0= time(0)+53999;
    long double Y,X,V;
    for (int i =0; i <=n; i++){
        x0 = (a * x0 + c) % m;
        long double U1 = double(x0) / m;
        long double U2 = double (y0) / m;
        Y= tan(M_PI*U1);
        X=sqrt(a*2-1)*Y+a-1;
        if(X>0){
            V=U2;
            if(V>= ((1 + Y*Y) * exp((a0 - 1) * log((X) / (a0 - 1)) - sqrt(2*a0 - 1) * Y))){
                list[(int) X % 10]++;
            }
        }
    }
}

void histograma1(){
    for (int i =0 ; i < 9 ; i++){
        cout<<"[0."+ to_string(i)+"; 0."+to_string(i+1)+"]-   "<< float(list[i])/n<<endl;
    }
    cout<<"[0.9; 1.0]-   "<<float(list[9])/n<<endl;
}
void histograma2(){
    cout << "[-3.0;-2.4)" << "      " << (double) list[0] / n << endl;
    cout << "[-2.4;-1.8)" << "      " << (double) list[1] / n << endl;
    cout << "[-1.8;-1.2)" << "      " << (double) list[2] / n << endl;
    cout << "[-1.2;-0.6)" << "      " << (double) list[3] / n << endl;
    cout << "[-0.6; 0.0)" << "      " << (double) list[4] / n << endl;
    cout << "[0.0 ; 0.6)" << "      " << (double) list[5] / n << endl;
    cout << "[0.6 ; 1.2)" << "      " << (double) list[6] / n << endl;
    cout << "[1.2 ; 1.8)" << "      " << (double) list[7] / n << endl;
    cout << "[1.8 ; 2.4)" << "      " << (double) list[8] / n << endl;
    cout << "[2.4 ; 3.0]" << "      " << (double) list[9] / n << '\n' << endl;
}

void histograma3(){
    for (int i=0;i<=9;i++){
        cout<<"["<<i*10<<";"<<(i+1)*10<<"]-   "<<float(list[i])/n<<endl;
    }
}

int main(){
    int enter ;
    enter = ForUser();
    if (enter == 1) {
        method1();
        histograma1();}
    else if (enter == 2) {
        method2();
        histograma1();}
    else if (enter == 3)  {
        method3();
        histograma1();}
    else if (enter == 4)  {
        method4();
        histograma1();}
    else if (enter == 5)  {
        method5();
        histograma1();}
    else if (enter == 6) {
        method6();
        histograma2();}
    else if (enter == 7) {
        method7();
        histograma2();}
    else if (enter == 8) {
        method8();
        histograma2();}
    else if (enter == 9) {
        method9();
        histograma3();}
    else if (enter == 10) {
        method10();
        histograma3();}
    else {
        cout << "Sh*t  happens " << endl;
        }
    return 0;
}
