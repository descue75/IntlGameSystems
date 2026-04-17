# IntlGameSystems

A C++ gameplay systems project focused on building **config-driven, multi-variant game logic** similar to real-world international game development.

---

## 🎯 Purpose

This project is designed to explore and implement:

- Configuration-driven gameplay behavior
- Strategy-based variation (payout, bonus, etc.)
- State-driven game flow
- Clean separation of concerns
- Testable C++ systems

The focus is **game systems architecture**, not rendering or engine development.

---

## 🧱 Tech Stack

- **C++17**
- **CMake** (build system)
- **GoogleTest** (testing)
- **clang-format / clang-tidy** (linting)
- **Linux/WSL toolchain** (gcc/clang + make)

---

## 📁 Project Structure

```
src/
  config/      # Config models, loader, validation
  core/        # Shared types/utilities
  strategies/  # Behavior variation (future)
  flow/        # State machine (future)
  factory/     # Composition root (future)
  platform/    # Interfaces/adapters (future)

tests/
  config/      # Config-related tests

data/
  markets/     # Market configuration files (future)

docs/
  projects/    # Project breakdown and learning phases
```

---

## 🚀 Getting Started

### 1. Configure

```bash
cmake -S . -B build -G "Unix Makefiles"
```

### 2. Build

```bash
cmake --build build
```

### 3. Run

```bash
./build/IntlGameSystems
```

### 4. Run Tests

```bash
ctest --test-dir build
```

---

## 🧪 Testing

Tests are written using **GoogleTest** and integrated via CMake/CTest.

---

## 🧹 Linting

### Format code

```bash
clang-format -i src/**/*.cpp src/**/*.h
```

### Static analysis

clang-tidy runs automatically during the build via CMake.

---

## 🧭 Roadmap

### Project 1
- Config + validation system

### Project 2
- Strategy pattern (behavior variation)

### Project 3
- State machine (game flow)

### Project 4
- Full system integration (factory + adapters)

---

## 🧠 Design Goals

- Avoid hardcoded branching (`if (market == ...)`)
- Prefer **data-driven rules**
- Keep systems **testable and modular**
- Build toward **real-world maintainability**

---

## 📌 Notes

- CMake is the source of truth for builds
- IDE-specific files are not committed
- Linux build environment is the primary target

---

## 📄 License

(Optional — add later)