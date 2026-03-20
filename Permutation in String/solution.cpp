class Solution {

public:

    bool isEqual(int arr[26],int brr[26]){
        for(int i=0;i<26;i++){
            if(arr[i]!=brr[i]){
                return 0;
            }
        }
        return 1;
    }


    bool checkInclusion(string s1, string s2) {
        int arr[26] = {0};
        for(int i=0;i<s1.length();i++){
            int index = s1[i]-'a';
            arr[index]++;
        }

        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};
        while(i<windowSize && i<s2.length()){
            int index = s2[i]-'a';
            count2[index]++;
            i++;

        }
        if( (isEqual(arr,count2)) ){
            return 1;
        }

        while(i<s2.length()){

            char newChar = s2[i];
            int index = newChar-'a';
            count2[index]++;
            char oldChar = s2[i-windowSize];
            index = oldChar-'a';
            count2[index]--;
            if(isEqual(arr,count2)){
                return 1;
            }
            i++;
        }
        return 0;



    }
};