// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter" << n << "Elements:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//          int MaxSum = 0;

//     //     for(int st = 0 ; st < n ; st++){
//     //         int currSum = 0;
//     //         for(int end = st; end < n ;end++){
//     //             currSum += arr[end];
//     //             MaxSum = max(currSum , MaxSum);
//     //         }
//     //     }

//     //     cout << "max subarray sum is :" << MaxSum << endl;

//     //     return 0;
//     // }

//     //              K A D A N E 'S              A L G O R I T H M
//     // states that kahi pe bhi currsum -ve hoye toh make it 0

//     for (int st = 0; st < n; st++)
//     {
//         int currSum = 0;
//         for (int end = st; end < n; end++)
//         {
//             currSum += arr[end];
//             MaxSum = max(currSum, MaxSum);

//             if (currSum < 0){
//                 currSum = 0;
//             }
//         }
//     }
//     cout << "max subarray sum is :" << MaxSum << endl;
//     return 0;
    
// }





