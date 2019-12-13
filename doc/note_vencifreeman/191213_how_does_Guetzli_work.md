# Guetzli/bin

```
Creator: @VenciFreeman;		Last edit: 19/12/13;
```

## Introduction

- Reduce the size of JPEG images *without impacting the perceived visual quality* of the images;
- A degradation in visual quality that is both more **homogeneous** and yields smaller JPEG images, the JPEG image should start to degrade roughly evenly everywhere when the degradation starts to become visible;
- Discrete cosine transform, less **ringing artifacts**, **closed-loop optimization**;
- Blue changes are more diﬃcult to see on the yellow background;
  - Changes in blue in the vicinity of yellow can be encoded less precisely;
  - High frequency changes in blue can be encoded less precisely;
  - Encode areas with large amount of visual noise less precisely;
- Guetzli computes two separate masking models – one for low spatial frequency color modeling and one for high spatial frequency color modeling.
- Both models contain one mask for each dimension of the color space.

## Methods

- Converting an image to YUV colorspace;
- Breaking it up into blocks;
- Transforming each block into frequency domain using DCT;
- Quantizing the resulting coeﬃcients and compressing them losslessly.

### 优化

-  调整全局，量化表；
  - 改变全局量化表以使量化更粗糙；
  - 减小图像的大小 (通过减小存储系数的大小)；
  - 类似于调整传统JPEG编码器中的质量参数。
- 零替换一些DCT系数 (0是RLE编码的)；
  -  直接修改系数；
  -  JPEG用联合熵RLE方法与DCT值预编码一起编码0，0越多文件大小越小；
  -  扭曲该块的视觉外观。
- 使用色度通道被采样的模式(YUV420)。
  - 很少使用，可以考虑优化掉。

### 