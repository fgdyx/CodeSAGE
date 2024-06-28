#ifndef VAR1
void FUN1(long * VAR2)
{
 if (VAR2 != NULL)
 {
 VAR2[0] = 5L;
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
#endif
