#include<bits/stdc++.h>
using namespace std;

int length(char a[]){
    int n = 0;
    for(int i = 0; a[i] != '\0'; i++) n++;
    return n;
}

/// 1a
void reversed(char a[]){
    int n = length(a);
    for(int i = 0; i < n/2; i++) swap(a[i], a[n - i - 1]);
}

/// 1b
void delete_char(char a[], char c){
    int n = length(a), i = 0, j = 0;
    while(i < n){
        if(a[i] != c){
            a[j] = a[i];
            j++;
        }
        i++;
    }
    a[j] = '\0';
}

/// 1c
void pad_right(char a[], int n){
    int sizeA = length(a);
    if(sizeA >= n) return;
    for(int i = sizeA; i < n; i++) a[i] = '#';
}

/// 1d
void pad_left(char a[], int n){
    reversed(a);
    pad_right(a, n);
    reversed(a);
}

/// 1e
void truncate(char a[], int n){
    int sizeA = length(a);
    if(sizeA <= n) return;
    a[n] = '\0';
}

/// 1f
bool is_palindrome(char a[]){
    int n = length(a);
    for(int i = 0; i < n; i++){
        if(a[i] != a[n-i-1]) return false;
    }
    return true;
}

/// 1g
void trim_left(char a[]){
    reversed(a);
    int n = length(a);
    for(int i = n-1; i >= 0; i--){
        if(a[i] != '#'){
            a[i+1] = '\0';
            break;
        }
    }
    reversed(a);
}

/// 1h
void trim_right(char a[]){
    int n = length(a);
    for(int i = n-1; i >= 0; i--){
        if(a[i] != '#'){
            a[i+1] = '\0';
            break;
        }
    }
}

int main(){
    char a[20] = "abcdecba";
    cout << "Original string: " << " ";
    for(int i = 0; i < length(a); i++) cout << a[i];
    cout << '\n';

    cout << "String after reversing: " << " ";
    reversed(a);
    for(int i = 0; i < length(a); i++) cout << a[i];
    cout << '\n';

    cout << "String after remove all of 'c': " << " ";
    delete_char(a, 'c');
    for(int i = 0; i < length(a); i++) cout << a[i];
    cout << '\n';

    cout << "String after padding added to the left: " << " ";
    pad_left(a, 9);
    for(int i = 0; i < length(a); i++) cout << a[i];
    cout << '\n';


    cout << "String after padding added to the right: " << " ";
    pad_right(a, 12);
    for(int i = 0; i < length(a); i++) cout << a[i];
    cout << '\n';

    cout << "String after truncating: " << " ";
    truncate(a, 10);
    for(int i = 0; i < length(a); i++) cout << a[i];
    cout << '\n';

    cout << "String after trimming left: " << " ";
    trim_left(a);
    for(int i = 0; i < length(a); i++) cout << a[i];
    cout << '\n';

    cout << "String after trimming right: " << " ";
    trim_right(a);
    for(int i = 0; i < length(a); i++) cout << a[i];
    cout << '\n';
    return 0;
}