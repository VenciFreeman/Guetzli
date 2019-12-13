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