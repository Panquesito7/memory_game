# Memory Game 🎴

[![Build Windows Forms app](https://github.com/Panquesito7/memory_game/actions/workflows/build.yml/badge.svg)](https://github.com/Panquesito7/memory_game/actions/workflows/build.yml)

A Memory Game (with buttons) made in C++ using Windows Forms, CLI/CLR.\
More variety of modes (classic, time limit, etc.) are coming very soon!

![Main screenshot.](https://github.com/Panquesito7/memory-game/assets/51391473/881ef6ca-4c4c-4187-ad5a-cc1b6946e73e)

<!-- Add a new video in 1080p60 from YouTube -->

## Requirements

- Microsoft Windows 10 1909 build or later.
- [Microsoft .NET Framework 4.8](https://dotnet.microsoft.com/en-us/download/dotnet-framework/net48) or later.
- [Microsoft Visual Studio 2022](https://visualstudio.microsoft.com/) or later.
  - This is only required if you want to build the program yourself.
- Microsoft Visual C++ Redistributable for Visual Studio 2022 or later.
  - If you're not installing Visual Studio, this will be required to run the program.
  - You can see the links in [`vc_redistributable_links.txt`](vc_redistributable_links.txt).

## Running the program

### Downloading the program

1. Download the latest release for your architecture (64-bit or 32-bit) from the [releases](https://github.com/Panquesito7/memory_game/releases) page.
2. Extract the contents of the ZIP file to a folder of your choice.
3. Open the executable file. You will need to install the dependencies mentioned above **if applicable**.

### Building yourself

1. Clone the repository.

```bash
git clone https://github.com/Panquesito7/memory_game.git
```

2. Install the latest Microsoft [Visual Studio 2022](https://visualstudio.microsoft.com/) version with .NET Desktop Development workload.
   - You might need to install C++/CLI support (v143) from the Individual Components tab.

3. Open the solution file in Visual Studio.
4. Build the project using the `Release` configuration for the desired architecture.

## License

See the [`LICENSE.md`](LICENSE.md) file for full information and details.
