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
