#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 char VAR5[100*2];
 memset(VAR5, '', 100*2-1);
 VAR5[100*2-1] = '';
 strcpy(VAR5, VAR4);
 FUN2(VAR5);
 }
}
#endif
