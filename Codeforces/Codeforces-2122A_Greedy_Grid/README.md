A path in a grid is called greedy if it starts at the top-left cell and **moves only to the right or downward, always moving to its neighbor with the greater value (or either if the values are equal).**

The value of a path is the sum of the values of the cells it visits, including the start and end.

Does there exist an n×m grid of nonnegative integers **such that no greedy path achieves the maximum value among all down/right paths?**

📘 সমস্যার বিবরণ:
তোমাকে দেওয়া হয় একটি n × m গ্রিড। একটি greedy path হলো এমন একটি পথ যা:

শুরু করে (1,1) cell থেকে

প্রতিটি ধাপে ডানে বা নিচে যায়

এবং সবসময় এমন cell-এ যায় যার মান বেশি (বা সমান হলে যেকোনো দিকে)

একটি path-এর মান হলো সেই path-এ থাকা সব cell-এর মানের যোগফল।

✅ তোমার কাজ:

বলা হয়েছে, এমন একটি গ্রিড বানানো সম্ভব কিনা যেখানে কোনো greedy path কখনোই সর্বোচ্চ মানের path না হয়।

Input
````
2
3 3
1 2
````

Output
````
YES
NO
````

<br>

**1xm  or mx1 contains only one path** , no greedy.
<br>
**2x2 grid can not be greedy**

3x3 grid
````
3 5 1
2 1 2
5 4 3

or
1 1 1000
2 2  2

we go to 1-2-2-2 path greedily never found 1000. we can be fool
thats why grid 3xm or mx3 always greedy 
````


## Code
````
#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        
        if(n==1 || m==1) cout<<"NO\n";
        else if (n <= 2 && m <=2 ) cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
````
