#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 while(1)
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 break;
 }
 {
 char VAR4[50] = "";
 memmove(VAR4, VAR2, strlen(VAR2)*sizeof(char));
 VAR4[50-1] = '';
 FUN2(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
