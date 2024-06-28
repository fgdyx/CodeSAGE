#ifndef VAR1
void FUN1(VAR2 * &VAR3)
{
 VAR3 = (VAR2 *)FUN2(100*sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
}
void FUN4(VAR2 * &VAR3)
{
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
}
#endif
