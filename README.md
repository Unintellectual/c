# c
A simple base layer, and utilities for my own C development. A lot of the stuff came from [Mr4thProgramming](https://www.youtube.com/c/Mr4thProgramming) and [voxelrifts](https://www.youtube.com/@voxelrifts), but I have made a few simplifications/modifications

## References

https://www.youtube.com/c/Mr4thProgramming
https://www.youtube.com/@voxelrifts

## What does this codebase have (Still in development)

- [ ] A Base Layer:
  - [ ] Basic Memory Allocators
  - [ ] String Utilities
  - [ ] Thread Context
  - [ ] Math
  - [ ] Logging
  - [ ] Generic Data structure defining macros
- [ ] An OS Layer: (Only win32 and x11 linux implemented)
  - [ ] Basic File handling
  - [ ] Dynamic Library Loading
  - [ ] Windowing
  - [ ] Input
  - [ ] Timing
  - [ ] Threading
- [ ] A Core Graphics Layer:
  - [ ] Multiple Backends (OpenGL 3.3, OpenGL 4.6 and D3D11, raylib)
  - [ ] OS Specific Device/Context Creation
  - [ ] OpenGL Function Loading
  - [ ] Thin wrapper over backend specific calls (Buffers, Pipelines and Shaders are generic to all backends)
- [ ] Several Optional Layers
  - [ ] Simple 2D Renderer
  - [ ] User Interface
  - [ ] Simple 2D Physics Engine
