#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[50] = "";
 FUN2(VAR4, strlen(VAR2), "", VAR2);
 FUN3(VAR2);
 free(VAR2);
 }
}
#endif
