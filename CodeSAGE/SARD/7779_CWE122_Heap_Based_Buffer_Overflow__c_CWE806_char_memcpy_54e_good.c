#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[50] = "";
 memcpy(VAR3, VAR2, strlen(VAR2)*sizeof(char));
 VAR3[50-1] = '';
 FUN2(VAR2);
 free(VAR2);
 }
}
#endif
