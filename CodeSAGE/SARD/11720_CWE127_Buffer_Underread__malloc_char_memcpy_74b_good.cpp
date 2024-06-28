#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memcpy(VAR5, VAR4, 100*sizeof(char));
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
}
#endif
