#pragma once

void iiiHash(uint64_t hash);
void iiiScreen(unsigned w, unsigned h, const void * displayOrHinstance, const void * windowOrHwnd);
void iiiBegin(unsigned id);
void iiiPixels(unsigned id, unsigned pixelsIndex, unsigned w, unsigned h, unsigned clearPixels);
void iiiPixel(unsigned id, unsigned x, unsigned y, unsigned char r, unsigned char g, unsigned char b, unsigned char a);
void iiiTriangles(unsigned id, unsigned w, unsigned h, unsigned clearScreen, float clearDepthValue, const void * pipelineAndSamplerState);
void iiiTriangle(unsigned id,
  float x0, float y0, float z0, float w0, float r0, float g0, float b0, float a0, float u0, float v0, 
  float x1, float y1, float z1, float w1, float r1, float g1, float b1, float a1, float u1, float v1, 
  float x2, float y2, float z2, float w2, float r2, float g2, float b2, float a2, float u2, float v2, unsigned pixelsIndex);
void iiiEnd(unsigned id);
void iiiSend(unsigned idsCount, const unsigned * ids);
void iiiReadback(unsigned char * outPixels);
void iiiPresent(void);
void iiiDestroyEverything(void);
