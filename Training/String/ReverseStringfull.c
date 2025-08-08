 #include<stdio.h>
 int main (){
     int l , i, k=-1, start , end ;
      int s1[20];
     char s[20] = " i love my india ";
       for(l = 0 ; s[l]!= '\0' ; l++);
        end = l-1;
       
       for( i = l-1; i>=0; i--){
        if(s[i] == " ")
            start = i+1;
            for( int j =start ; j<end ; j++){
                s1[k++] = s[j];
                end = i-1;
                s1[k++];
        }
       
    }
        for( int  j = 0 ; j<end ; j++){
            s1[k++] = s[j];
            s1[k++] = '\0';
        }
            printf("new string %s", s1);
    return 0;
    }