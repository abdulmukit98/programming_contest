এই সমস্যাটি UVa Online Judge-এর একটি ক্লাসিক সিমুলেশন সমস্যা, যার নাম "Extraordinarily Tired Students" (Problem ID: 12108)। চলুন বাংলায় সহজভাবে ব্যাখ্যা করি:

🧠 সমস্যার সারাংশ:
একটি ক্লাসে কিছু ছাত্র আছে যারা খুব ক্লান্ত। প্রত্যেক ছাত্রের একটি ঘুম-জাগরণ চক্র আছে:

সে A মিনিট জেগে থাকে,

তারপর B মিনিট ঘুমায়,

এবং এই চক্রটি বারবার চলে।

প্রতিটি ছাত্রের একটি শুরু অবস্থান (C) দেওয়া থাকে, অর্থাৎ সে তার চক্রের কোন মিনিটে আছে শুরুতে।

📋 ইনপুট:
প্রথমে একটি সংখ্যা n (ছাত্রের সংখ্যা, ১ ≤ n ≤ ১০)

এরপর nটি লাইন, প্রতিটিতে তিনটি সংখ্যা: A B C

🔍 নিয়ম:
যখন একজন ছাত্র ঘুমাতে যাচ্ছে (অর্থাৎ তার জাগরণ সময় শেষ), সে ক্লাসে কয়জন জেগে আছে এবং কয়জন ঘুমাচ্ছে তা দেখে।

যদি ঘুমন্ত ছাত্রের সংখ্যা জাগ্রত ছাত্রের চেয়ে বেশি হয়, তাহলে সে ঘুমায়।

অন্যথায়, সে আবার জেগে থাকার সময় শুরু করে।

🎯 লক্ষ্য:
আমাদের বের করতে হবে প্রথম মিনিট কখন সব ছাত্র জেগে থাকবে। যদি এমন কোনো সময় না আসে, তাহলে -1 প্রিন্ট করতে হবে।

🧪 উদাহরণ:
ইনপুট:
```
3
2 4 1
1 5 2
1 4 3
````

আউটপুট:
```
Case 1: 18
```

এই ক্ষেত্রে ১৮তম মিনিটে সব ছাত্র জেগে থাকে।

```
/**
 *    problem: UVa 12108 Extraordinarily Tired Students
 *    author: sjsakib
 *    time: lcm(a[i]+b[i])*n
 *    mem: n   
**/

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if(a % b == 0) return b;
    else return gcd(b,a%b);
}

int lcm(int a, int b) {
    return a*b/gcd(a,b);
}

int n;
int status[13];

struct Student 
{
    int awake;
    int sleep;
    int pos;
};

vector<Student> students;

//Checks how many students are awake and updates their status
//returns true if everyone is awake, false otherwise
bool update() {
    int awakeCount = 0;
    for (int i = 0; i < n; i++) {
        if(status[i] <= students[i].awake) awakeCount++;
    }
    if(awakeCount == n) return true;
    for(int i = 0;i <= n; i++) {
        if(status[i] == students[i].awake + students[i].sleep || (status[i] == students[i].awake && n <= awakeCount*2)) status[i] = 1;
        else status[i]++;
    }
    return false;
}

int main() {
    int caseno = 1;
    while(1) {
        scanf("%d", &n);
        if(n == 0) break;
        
        int l = 1; //to hold lcm

        for(int i = 0; i < n; i++) {
            Student st;
            scanf("%d %d %d", &st.awake, &st.sleep, &st.pos);
            status[i] = st.pos;
            students.push_back(st);
            l = lcm(l, students[i].awake + students[i].sleep);
        }
        
        bool found;
        for( int minit = 1; minit <= l; minit++) {
            found = update();
            if(found) {
                printf("Case %d: %d\n", caseno++, minit);
                break;
            }
        }
        if(!found) {
            printf("Case %d: -1\n", caseno++);
        }
        students.clear();
    }   // endwhile
    return 0;
}
```
