#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 memmove(VAR3, VAR2, 100*sizeof(char));
 VAR3[100-1] = '';
 FUN2(VAR3);
 }
}
#endif
