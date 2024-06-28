#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 memcpy(VAR3, VAR2, 100*sizeof(char));
 VAR3[100-1] = '';
 FUN2(VAR3);
 }
}
static void FUN3()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 char * VAR6 = (char *)FUN4(100*sizeof(char));
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 VAR2 = VAR6;
 FUN5(VAR2);
}
void FUN6()
{
 FUN3();
}
#endif
