# Project 1 — Config + Validation

## Status
Scaffolded

---

## Objective

Establish a minimal foundation for a configuration-driven game system:

- Define core data structures
- Implement basic validation
- Set up testing and build pipeline

---

## Scope

Current implementation includes:

- `MarketRules` data structure
- `ConfigLoader` (stubbed)
- `ConfigValidator` (basic rule)
- GoogleTest setup
- CMake build system

---

## Current Behavior

- Loads a simple `MarketRules` instance
- Validates that `maxBet > 0`
- Outputs basic result
- Includes one unit test for validation

---

## Patterns Introduced

- Configuration-driven design (initial structure)
- Separation of concerns:
  - loading
  - validation

---

## Testing

- Unit test for `ConfigValidator`
- Verified via CTest

---

## Next Steps

- Expand `MarketRules`
- Replace stubbed loader with real config parsing
- Add validation rules
- Add more test coverage

---

## Notes

This project establishes the base structure used for all future projects.