/* variant: condition written as the decompiler showed it -- if (f <= 0) return 0 first */
struct C {
    float feature_falloff(void *a, void *b);
    float falloff_squared(void *a, void *b);
};
float C::falloff_squared(void *a, void *b)
{
    float f = 1.0f - feature_falloff(a, b);
    if (f <= 0.0f)
        return 0.0f;
    return f * f;
}
