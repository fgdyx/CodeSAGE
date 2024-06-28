#ifndef VAR1
VAR2 * FUN1(VAR2 * VAR3)
{
 VAR3 = (VAR2 *)FUN2(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 return VAR3;
}
VAR2 * FUN4(VAR2 * VAR3)
{
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 return VAR3;
}
#endif
