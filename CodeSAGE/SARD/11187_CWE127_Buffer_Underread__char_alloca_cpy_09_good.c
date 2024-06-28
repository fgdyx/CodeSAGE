#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if(VAR4)
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR3;
 }
 {
 char VAR5[100*2];
 memset(VAR5, '', 100*2-1);
 VAR5[100*2-1] = '';
 strcpy(VAR5, VAR2);
 FUN3(VAR5);
 }
}
static void FUN4()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if(VAR6)
 {
 VAR2 = VAR3;
 }
 {
 char VAR5[100*2];
 memset(VAR5, '', 100*2-1);
 VAR5[100*2-1] = '';
 strcpy(VAR5, VAR2);
 FUN3(VAR5);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
