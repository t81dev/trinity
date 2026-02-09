# Trinity Quarterly Objectives (2026 Q1)

Roadmap tracker: https://github.com/t81dev/t81-roadmap/issues/22
Repo Phase 4 issue: https://github.com/t81dev/trinity/issues/1

## Objective 1: Deterministic Evaluation Bundle

- Deliverable: first reproducible Phase 4 bundle in `evidence/phase4/YYYY-MM-DD/`.
- Acceptance checks:
  - `evaluation-summary.json` includes repo SHA, manifest contract version, and VM pin.
  - `fixture-results.json` covers all supported cipher modes.
  - repeated run on same inputs produces byte-identical output artifacts.

## Objective 2: Negative-Path Integrity Coverage

- Deliverable: corruption and wrong-key fixture cases integrated into evaluation bundle.
- Acceptance checks:
  - corrupted payload case fails with explicit classification in summary.
  - wrong-key case fails deterministically and is included in pass/fail table.

## Objective 3: Roadmap Evidence Cadence

- Deliverable: one evidence update per month linked from roadmap status.
- Acceptance checks:
  - each monthly update includes artifact path and run timestamp.
  - Phase 4 freshness status remains `fresh` in `t81-roadmap/PHASE_EVIDENCE_STATUS.md`.
