#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 char VAR5[50] = "";
 memmove(VAR5, VAR4, strlen(VAR4)*sizeof(char));
 VAR5[50-1] = '';
 FUN2(VAR4);
 }
}
#endif
