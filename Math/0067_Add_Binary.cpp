class Solution {
public:
    string addBinary(string a, string b) {
        string c="";
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        while(i>=0 && j>=0){
            int tp=((int)a[i])-48+((int)b[j])-48+carry;
            switch(tp){
                case 0:c="0"+c;
                    carry=0;
                    break;
                case 1:c="1"+c;
                    carry=0;
                    break;
                case 2:c="0"+c;
                    carry=1;
                    break;
                case 3:c="1"+c;
                    carry=1;
                    break;
            }
            i--;
            j--;
        }
        while(i>=0){
            int tp=((int)a[i])-48+carry;
            switch(tp){
                case 0:c="0"+c;
                    carry=0;
                    break;
                case 1:c="1"+c;
                    carry=0;
                    break;
                case 2:c="0"+c;
                    carry=1;
                    break;
                case 3:c="1"+c;
                    carry=1;
                    break;
            }
            i--;
        }
        while(j>=0){
          int tp=((int)b[j])-48+carry;
            switch(tp){
                case 0:c="0"+c;
                    carry=0;
                    break;
                case 1:c="1"+c;
                    carry=0;
                    break;
                case 2:c="0"+c;
                    carry=1;
                    break;
                case 3:c="1"+c;
                    carry=1;
                    break;
            }
            j--;
        }
        if(carry){
            c="1"+c;
        }
     return c;
    }
};
