#ifndef VAR1
void FUN1(VAR2 * &VAR3)
{
 VAR3 = new VAR2[100];
}
void FUN2(VAR2 * &VAR3)
{
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
}
#endif
