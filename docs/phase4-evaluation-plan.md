# Phase 4 Evaluation Plan

Roadmap tracker: https://github.com/t81dev/t81-roadmap/issues/5  
Implementation issue: https://github.com/t81dev/trinity/issues/1

## Objective

Define a measurable security/applied-domain evaluation baseline for `trinity`.

## Evaluation Signals

| Signal | Method | Pass/Fail Rule |
| --- | --- | --- |
| Round-trip correctness | Encrypt/decrypt fixture corpus across all supported cipher modes | `pass` if output equals original input for every fixture |
| Deterministic execution | Repeat same input/key/cipher tuple 10 times | `pass` if ciphertext/decrypt output and summary metadata are byte-identical |
| Integrity guard | Corrupt ciphertext payload bytes and re-run decrypt validation | `pass` if validation failure is surfaced and flagged |
| Compression boundary behavior | Evaluate with and without compression mode flags | `pass` if decode path remains valid and output integrity holds |

## Evidence Artifact Path

Store Phase 4 evidence under:

- `evidence/phase4/YYYY-MM-DD/`
- minimum files:
  - `evaluation-summary.json`
  - `fixture-results.json`
  - `notes.md`

`evaluation-summary.json` should include:

- repo commit SHA
- run timestamp (UTC)
- fixture count
- per-signal pass/fail
- unresolved risks

## Initial Risk Register

1. Cipher-mode claims in project copy may overstate guarantees relative to measured behavior.
2. Error handling can drift without fixture-based negative tests.
3. Compression/decompression coupling may hide corruption edge cases unless exercised explicitly.
