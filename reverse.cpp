#include<bits/stdc++.h>
using namespace std;
void reverse(int n){
    while(n>0){
        int digit=n%10;
        cout<<digit;
        n=n/10;
        
    }
    cout<<endl;

}
void divisors(int n){
     for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
void checkPrime(int n){
    int c=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            c++;
            break;
        }
    }
    if(c>0){
        cout<<"itsNotPrime";
    }
    else{
        cout<<"itsPrime";
    }
}
int checkHCF(int m,int n){
    // int max=0;
    // for(int i=1;i<=n;i++){
    //     if(k%i==0 && n%i==0){
    //         max=i;
    //     }
    // }
    // cout<<max;
    while(n>0 && m>0){
        if(n>m)n=n%m;
        else m=m%n;
    }
    if(n==0)return m;
    return n;
}
void recur(int k,int n){
    //print name n times
    // if(n<0){
    //     return;
    // }
    // cout<<"Adi ";
    // recur(--n);

    // print from 1 to n
    //int i=1;
    // if(k>n){
    //     return;
    // }

    // cout<<k<<" ";
    // k++;
    // recur(k,n);

    //print from n to 1
    // if(n<=0){
    //     return;
    // }
    // cout<<n<<" ";

    // recur(--n);

    //print 1 to n by backtracking
    // if(n<=1){
    //     return;
    // }
    

    // recur(--n);
    // cout<<n<<" ";

    //print n to 1 by backtracking
    if(k>=n){
        return;
    }
    k++;
    recur(k,n);
    cout<<k<<" ";

}
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int facto(int n){
    if (n == 0) {
        return 1;
    }
    return n*facto(n-1);
}

bool spal(string s,int i){
    if(i>=s.size()/2){
        return true;
    }

  if(s[i]!=s[s.size()-i-1]){
        return false;
    }

   return spal(s,i+1);


}
void facto2(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
         fact=fact*i;
    }
    cout<<fact;
}
void fibo(int n){
    int sum=0;
    int sum2=1;
    int sum3=0;
   // cout<<sum<<" "<<sum2<<" ";
    for(int i=2;i<n;i++){
       
        sum3=sum+sum2;
        sum=sum2; 
        sum2=sum3;
        // cout<<sum3<<" "; 
         
    }
    cout<<sum2;

}
int fibon(int n){
    if(n<=1){
        return n;}

        return fibon(n-1)+fibon(n-2);
    
}
void fibbo(int n){
    static int sum=0,sum2=1,sum3;

       if(n>0){
        sum3=sum+sum2;
        sum=sum2; 
        sum2=sum3;
        cout<<sum3<<" ";
        fibbo(n-1);
        }   
}


int main(){
    int n;
   // int k;
    
    //cin>>k;
    cin>>n;
    // reverse(n);
    // divisors(n);
    //checkPrime(n);
    // cout<<checkHCF(k,n);
    //recur(k,n);
    //cout<<sum(n);
    //cout<<facto(n);
    // string s="abbvabba";
    // int i=0;
    // cout<<spal(s,i);
    //facto2(n);
   // fibo(n);
    //cout<<fibon(n);  
    //cout<<"0"<<" "<<"1"<<" ";
    //fibbo(n-2);
}