#ifndef VAR1
void FUN1(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 {
 int VAR5 = VAR4 * VAR4;
 FUN2(VAR5);
 }
}
void FUN3(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 if (FUN4((long)VAR4) <= (long)FUN5((double)VAR6))
 {
 int VAR5 = VAR4 * VAR4;
 FUN2(VAR5);
 }
 else
 {
 FUN6("");
 }
}
#endif
