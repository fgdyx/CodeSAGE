#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 strcpy(VAR2, VAR3);
 FUN2(VAR2);
 free(VAR2);
 }
}
#endif
