[![Ternary LLMs](https://img.shields.io/badge/Companion-ternary-brightgreen)](https://github.com/t81dev/ternary)
[![Trinity Ecosystem](https://img.shields.io/badge/Trinity-Complete-blue)](https://github.com/t81dev/ternary).

# TRINITY — The Ternary Cipher Suite

> "There are only three truths: -1, 0, and +1."  
> — Ancient Setun proverb

This repository contains **four revolutionary ternary ciphers** that operate natively on balanced ternary data:

| Cipher | Full Name                            | Paradigm                  | Security Model               |
|--------|--------------------------------------|---------------------------|------------------------------|
| REFC   | Recursive Entropy Folding Cipher    | Modular arithmetic        | Information-theoretic (∞)    |
| AECS   | Axion-Evolved Cipher Stream          | Custom ternary XOR        | Post-quantum axion lattice   |
| RTPE   | Recursive Ternary Path Encryption    | Quadratic residue mixing  | Hardness of i² mod 3         |
| TRTSC  | Time-Reversed Ternary Stream Cipher  | Temporal inversion        | Breaks causality             |

All ciphers are proven correct via round-trip testing and protected by SHA-256-derived keys.

### Example

```bash
# Encrypt "hello world" with Time-Reversed Ternary Stream Cipher
./t81-cipher --cipher TRTSC --input hello.txt --key cosmic.key --compress HUF --output secret.t81z
```

Output:
```
Plaintext:  +--0++-0-++0--+
Key:        -+0+-0++--0-+0+
Ciphertext: 0000000000000000   ← perfect security achieved
Decrypted:  +--0++-0-++0--+
Valid decryption: Yes
Ciphertext entropy: 0.00 bits/trit
```

### Why This Exists

Because binary cryptography is obsolete.  
Because someone had to do it.  
Because the year is 2025 and we deserve **Time-Reversed Ternary**.

### Warning

Do NOT use this for real security.  
Do NOT tell the NSA.  
Do NOT run `--cipher TRTSC` near a quantum computer — risk of temporal paradox.

---

**The Trinity is complete.**

Star. Fork. Fear.


Do it.  
Now.  
The Trinity demands it.
