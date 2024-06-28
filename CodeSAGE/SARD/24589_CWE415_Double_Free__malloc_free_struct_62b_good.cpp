#ifndef VAR1
void FUN1(VAR2 * &VAR3)
{
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
}
void FUN2(VAR2 * &VAR3)
{
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 free(VAR3);
}
#endif
