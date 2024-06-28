#ifndef VAR1
VAR2 * FUN1(VAR2 * VAR3)
{
 VAR3 = new VAR2[100];
 return VAR3;
}
VAR2 * FUN2(VAR2 * VAR3)
{
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 return VAR3;
}
#endif
