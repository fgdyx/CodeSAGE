#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memmove(VAR4, VAR5, 100*sizeof(char));
 VAR4[100-1] = '';
 FUN2(VAR4);
 delete [] VAR4;
 }
}
#endif
