#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[50] = "";
 strncat(VAR4, VAR2, strlen(VAR2));
 VAR4[50-1] = '';
 FUN2(VAR2);
 }
}
#endif
