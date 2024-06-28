#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 break;
 }
 {
 char VAR4[50] = "";
 memcpy(VAR4, VAR2, strlen(VAR2)*sizeof(char));
 VAR4[50-1] = '';
 FUN3(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 break;
 default:
 FUN3("");
 break;
 }
 {
 char VAR4[50] = "";
 memcpy(VAR4, VAR2, strlen(VAR2)*sizeof(char));
 VAR4[50-1] = '';
 FUN3(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
