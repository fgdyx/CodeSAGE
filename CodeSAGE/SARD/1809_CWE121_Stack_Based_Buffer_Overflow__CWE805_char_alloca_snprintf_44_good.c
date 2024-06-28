#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 FUN2(VAR2, 100, "", VAR3);
 FUN3(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 char * VAR6 = (char *)FUN5(50*sizeof(char));
 char * VAR7 = (char *)FUN5(100*sizeof(char));
 VAR2 = VAR7;
 VAR2[0] = '';
 FUN6(VAR2);
}
void FUN7()
{
 FUN4();
}
#endif
