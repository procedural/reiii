#pragma once

void iiiHash(uint64_t hash);
void iiiScreen(unsigned w, unsigned h, const void * displayOrHinstance, const void * windowOrHwnd);
void iiiPixels(unsigned id, unsigned pixelsIndex, unsigned w, unsigned h, unsigned isCube, unsigned clearPixels);
void iiiPixel(unsigned id, unsigned x, unsigned y, unsigned z, unsigned char r, unsigned char g, unsigned char b, unsigned char a);
void iiiTriangles(unsigned id, unsigned trianglesIndex, unsigned enabledVertexAttributesCount);
void iiiTriangle(unsigned id,
  float v0a0x, float v0a0y, float v0a0z, float v0a0w, float v0a1x, float v0a1y, float v0a1z, float v0a1w, float v0a2x, float v0a2y, float v0a2z, float v0a2w, float v0a3x, float v0a3y, float v0a3z, float v0a3w,
  float v1a0x, float v1a0y, float v1a0z, float v1a0w, float v1a1x, float v1a1y, float v1a1z, float v1a1w, float v1a2x, float v1a2y, float v1a2z, float v1a2w, float v1a3x, float v1a3y, float v1a3z, float v1a3w,
  float v2a0x, float v2a0y, float v2a0z, float v2a0w, float v2a1x, float v2a1y, float v2a1z, float v2a1w, float v2a2x, float v2a2y, float v2a2z, float v2a2w, float v2a3x, float v2a3y, float v2a3z, float v2a3w);
void iiiInstances(unsigned id, unsigned x, unsigned y, unsigned w, unsigned h, unsigned clearScreenColor, unsigned clearScreenDepth, float clearScreenDepthValue, const void * pipelineAndSamplersState, const unsigned * pixelsIndexes);
void iiiInstance(unsigned id, unsigned trianglesIndex, unsigned parametersOffset);
void iiiParameters(void * parameters);
void iiiSend(unsigned idsCount, const unsigned * ids);
void iiiReadback(unsigned x, unsigned y, unsigned w, unsigned h, unsigned char * outPixels);
void iiiPresent(void);
void iiiDestroyEverything(void);
