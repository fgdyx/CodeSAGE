#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 FUN2(VAR2[0]);
}
void FUN3()
{
 char * VAR2 = VAR4;
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
