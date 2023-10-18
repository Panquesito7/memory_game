#!/bin/bash
# Packs up the created binaries by the release workflow
# which are then uploaded as release assets in any release.

mkdir -p binaries
7z a -mx=9 -tzip memory_game-x64.zip vc_redistributable_links.txt x64/Release/Memory_Game.exe
7z a -mx=9 -ttar memory_game-x64.tar vc_redistributable_links.txt x64/Release/Memory_Game.exe
7z a -mx=9 -tzip memory_game-x86.zip vc_redistributable_links.txt Release/Memory_Game.exe
7z a -mx=9 -ttar memory_game-x86.tar vc_redistributable_links.txt Release/Memory_Game.exe

# Use the GZip compression algorithm
7z a -mx=9 -tgzip memory_game-x64.tar.gz memory_game-x64.tar
7z a -mx=9 -tgzip memory_game-x86.tar.gz memory_game-x86.tar

# We're going to use TAR.GZ files
rm memory_game-x64.tar
rm memory_game-x86.tar

mv memory_game-x64.zip binaries/
mv memory_game-x64.tar.gz binaries/
mv memory_game-x86.zip binaries/
mv memory_game-x86.tar.gz binaries/
