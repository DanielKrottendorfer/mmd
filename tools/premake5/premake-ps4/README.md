# PS4 Premake Module

This Premake5 module allows you to create projects targeting the Playstation 4, and was created internally at Blizzard Entertainment.
This can be combined with our open source console module (https://github.com/Blizzard/premake-consoles), or used independently.

Notice:
SIE makes no representation or warranty with respect to the premake module. SIE is not responsible for the premake module and shall not be liable for any use of the premake module, including any claims, losses or damages related to the premake module.

## Requirements

* Premake5 (https://premake.github.io/)
* Playstation 4 SDK

## How To Use

Extract this somewhere Premake will be able to find it.
In your project's premake script import the module:

```lua
require("premake-ps4")
```

This will add the following new options to `system`:

* `orbis` (Playstation 4)

## Example

```lua
workspace "MyWorkspace"
  configurations { "Debug", "Release" }	
  system "orbis"
```
