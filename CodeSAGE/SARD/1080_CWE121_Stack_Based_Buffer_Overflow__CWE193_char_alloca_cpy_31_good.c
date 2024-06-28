#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2((10)*sizeof(char));
 char * VAR4 = (char *)FUN2((10+1)*sizeof(char));
 VAR2 = VAR4;
 VAR2[0] = '';
 {
 char * VAR5 = VAR2;
 char * VAR2 = VAR5;
 {
 char VAR6[10+1] = VAR7;
 strcpy(VAR2, VAR6);
 FUN3(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
