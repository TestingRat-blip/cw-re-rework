/* Reconstruction of Server.exe FUN_0052dee0 (World_falloffSquared).
   __thiscall; forwards to feature_falloff (0x52c820, returns float in ST0), then f<=0?0:f*f. */
struct C;
float __fastcall feature_falloff(struct C *self, void *edx_unused, void *a, void *b);

float __fastcall world_falloff_squared(struct C *self, void *edx_unused, void *a, void *b)
{
    float f = 1.0f - feature_falloff(self, 0, a, b);
    if (0.0f < f)
        return f * f;
    return 0.0f;
}
