#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 if(0)
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memcpy(VAR2, VAR5, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN3(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 if(1)
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memcpy(VAR2, VAR5, 100*sizeof(char));
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
