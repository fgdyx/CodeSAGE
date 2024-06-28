#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char * VAR4 = (char *)FUN2(50*sizeof(char));
 char * VAR5 = (char *)FUN2(100*sizeof(char));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = VAR5;
 VAR3[0] = '';
 }
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 memmove(VAR3, VAR6, 100*sizeof(char));
 VAR3[100-1] = '';
 FUN3(VAR3);
 }
}
void FUN4()
{
 FUN1();
}
#endif
