/* Reconstruction of Server.exe FUN_0052dee0 (World::falloffSquared), true __thiscall.
   Forwards to feature_falloff (float in ST0), then f<=0 ? 0 : f*f. */
struct C {
    float feature_falloff(void *a, void *b);   // 0x52c820
    float falloff_squared(void *a, void *b);
};
float C::falloff_squared(void *a, void *b)
{
    float f = 1.0f - feature_falloff(a, b);
    if (0.0f < f)
        return f * f;
    return 0.0f;
}
