#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 {
 char VAR4[50] = "";
 memcpy(VAR4, VAR3, strlen(VAR3)*sizeof(char));
 VAR4[50-1] = '';
 FUN2(VAR3);
 }
}
#endif
