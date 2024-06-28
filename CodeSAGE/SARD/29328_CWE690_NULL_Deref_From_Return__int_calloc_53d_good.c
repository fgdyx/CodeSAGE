#ifndef VAR1
void FUN1(int * VAR2)
{
 if (VAR2 != NULL)
 {
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
#endif
