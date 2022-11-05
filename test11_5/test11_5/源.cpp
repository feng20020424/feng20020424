//#define _CRT_SECURE_NO_WARNINGS 1
//
//int candy(int* arr, int arrLen) {
//    int brr[arrLen];
//    int i = 0;
//    int num = 0;
//    while (i < arrLen)
//    {
//        brr[i] = 1;
//        i++;
//    }
//    for (i = 1; i < arrLen; i++)
//    {
//        if (arr[i] > arr[i - 1])
//        {
//            brr[i] = brr[i - 1] + 1;
//        }
//    }
//    for (i = arrLen - 1; i > 0; i--)
//    {
//        if (arr[i - 1] > arr[i])
//        {
//            if (brr[i - 1] <= brr[i])
//            {
//                brr[i - 1] = brr[i] + 1;
//            }
//        }
//    }
//    i = 0;
//    while (i < arrLen)
//    {
//        num = num + brr[i];
//        i++;
//    }
//    return num;
//
//}

bool judge(char* str) {
    char* arr = str;
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != str[n - i - 1])
        {
            return false;
        }
    }
    return true;
    // for(int i=0;i<n/2;i++)
    // {
    //     char x=str[i];
    //     str[i]=str[n-i-1];
    //     str[n-i-1]=x;
    // }
    // if(strcmp(str,arr)==0)
    // {
    //     return true;
    // }
    // else{
    //     return false;
    // }

}