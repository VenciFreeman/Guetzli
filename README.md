<p align="center"><img src="https://cloud.githubusercontent.com/assets/203457/24553916/1f3f88b6-162c-11e7-990a-731b2560f15c.png" alt="Guetzli" width="64"></p>

# Zynq Project: Guetzli

[![Generic badge](https://img.shields.io/badge/Language-C++-red.svg)](https://github.com/VenciFreeman/ZynqPrj)[![Generic badge](https://img.shields.io/badge/Hardware-Zynq-orange.svg)](https://github.com/VenciFreeman/ZynqPrj)[![Generic badge](https://img.shields.io/badge/Deadline-Dec_27_2019-yellow.svg)]( https://github.com/VenciFreeman/ZynqPrj)[![Generic badge](https://img.shields.io/badge/Build-Passing-green.svg)]( https://github.com/VenciFreeman/ZynqPrj)[![Generic badge](https://img.shields.io/badge/License-Apache_2.0-blue.svg)]( https://github.com/VenciFreeman/ZynqPrj/blob/master/LICENSE)[![Generic badge](https://img.shields.io/badge/Thank-Google-purple.svg)]( https://github.com/VenciFreeman/ZynqPrj) 

## What is this repo?

This repo is a project of micro-nano system integrated design that aims to implement [Guetzli]( https://github.com/google/guetzli ), a perceptual JPEG encoder algorithm on [Xilinx Zynq development board]( https://www.xilinx.com/products/silicon-devices/soc/zynq-7000.html ). We'll use Vivado RTL, HLS, and Embedded System. 

## What is Guetzli?

Guetzli is a JPEG encoder that aims for excellent compression density at high visual quality. Guetzli-generated images are typically 20-30% smaller than images of equivalent quality generated by libjpeg. Guetzli generates only sequential (nonprogressive) JPEGs due to faster decompression speeds they offer.

## Who created this project?

This project is a teamwork project. All 3 collaborators are from School of Microelectronics, SJTU. They are:

|   Yang Wenxi    |    [@VenciFreeman](https://github.com/VenciFreeman)     |
| :-------------: | :-----------------------------------------------------: |
|  **Luo Tian**   |  [**@luotian12345**](https://github.com/luotian12345)   |
| **Liu Jianwei** | [**liujianwei0225**](https://github.com/liujianwei0225) |

## How to use it?

### If you build it youself

- **On Windows**
  - Get a copy of the source code, either by cloning this repository, or by downloading an
    [archive](https://github.com/google/guetzli/archive/master.zip) and unpacking it.
  - Install [Visual Studio 2015](https://www.visualstudio.com) and [vcpkg](https://github.com/Microsoft/vcpkg)
  - Install `libpng` using vcpkg: `.\vcpkg install libpng`.
  - Cause the installed packages to be available system-wide: `.\vcpkg integrate install`. If you prefer not to do this, refer to [vcpkg's documentation](https://github.com/Microsoft/vcpkg/blob/master/docs/EXAMPLES.md#example-1-2).
  - Open the Visual Studio project enclosed in the repository and build it.
- **On MacOS**
  - To install using [Homebrew](https://brew.sh/):
    - Install [Homebrew](https://brew.sh/)
    - `brew install guetzli`
  - To install using the repository:
    - Get a copy of the source code, either by cloning this repository, or by
      downloading an [archive](https://github.com/google/guetzli/archive/master.zip) and unpacking it.
    - Install [Homebrew](https://brew.sh/) or [MacPorts](https://www.macports.org/)
    - Install `libpng`
      - Using [Homebrew](https://brew.sh/): `brew install libpng`.
      - Using [MacPorts](https://www.macports.org/): `port install libpng` (You may need to use `sudo`).
      - Run the following command to build the binary in `bin/Release/guetzli`.
        - If you installed using [Homebrew](https://brew.sh/) simply use `make`
        - If you installed using [MacPorts](https://www.macports.org/) use `CFLAGS='-I/opt/local/include' LDFLAGS='-L/opt/local/lib' make`

### Or you wanna use it directly

In `.\bin\x86\Release`:

- Add your images into `imgs/`
- Edit the quality you need in py. or bat.

## Warnings!

- Guetzli uses a large amount of memory. You should provide 300MB of memory per 1MPix of the input image.
-  Guetzli uses a significant amount of CPU time. You should count on using about 1 minute of CPU per 1 MPix of input image.
- Guetzli assumes that input is in **sRGB profile** with a **gamma of 2.2**. Guetzli will ignore any color-profile metadata in the image.

## Requests

- At least **2 methods** to implement, quantitative comparison of trade-off;
  - **Performance:** execution speed, throughput, etc;
  - **Design complexity**: code / tool synergy;
  - **Cost:** resource occupation.

## Schedule

- **2019/11/29**：Team up;
- **2019/12/06**：First defense;
- About **2019/12/28**：Final defense.

## Reference

- [Xilinx](http://digilent.com.cn/project.html)
- [Reference document](https://reference.digilentinc.com/learn/programmable-logic/tutorials/start)
- [Project Requests]( https://weboffice.sjtu.edu.cn/wv/wordviewerframe.aspx?PdfMode=1&WOPISrc=https://jbox.sjtu.edu.cn:10081/v2/wopi/files/309730b59ea9fd825013b58fb58ba4bd&access_token=eyJyb290IjpbMTAwLDEwMSwxMDgsMTA1LDExOCwxMDEsMTE0LDEyMV0sInBhdGgiOls4MCw0NiwxMTIsMTAwLDEwMl0sInBhdGhfdHlwZSI6W10sImZyb20iOltdLCJwcmVmaXhfbmVpZCI6W10sIm5laWQiOls1Nyw1NSw0OCw1MSw1Miw1MCw1MCw1NSw0OF0sInMiOm51bGwsImV4dGVuc2lvbiI6WzQ2LDExMiwxMDAsMTAyXSwiYXV0aG9yaXphdGlvbiI6Wzc2LDY5LDc4LDc5LDg2LDc5LDk1LDgzLDY5LDgzLDgzLDczLDc5LDc4LDU4LDU3LDEwMCw1MywxMDcsOTksNTYsOTgsNTQsNTQsMTEwLDQ4LDEwMCwxMDMsOTcsNTAsMTAwLDEwNSwxMDgsOTgsNTYsMTE4LDEwNiwxMTYsMTEwLDEwMSw1NF0sInJldiI6bnVsbCwiY2xpZW50X2lwIjpbNTMsNTcsNDYsNTUsNTYsNDYsNDksNTcsNDYsNTAsNTIsNTVdLCJ1c2VyX25hbWUiOlsxMDgsMTExLDExNywxMDUsMTE1LDk3LDk1LDEwOCwxMDUsMTE3XSwiZGVsaXZlcnlfY29kZSI6Wzk5LDEwMiw1MCw5NywxMDEsOTcsNTIsNTAsMTAyLDEwMCw0OSw1Myw1Miw1Myw1NSw1Niw1NiwxMDEsNDksOTksOTgsOTcsNDksNTAsNTcsNTUsNTQsNTMsOTcsNDgsNTAsOThdLCJkZWxpdmVyeV90b2tlbiI6W10sInVzZXJfYWdlbnQiOltdfQ%3D%3D )
