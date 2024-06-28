#ifndef VAR1
void FUN1(void * VAR2)
{
 short * VAR3 = (short *)VAR2;
 short VAR4 = (*VAR3);
 {
 short VAR5 = VAR4 - 1;
 FUN2(VAR5);
 }
}
void FUN3(void * VAR2)
{
 short * VAR3 = (short *)VAR2;
 short VAR4 = (*VAR3);
 if (VAR4 > VAR6)
 {
 short VAR5 = VAR4 - 1;
 FUN2(VAR5);
 }
 else
 {
 FUN4("");
 }
}
#endif
