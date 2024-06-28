#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 while(1)
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 break;
 }
 {
 char VAR3[50] = "";
 memcpy(VAR3, VAR2, strlen(VAR2)*sizeof(char));
 VAR3[50-1] = '';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
