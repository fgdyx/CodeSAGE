#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 FUN2(VAR3[0]);
}
void FUN3(char * * VAR2)
{
 char * VAR3 = *VAR2;
 if (VAR3 != NULL)
 {
 FUN2(VAR3[0]);
 }
 else
 {
 FUN4("");
 }
}
#endif
