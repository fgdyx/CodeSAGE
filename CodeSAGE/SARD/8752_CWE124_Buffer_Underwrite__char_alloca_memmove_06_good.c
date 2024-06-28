#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if(VAR4!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR3;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memmove(VAR2, VAR5, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN3(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if(VAR4==5)
 {
 VAR2 = VAR3;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memmove(VAR2, VAR5, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN3(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
