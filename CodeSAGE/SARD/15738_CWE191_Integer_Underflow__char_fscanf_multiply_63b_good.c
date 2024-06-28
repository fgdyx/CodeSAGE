#ifndef VAR1
void FUN1(char * VAR2)
{
 char VAR3 = *VAR2;
 if(VAR3 < 0)
 {
 char VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
}
void FUN3(char * VAR2)
{
 char VAR3 = *VAR2;
 if(VAR3 < 0)
 {
 if (VAR3 > (VAR5/2))
 {
 char VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
