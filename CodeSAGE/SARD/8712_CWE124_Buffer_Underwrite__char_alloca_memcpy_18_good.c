#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 goto VAR4;
VAR4:
 VAR2 = VAR3;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 memcpy(VAR2, VAR4, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
