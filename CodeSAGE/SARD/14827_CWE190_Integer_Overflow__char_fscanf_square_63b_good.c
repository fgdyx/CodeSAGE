#ifndef VAR1
void FUN1(char * VAR2)
{
 char VAR3 = *VAR2;
 {
 char VAR4 = VAR3 * VAR3;
 FUN2(VAR4);
 }
}
void FUN3(char * VAR2)
{
 char VAR3 = *VAR2;
 if (FUN4((long)VAR3) <= (long)FUN5((double)VAR5))
 {
 char VAR4 = VAR3 * VAR3;
 FUN2(VAR4);
 }
 else
 {
 FUN6("");
 }
}
#endif
