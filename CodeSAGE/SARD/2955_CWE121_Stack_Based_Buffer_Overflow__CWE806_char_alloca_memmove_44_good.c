#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[50] = "";
 memmove(VAR3, VAR2, strlen(VAR2)*sizeof(char));
 VAR3[50-1] = '';
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 char * VAR6 = (char *)FUN4(100*sizeof(char));
 VAR2 = VAR6;
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 FUN5(VAR2);
}
void FUN6()
{
 FUN3();
}
#endif
