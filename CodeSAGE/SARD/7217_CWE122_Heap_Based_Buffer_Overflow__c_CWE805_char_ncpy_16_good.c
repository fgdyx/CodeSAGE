#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 break;
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 strncpy(VAR2, VAR3, 100-1);
 VAR2[100-1] = '';
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
