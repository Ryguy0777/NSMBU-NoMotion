# NSMBU-NoMotion

## Overview
A small [RedCore](https://github.com/Zenith-Team/RedCore) module that disables all GamePad motion control related functions for NSMBU.
This works by treating the GamePad similarly to a Pro Controller, tilting actions are bound to ZL & ZR.
This does mean that ZL and ZR can no longer be used as shake inputs, meaning only L and R can be used to carry objects/spin jump.
A bundle is provided for those who wish to apply the patch on top of other mods, or as a package if a mod creator wishes to incorporate it into their mod directly.

## Setup Guide
### For Modders
- Download the **`bundle`** from the [latest release](https://github.com/Ryguy0777/NSMBU-NoBoostMode/releases/latest) and extract it to your mod folder, merging the `code` folder into your project.
    - The `rules.txt` doesn't matter as long as the `version = 8` in your own.
- Running on console: Use the [Telkin](https://github.com/Zenith-Team/Telkin) aroma plugin to load your whole mod.
    - Place the `code` folders in `sd:/wiiu/telkin/TITLEID/` where `TITLEID` is the [title ID](https://wiiubrew.org/wiki/Title_database#00050000:_Game_Application_Titles) of your game's region (without dashes).
- Running on Cemu: Load and distribute your mod as a GraphicPack by placing it in Cemu's `graphicPacks` folder and activating it in the game's settings.

### Compiling
Install [Tachyon](https://github.com/Zenith-Team/Tachyon) (requires [Node.js](https://nodejs.org/) v24+)
```yml
npm i -g --allow-remote=root https://github.com/Zenith-Team/Tachyon/releases/latest/download/tachyon.tgz
```
Build and run the project for your region (example with `US`)
```rb
tachyon pm install
tachyon compile US
tachyon launch US
```
