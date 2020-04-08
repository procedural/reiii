#pragma once

void iiiHash(uint64_t hash);
void iiiScreen(unsigned w, unsigned h, const void * displayOrHinstance, const void * windowOrHwnd);
void iiiBegin(unsigned id);
void iiiPixels(unsigned id, unsigned pixelsIndex, unsigned w, unsigned h, unsigned isCube, unsigned clearPixels);
void iiiPixel(unsigned id, unsigned x, unsigned y, unsigned z, unsigned char r, unsigned char g, unsigned char b, unsigned char a);
void iiiTriangles(unsigned id, unsigned trianglesIndex);
void iiiTriangle(unsigned id,
  float x0, float y0, float z0, float w0, float r0, float g0, float b0, float a0, float u0x, float v0y, float u0z, float v0w,
  float x1, float y1, float z1, float w1, float r1, float g1, float b1, float a1, float u1x, float v1y, float u1z, float v1w,
  float x2, float y2, float z2, float w2, float r2, float g2, float b2, float a2, float u2x, float v2y, float u2z, float v2w);
void iiiInstances(unsigned x, unsigned y, unsigned w, unsigned h, unsigned clearScreenColor, unsigned clearScreenDepth, float clearScreenDepthValue, const void * pipelineAndSamplersState, unsigned pixelsIndexOffsetForUvXy, unsigned pixelsIndexOffsetForUvZw);
void iiiInstance(unsigned trianglesIndex, unsigned parametersOffset);
void iiiEnd(unsigned id);
void iiiParameters(void * parameters);
void iiiSend(unsigned idsCount, const unsigned * ids);
void iiiReadback(unsigned x, unsigned y, unsigned w, unsigned h, unsigned char * outPixels);
void iiiPresent(void);
void iiiDestroyEverything(void);
