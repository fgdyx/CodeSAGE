#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 goto VAR5;
VAR5:
 VAR2 = VAR4;
 VAR2[0] = '';
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strcpy(VAR2, VAR5);
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
