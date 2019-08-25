# Introduction
This is for running python execution file in arm 32 linux box.  

# Requirement
1. An ubuntu box on arm 32 platform
1. pip3, python 3, pyinstaller

# Installation on arm ubuntu box
1. pip3 install ./ 在 staticx 路徑

# Building on arm ubuntu box
1. pyinstall <xyz.py>
1. cd <xyz/dist>
1. static xyz xyz.exe

# Deployment
1. cp arm-linux-gnueabihf to /lib/arm-linux-gnueabihf on target board
1. cp py to /usr/lib/py on target board
