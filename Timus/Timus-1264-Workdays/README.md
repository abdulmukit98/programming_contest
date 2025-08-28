## 🧠 সমস্যার বিবরণ (বাংলায়):
পূর্ববর্তী নির্বাচন গণনার সফটওয়্যার সফলভাবে তৈরি করার পর Vasechkin-এর প্রোগ্রাম দারুণ জনপ্রিয় হয়। এর ফলে Artemy Sidorovich-কে বিভাগীয় প্রধান হিসেবে নিয়োগ দেওয়া হয়।

বর্তমানে Artemy Sidorovich তার অধীনস্থ প্রোগ্রামার Petechkin-এর জন্য একটি নতুন কাজ তৈরি করছেন। কাজটি হলো একটি সহায়ক ফাংশন লেখা, যা বিভাগের সকল প্রোগ্রামারের জীবন সহজ করে তুলবে।

এই ফাংশনটি কী করবে?

একটি N-তপু (N-element) array দেওয়া থাকবে।

প্রতিটি 0 থেকে M পর্যন্ত সংখ্যার জন্য, ফাংশনটি গণনা করবে — সেই সংখ্যা array-তে কতবার আছে।

Artemy Sidorovich মনে করেন, Petechkin এই ফাংশনটি নিচের মতো করে লিখবে **(উদাহরণস্বরূপ, যদি N = 3 এবং M = 1)**:
````
✅ C কোড:
c
if (arr[0]==0) ++count[0];
if (arr[0]==1) ++count[1];
if (arr[1]==0) ++count[0];
if (arr[1]==1) ++count[1];
if (arr[2]==0) ++count[0];
if (arr[2]==1) ++count[1];
✅ Pascal কোড:
pascal
if arr[0]=0 then count[0] := count[0] + 1;
if arr[0]=1 then count[1] := count[1] + 1;
if arr[1]=0 then count[0] := count[0] + 1;
if arr[1]=1 then count[1] := count[1] + 1;
if arr[2]=0 then count[0] := count[0] + 1;
if arr[2]=1 then count[1] := count[1] + 1;
````
## ⏱️ সময় গণনা:
Petechkin প্রতি একটি কোড লাইনের জন্য ১ সেকেন্ড সময় নেয়। তাই Artemy জানতে চান — পুরো কোড লিখতে Petechkin কত সেকেন্ড সময় নেবে?

## 📥 ইনপুট:
একটি মাত্র লাইনে দুটি পূর্ণসংখ্যা দেওয়া থাকবে: N এবং M যেখানে:

0 ≤ N ≤ 40000

0 ≤ M ≤ 40000

## 📤 আউটপুট:
প্রিন্ট করো — Petechkin-এর প্রয়োজনীয় মোট সেকেন্ড।

🔍 Hint:
প্রতিটি arr[i] এর জন্য M+1 টি if স্টেটমেন্ট লেখা হবে। তাই মোট লাইন = N × (M + 1)

## Code
````
#include <bits/stdc++.h>
using namespace std;
int main() 
{	
	int n,m;
	cin>>n>>m;
	cout << n * (m+1) << endl;

    return 0;
}
````
