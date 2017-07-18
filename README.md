# buck-platform-deps-example

This example shows how to use Buck `platform_deps` with a C++ binary. `platform_deps` allows you to have different dependencies based on the platform identifier. This is useful when abstracting over platform differences, such as network, GUI and sockets.

This project has three targets:

 * `//apple:apple` - a library for macOS systems
 * `//linux:linux` - a library for Linux systems
 * `//:main` - a binary for all systems

To run the Linux build:

```bash=
buck run :main#linux-x86_64
```

To run the macOS build:

```bash=
buck run :main#macosx-x86_64
```
