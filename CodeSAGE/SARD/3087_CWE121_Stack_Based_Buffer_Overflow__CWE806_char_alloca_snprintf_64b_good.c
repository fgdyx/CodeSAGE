#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 char VAR5[50] = "";
 FUN2(VAR5, strlen(VAR4), "", VAR4);
 FUN3(VAR4);
 }
}
#endif
