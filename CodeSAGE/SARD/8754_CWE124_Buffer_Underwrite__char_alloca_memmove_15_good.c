#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 VAR2 = VAR3;
 break;
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 memmove(VAR2, VAR4, 100*sizeof(char));
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
 switch(6)
 {
 case 6:
 VAR2 = VAR3;
 break;
 default:
 FUN3("");
 break;
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 memmove(VAR2, VAR4, 100*sizeof(char));
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
