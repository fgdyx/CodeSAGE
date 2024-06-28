#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2((10)*sizeof(char));
 char * VAR4 = (char *)FUN2((10+1)*sizeof(char));
 if(FUN3())
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 char VAR5[10+1] = VAR6;
 strcpy(VAR2, VAR5);
 FUN4(VAR2);
 }
}
void FUN5()
{
 FUN1();
}
#endif
