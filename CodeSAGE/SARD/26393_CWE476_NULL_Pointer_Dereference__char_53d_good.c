#ifndef VAR1
void FUN1(char * VAR2)
{
 FUN2(VAR2[0]);
}
void FUN3(char * VAR2)
{
 if (VAR2 != NULL)
 {
 FUN2(VAR2[0]);
 }
 else
 {
 FUN4("");
 }
}
#endif
