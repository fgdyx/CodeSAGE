#ifndef VAR1
void FUN1(char * VAR2[])
{
 char * VAR3 = VAR2[2];
 {
 char VAR4[50] = "";
 strcpy(VAR4, VAR3);
 FUN2(VAR3);
 }
}
#endif
