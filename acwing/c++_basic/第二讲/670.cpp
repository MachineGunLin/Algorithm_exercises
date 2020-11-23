#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3, name;
    cin >> s1 >> s2 >> s3;
    if(s1 == "vertebrado") {
        if(s2 == "ave") {
            if(s3 == "carnivoro") {
                name = "aguia";
            } else {
                name = "pomba";
            }
        } else {
            if(s3 == "onivoro") {
                name = "homem";
            } else {
                name = "vaca";
            }
        }
    } else {
        if(s2 == "inseto") {
            if(s3 == "hematofago") {
                name = "pulga";
            } else {
                name = "lagarta";
            }
        } else {
            if(s3 == "hematofago") {
                name = "sanguessuga";
            } else {
                name = "minhoca";
            }
        }
    }
    cout << name << endl;
}
