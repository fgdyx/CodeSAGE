#ifndef VAR1
void FUN1(char * VAR2[])
{
 char * VAR3 = VAR2[2];
 {
 char VAR4[10+1] = VAR5;
 strcpy(VAR3, VAR4);
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
