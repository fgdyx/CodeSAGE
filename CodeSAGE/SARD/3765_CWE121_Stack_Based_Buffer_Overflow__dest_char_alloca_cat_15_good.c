#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 VAR2 = VAR4;
 VAR2[0] = '';
 break;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strcat(VAR2, VAR5);
 FUN3(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 switch(6)
 {
 case 6:
 VAR2 = VAR4;
 VAR2[0] = '';
 break;
 default:
 FUN3("");
 break;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strcat(VAR2, VAR5);
 FUN3(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
