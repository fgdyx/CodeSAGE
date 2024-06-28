#ifndef VAR1
void FUN1(void * VAR2)
{
 short * VAR3 = (short *)VAR2;
 short VAR4 = (*VAR3);
 {
 short VAR5 = VAR4 * VAR4;
 FUN2(VAR5);
 }
}
void FUN3(void * VAR2)
{
 short * VAR3 = (short *)VAR2;
 short VAR4 = (*VAR3);
 if (FUN4((long)VAR4) <= (long)FUN5((double)VAR6))
 {
 short VAR5 = VAR4 * VAR4;
 FUN2(VAR5);
 }
 else
 {
 FUN6("");
 }
}
#endif
