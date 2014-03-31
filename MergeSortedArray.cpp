ass Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int length = m+n-1;
        m--;
        n--;
        while(m>=0 && n>=0){
            if(A[m]>=B[n]){
               A[length--]=A[m--];   
            }
            else{
                A[length--]=B[n--];
            }
        }
      while(n>=0){
          A[length--]=B[n--];
      }
        
    }
    
};
