#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR3;
 while(1)
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 break;
 }
 {
 char VAR4[50] = "";
 strcpy(VAR4, VAR2);
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
