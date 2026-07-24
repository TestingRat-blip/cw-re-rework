/* Reconstruction of Server.exe FUN_00411090 (formula_inverse).
   Original codegen: SSE scalar, single-precision, 1.0f CSE'd into one reg, FLD return. */
float formula_inverse(float x)
{
    return (1.0f / (1.0f - x) - 1.0f) * 20.0f + 1.0f;
}
