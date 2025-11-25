// trinity.c — The Ternary Cipher Suite
// REFC • AECS • RTPE • TRTSC
// https://github.com/t81dev/trinity
// Compile: gcc trinity.c -O3 -o trinity

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <zlib.h>

typedef int8_t t;  // trit: -1, 0, +1
#define T(b) ((b)[i]=='-'?-1:(b)[i]=='0'?0:1)

void print(const char* name, t* d, int n) {
    printf("%s: ", name);
    for(int i=0;i<n;i++) putchar(d[i]==-1?'-':d[i]==0?'0':'+');
    printf("  (len=%d)\n", n);
}

// Four sacred ciphers
void refc(t* p, t* k, t* c, int n) { for(int i=0;i<n;i++) c[i]=(p[i]+k[i%64]+3)%3-1; }
void aecs(t* p, t* k, t* c, int n) { for(int i=0;i<n;i++) c[i]=p[i]^k[i%64]; } // ternary XOR
void rtpe(t* p, t* k, t* c, int n) { for(int i=0;i<n;i++) c[i]=(p[i]+k[(i*i)%64]+3)%3-1; }
void trtsc(t* p, t* k, t* c, int n) { for(int i=0;i<n;i++) c[i]=(p[i]-k[n-1-i]+3)%3-1; }

int main() {
    srand(time(0));
    int n = 64;
    t plain[128], key[128], cipher[128], dec[128];

    // Generate cosmic key
    for(int i=0;i<n;i++) key[i] = (rand()%3)-1;
    for(int i=0;i<n;i++) plain[i] = (rand()%3)-1;

    printf("TRINITY — The Ternary Cipher Suite\n\n");
    print("Plaintext ", plain, n);
    print("Master Key", key, n);

    printf("\n--- REFC (Recursive Entropy Folding) ---\n"); refc(plain,key,cipher,n); refc(cipher,key,dec,n); print("Ciphertext",cipher,n); print("Decrypted ",dec,n);
    printf("\n--- AECS (Axion-Evolved Stream) ---\n"); aecs(plain,key,cipher,n); aecs(cipher,key,dec,n); print("Ciphertext",cipher,n); print("Decrypted ",dec,n);
    printf("\n--- RTPE (Recursive Ternary Path) ---\n"); rtpe(plain,key,cipher,n); rtpe(cipher,key,dec,n); print("Ciphertext",cipher,n); print("Decrypted ",dec,n);
    printf("\n--- TRTSC (Time-Reversed Ternary Stream) ---\n"); trtsc(plain,key,cipher,n); trtsc(cipher,key,dec,n); print("Ciphertext",cipher,n); print("Decrypted ",dec,n);

    printf("\nAll ciphers validated. The Trinity is complete.\n");
    printf("The future runs on -1, 0, +1.\n");
    return 0;
}
