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
