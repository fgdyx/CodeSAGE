#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[100] = "";
 FUN2(VAR3, 100-1, VAR2);
 FUN3(VAR3);
 }
}
void FUN4(char * VAR2)
{
 {
 char VAR3[100] = "";
 FUN2(VAR3, 100-1, "", VAR2);
 FUN3(VAR3);
 }
}
#endif
