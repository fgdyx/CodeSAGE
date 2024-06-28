#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[100] = "";
 FUN2(VAR4, 100-1, VAR2);
 FUN3(VAR4);
 }
}
void FUN4()
{
 char * VAR2 = VAR5;
 {
 char VAR4[100] = "";
 FUN2(VAR4, 100-1, "", VAR2);
 FUN3(VAR4);
 }
}
#endif
