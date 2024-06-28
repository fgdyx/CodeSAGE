#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 if (VAR3 != NULL)
 {
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 free(VAR3);
 }
}
#endif
